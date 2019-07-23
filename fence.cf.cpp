#include<bits/stdc++.h>
using namespace std;
void fen(int *a,int b,int c){
    *a = *a+b-c;
}
int main(){
    int n,k;
    
    scanf("%d%d",&n,&k);
    int f=n-k;
    //cout<<f<<endl;
    int arr[250000]={0};
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0,min,j=1;
    for(i=0;i<k;i++) sum+=arr[i];
    min=sum;
    for(i=1;i<=f;i++){
        fen(&sum,arr[i+k-1],arr[i-1]);
        //cout<<sum<<endl;
        if(sum<min){
            min=sum;
            j=i+1;
        }
    }
    printf("%d\n",j);
    return 0;
}