#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c;
    cin>>n>>c;
    int count=0;
    int in=0,fn;
    while(n--){
        scanf("%d",&fn);
        if((fn-in)<=c) count++;
        else count=1;
        in=fn;
    }
    cout<<count<<endl;
    return 0;
}