#include<bits/stdc++.h>
using namespace std;
int main(){
    int lol[5]={0};
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        lol[x]++;
    }
    int total;
    total=lol[4]+lol[3];
    lol[1]=lol[1]-lol[3];
    if(lol[1]<0) lol[1]=0;
    if(lol[2]&1){
        total++;
        lol[2]--;
        lol[1]=lol[1]-2;
        if(lol[1]<0) lol[1]=0;
    }
    total=total+ lol[2]/2;
    if(lol[1]%4==0) total= total + lol[1]/4;
    else total=total+1+lol[1]/4;
    printf("%d\n",total);
    return 0;

}