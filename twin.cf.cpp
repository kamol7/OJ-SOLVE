#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    vector <int> v;
    int lol,i,sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&lol);
        v.push_back(lol);
        sum+=lol;
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
   // for(i=0;i<n;i++) cout<<v[i]<<endl;
    int max=0,count=0;
    for(i=0;i<n;i++){
        max+=v[i];
        sum-=v[i];
        //printf("%d %d\n",max,sum);
        count++;
        if(max>sum) break;
    }
    printf("%d\n",count);
    return 0;


}