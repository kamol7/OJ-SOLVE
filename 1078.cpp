#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll counting(ll n, ll digit){
    ll count =1;
    ll abul=digit;
    while(1){
        digit%=n;
        if(digit==0) return count;
        digit = digit*10 + abul;
        count++; 
    }
}
int main(){
    ll test;
    cin>>test;
    for(ll i=1;i<=test;i++){

        ll div, digit;
        cin>>div>>digit;
        printf("Case %lld: %lld\n",i,counting(div,digit));

    }


    return 0;
    


}