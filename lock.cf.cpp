#include<bits/stdc++.h>
using namespace std;
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int main(){
    int n;
    char lol[50000];
    char abal[50000];
    gets(lol);
    gets(abal);
    printf("%s\n%s\n",lol,abal);
    int i,j,k,count=0;
    for(i=0;i<n;i++){
        j=lol[i]-'0';
        k=abal[i]-'0';
        j=abs(j-k);
        k=10-j;
        count+=min(j,k);
    }
    printf("%d\n",count);
    return 0;
}