#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    char lol[220];
   scanf("%s",lol);
    int c=0,i,j,f,l,k;
    
    for(i=0,j=n;i<n;i++,j++){
        l=lol[i]-'0';
        k=lol[j]-'0';
        if(l>=k){
            c++;
            break;
        }
    }
    if(c==0) {
        printf("1)YES\n");
        return 0;
    }
    c=0;
    for(i=0,j=2*n-1;i<f;i++,j--){
        l=lol[i]-'0';
        k=lol[j]-'0';
      //printf("%d %d\n",l,k);
        if(l>=k){
            c++;
            break;
        }
    }
    if(c==0) {
        printf("2)YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;

}