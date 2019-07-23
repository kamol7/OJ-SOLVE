#include<bits/stdc++.h>
using namespace std;
struct number{
    int n;
    int p;
}a[101000]={0};
bool com(number a, number b){
    return a.n>b.n;
}
int main(){
    int n,lol;
    scanf("%d",&n);
    int i,count=0;
    for(i=0;i<n;i++){
        scanf("%d",&lol);
       a[i].n=lol;
       a[i].p=i;
    }
    int xo[320000][2]={0};
    int abal=0;
    sort(a,a+n,com);
    for(i=n-1;i>=0;i--,abal++){
        if(i==0){
             xo[abal][0]=a[i].n;
            xo[abal][1]=0;
        }
        else if(a[i].n==a[i-1].n){
            xo[abal][0]=a[i].n;
            xo[abal][1]=abs(a[i].p-a[i-1].p);
            while(a[i].n==a[i-1].n){
                if(xo[abal][1]!=abs(a[i].p-a[i-1].p)){
                    count++;
                }
                i--;
            }
            if(count>0 )
            abal--;
            //if(abal<0) abal=0;
            count=0;
        }
        else {
            xo[abal][0]=a[i].n;
            xo[abal][1]=0;
        }
    }
    printf("%d\n",abal);
    for(i=0;i<abal;i++){
        printf("%d %d\n",xo[i][0],xo[i][1]);
    }
    return 0;
}