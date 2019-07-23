#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int v[500055]={0};
    int i,lol,abal=0;
    	i=n;
    	while(i--){
        scanf("%d",&lol);
        v[lol]++;
         }
        // for(i=1;i<=n;i++) cout<<v[i]<<endl;
             i=n;
    
     while(i) {
     	if(v[i]>0) abal++;
     	i--;
     }  
    
    printf("%d\n",abal);
    return 0;
}