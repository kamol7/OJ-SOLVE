#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int num[1001]={0};
    int i,lol;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&lol);
        num[lol]++;
    }
    sort(num,num+1001);
    //cout<<num[1000];
    lol=num[1000];
    if(lol<=(n+1)/2) printf("YES\n");
    else printf("NO\n");
    return 0;

}