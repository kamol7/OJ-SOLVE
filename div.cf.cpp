#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    scanf("%d",&n);
    int count[7]={0},lol;
    for(i=0;i<n;i++){
        scanf("%d",&lol);
        if(lol==5 || lol==7){
            printf("-1\n");
            return 0;
        }
        else count[lol]++;
    }
    int j=n/3,k;
    if(count[1]==n/3 && count[2]+count[3]==n/3 && count[6]>=count[3]){
        for(k=0;k<count[4];k++){
            printf("1 2 4\n");
        }
        
        
        for(i=0;i<count[3];i++){
            printf("1 3 6\n");
        }
        
        i=i+k;
        for(i=i;i<j;i++){
            printf("1 2 6\n");
        }

    }
    else printf("-1\n");
    return 0;
}