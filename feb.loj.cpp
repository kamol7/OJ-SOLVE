#include<bits/stdc++.h>
#define ll long long
using namespace std;
unordered_map <string,ll> month;
void maping(){
    month["January"]=1;
    month["February"]=2;
}
ll lol(ll start,ll end){
    ll ans=0;
    ll dis=end-start+1;
    ans=(dis/400)*97;
    dis%=400;
    end+=dis-1;
    ll i;
    for(i=start;i<=end;i++) {
        if(i%400==0) ans++;
        else if(i%100==0) ;
        else if(i%4==0) ans++;

    }
    return ans;
}
int main(){
    maping();
    ll test;
    cin>>test;
    ll start_d,start_y;
    ll end_d,end_y;
    ll i;
    string s_month,e_month;
    char c;
    for(i=1;i<=test;i++){
        cin>>s_month>>start_d>>c>>start_y;
        cin>>e_month>>end_d>>c>>end_y;
        if(month[s_month]==1);
        else if(month[s_month]==2){
            if(start_d<29);
            else start_y--;
        }
        else start_y--;
        if(month[e_month]==1);
        else if(month[e_month]==2){
            if(start_d>28);
            else end_y--;
        }
        else end_y--;
        printf("Case %lld: %lld\n",i,lol(start_y,end_y));
    }
    return 0;
}
