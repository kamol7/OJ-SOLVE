#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    scanf("%d%d",&s,&n);
    int dra[1500][2],i;
    for(i=0;i<n;i++) scanf("%d%d",&dra[i][0],&dra[i][1]);
    int j,temp,t;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(dra[i][0]>dra[j][0]){
                t=dra[i][0];
                temp=dra[i][1];
                dra[i][0]=dra[j][0];
                dra[i][1]=dra[j][1];
                dra[j][0]=t;
                dra[j][1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        if(s>dra[i][0]) s+=dra[i][1];
        else{
            printf("NO\n");
            return  0;
        }
    }
    printf("YES\n");
    return 0;
    
}