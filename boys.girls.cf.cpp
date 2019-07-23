#include<bits/stdc++.h>
using namespace std;
int main(){
    int b,g;
    cin>>b>>g;
    char lol[250];
    int i,j;
    char bb='B';
    char gg='G';
    if(b>=g){
        for(i=0;i<g;i++){ lol[2*i]=bb;
        lol[2*i+1]=gg; 

        }
        for(i=g*2;i<b+g;i++) lol[i]=bb;        
    }
    else{
        for(i=0;i<b;i++){ lol[2*i]=gg;
        lol[2*i+1]=bb; 

        }
        for(i=b*2;i<b+g;i++) lol[i]=gg;        
    }
    lol[b+g]='\0';
    cout<<lol<<endl;
    return 0;
    
}