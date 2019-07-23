#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int i,lol;
    vector <int> v;
    for(i=0;i<n;i++){
        scanf("%d",&lol);
        v.push_back(lol);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++) printf("%d ",v[i]);
    printf("\n");
    return 0;
}