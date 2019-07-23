#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0,lol;
    int i;
    for(i=0;i<n;i++){
        cin>>lol;
        sum+=lol;
    }
    if(sum%n==0) printf("%d\n",n);
    else printf("%d\n",n-1);
    return 0;
}