//#define ll long long
#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define MAX 2750131+5
#define pb push_back
#include<unordered_map>
using namespace std; // consider removing this line in serious projects
bool prime[MAX];
ll prime_number[199999+10];
void sieve(){
	memset(prime,true,MAX);
	ll i,j,k=1;
	for(i=2;i<MAX;i++){
		if(prime[i]){
			prime_number[k++]=i;
			for(j=i*i;j<MAX;j+=i) prime[j]=false;
		}
	}
}
ll composite(ll n){
	ll i,j,k;
	//j=sqrt(n);
	for(i=2;i<n;i++){
		if(n%i==0){
			k=n/i;
			//cout<<k<<endl;
			return  k;
		}
	}
}
int main() {
	sieve();
	ll n;
	cin>>n;
	vector <ll> vec,all;
	map <ll , ll> map_prime,vec_com;
	ll i,lol;
	for(i=0;i<2*n;i++) {
		cin>>lol;
		
		
		if(prime[lol]==false){
		all.pb(lol);	
		 vec_com[lol]++;
		//cout<<vec_com[lol]<<endl;
			
		}
		else map_prime[lol]++;
	}
	sort(all.begin(),all.end());
	reverse(all.begin(),all.end());
	ll com;
	for(i=0;i<all.size();i++){
		//if(prime[all[i]]==false){
			if(vec_com[all[i]]>0){
				//cout<<all[i]<<endl;
				com=composite(all[i]);
				//cout<<com<<endl;
			if(prime[com]){
				map_prime[com]--;
				
			}
			else vec_com[com]--;
			}
		//}
			
		
	}
	auto it=vec_com.begin();;
	ll abal,lll;
	
	for(abal=0;it!=vec_com.end();it++){
		lol=it->second;
		//cout<<lol<<endl;
		if(lol>0){
			for(lll=1;lll<=lol;lll++){
				cout<<it->first<<" ";
				abal++;
				//cout<<abal<<endl;
				if(abal==n) return 0;
			
		}
	}
	}
	auto itr= map_prime.begin();
	for(lol=abal;itr != map_prime.end();itr++){
		abal=itr->second;
		//cout<<abal<<endl;
		if(abal>0){
			for(lll=1;lll<=abal;lll++)
			 {
			 	cout<< itr->first<<" ";
				lol++;
				if(lol==n) return 0;
			 }
		}
		
	}
	puts("\n");
	return 0;
}