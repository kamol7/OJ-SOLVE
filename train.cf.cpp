#include<bits/stdc++.h>
using namespace std;
struct train{
    int num;
    string s;
}a[3];
bool com(train a,train b){
    return a.num<b.num;
}
int main(){
    
    a[0].num=0;
    a[1].num=0;
    a[2].num=0;
    a[0].s="chest";
    a[1].s="biceps";
    a[2].s="back";
    int n;
    scanf("%d",&n);
    int i,lol;
    for(i=0;i<n;i++){
        scanf("%d",&lol);
        a[i%3].num+=lol;
    }
    sort(a,a+3,com);
    cout<<a[2].s<<endl;
    return 0;
}