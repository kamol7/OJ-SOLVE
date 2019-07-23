#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    vector <int> rig,wro;
    int i,lol;
    for(i=0;i<n;i++){
        scanf("%d",&lol);
        rig.push_back(lol);
    }
    sort(rig.begin(),rig.end());
    for(i=0;i<m;i++){
        scanf("%d",&lol);
        wro.push_back(lol);
    }
    //n--;
    sort(wro.begin(),wro.end());
        i=rig[n-1];
        n--;
        while(2*rig[0]>i){
            i++;        }
        //i=j;
        //cout<<i<<endl<<wro[0];
        if(2*rig[0]<=i && i<wro[0]) printf("%d\n",i);
        else printf("-1\n");
        return 0;


}