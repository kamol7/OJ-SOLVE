#include<bits/stdc++.h>
using namespace std;
int main(){
    int y,k,n;
    cin>>y>>k>>n;
    int i;
    int lol=y%k;
    if(n-y<k-lol){
        printf("-1\n");
        return 0;
    }
    
    for(i=1;y+i*k-lol<=n;i++) printf("%d ",i*k-lol);
    return 0;
}