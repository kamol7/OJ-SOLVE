#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll lol(ll n){
   ll ans=0;
    while(n!=1){
        if(n%2==0) n/=2;
        else if(n%3==0) n=(n*2)/3;
        else if(n%5==0) n=(n*4)/5;
        else return -1;
        ans++;
    }
    return ans;
}
int main(){
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        cout<<lol(n)<<endl;
    }
    return 0;
}