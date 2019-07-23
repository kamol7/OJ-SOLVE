#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,count=0;
    scanf("%d%d",&n,&k);
    int i;
    for(i=1;i<=n;i++){
        if(k%i==0){
            if((k/i)<=n) count++;
        }
    }
    printf("%d\n",count);
    return 0;
}