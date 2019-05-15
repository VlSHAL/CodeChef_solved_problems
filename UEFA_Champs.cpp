#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(i,a,b) for(ll i=a;i<b;i++)

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string s,s1;
		ll a,b;
		map<string,ll> M,N;
		loop(i,0,12){
		cin>>s>>a;
		cin>>s1>>b>>s1;


		if(a>b)
			M[s]+=3;
		else if(a<b)
			M[s1]+=3;
		else
			M[s]+=1,M[s1]+=1;
		N[s]+=a-b;
		N[s1]+=b-a;
		}
		auto jt=N.begin();
		map<pair<ll,ll> , string > S;
		for(auto it:M){
			S[{it.second,(*jt).second}]=it.first;
			jt++;
		}
		auto it=S.rbegin();
		cout<<(*it).second<<" ";
		it++;
		cout<<(*it).second<<"\n";

	}
}
