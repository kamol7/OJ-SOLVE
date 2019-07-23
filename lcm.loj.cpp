#include <iostream>
#include<bits/stdc++.h>
#define ll int
#define MAX 100000000
#define pb push_back
using namespace std; // consider removing this line in serious projects

int prime[(MAX>>5)+31];

ll prime_number[5761500];

bool check_bit(ll n, ll pos){
	return(n&(1<<pos)) ;//return false;
	//else return true;
}



int set_bit(ll n, ll pos){
	return n|(1<<pos);
}


void bitsieve(){
	ll i,j,k;
	ll sq= ceil(sqrt(MAX));
	for(i=3;i<=sq;i+=2) {
		if(check_bit(prime[i>>5],i&31)==false){
            //cout<<i<<endl;
			for(j=i*i;j<=MAX;j+=2*i) prime[j>>5]=set_bit(prime[j>>5],j&31);
		}
	}
    //cout<<"Kharap na.\n";
	k=0;
	prime_number[k++]=2;
    
	for(i=3;i<=MAX;i+=2) {
		if(check_bit(prime[i>>5],i&31)==false) prime_number[k++] = i;
	}
    
	//cout<<k<<endl;
}
int main() {
    cout<<check_bit(3,1)<<endl;
    cout<<set_bit(0,1)<<endl;
	bitsieve();

	return 0;
}