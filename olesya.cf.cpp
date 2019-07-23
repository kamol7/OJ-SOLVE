#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,t;
    scanf("%d%d",&n,&t);
    if(n==1 && t==10) {
        printf("-1\n");
        return 0;
    }
    char ch=t+48;
    string s;
    if(t==10){
        s.push_back('1');
        for(i=1;i<n;i++){
            s.push_back('0');
        }    
    }
    else{
        for(i=0;i<n;i++){
            s.push_back(ch);
        }
    }
    cout<<s<<endl;
    //printf("%s\n",s);
    return 0;
}