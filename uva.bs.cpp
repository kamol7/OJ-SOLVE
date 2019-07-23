#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector <ll> v;
int bs(ll lol,ll x,ll *b, ll *c){
    ll s=0,f=x-1,mid;
    if(lol>v[f]){
        *b=v[f];
        *c=-1;
        return 0;
    }
    if(lol<v[0]){
    	*b=-1;
    	*c=v[0];
    	return 0;
    }
    while(s<f){
        if(lol==v[f]){
            *b=v[f-1];
            if(f==x-1) *c=-1;
            else *c=v[f+1];
            return 0;
        }
        else if(lol==v[s]){
            *c=v[s+1];
            if(s==0) *b=-1;
            else *b=v[s-1];
            return 0;
        }
        else if(v[f]>lol && v[f-1]<lol) {
            *b=v[f-1];
            *c=v[f];
            return 0;
        }
        else if(lol>v[s]&& lol<v[s+1]){
            *b=v[s];
            *c=v[s+1];
            return 0;
        }
        mid=(f+s)/2;
        if(lol>=v[mid]){
            s=mid;
        }
        else f=mid;
        
    }     
}
int main(){
    ll n;
    cin>>n;
    ll lol,i,in=-1;
    for(i=0;i<n;i++){
        cin>>lol;
        if(lol!=in)
        v.push_back(lol);
        in=lol;
    }
    n=v.size();
    ll m;
    cin>>m;
    ll abal,bal;
    while(m--){
        cin>>lol;
        bs(lol,n,&abal,&bal);
        if(abal==-1 || bal==-1){
            if(abal==-1) printf("%c %lld\n",'X',bal);
            else printf("%lld %c\n",abal,'X');
        }
        else printf("%lld %lld\n",abal,bal);
    }
    return 0;

}