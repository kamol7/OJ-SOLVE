#include<bits/stdc++.h>
using namespace std;
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int main(){
    int n;
    scanf("%d",&n);
    vector <int> v[4];
    int j,i,count_1=0,count_2=0,count_3=0;
    for(i=0;i<n;i++){
        scanf("%d",&j);
        if(j==1){
            v[1].push_back(i+1);
            count_1++;
        }
        else if(j==2){
            v[2].push_back(i+1);
            count_2++;
        }  
       else if(j==3){
            v[3].push_back(i+1);
            count_3++;
        } 
    }
    count_1=min(count_1,count_2);
    count_1=min(count_1,count_3);
    printf("%d\n",count_1);
    for(i=0;i<count_1;i++){
        printf("%d %d %d\n",v[1][i],v[2][i],v[3][i]);
    }
    return 0;

}