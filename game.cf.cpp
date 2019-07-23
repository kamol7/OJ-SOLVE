#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i,lol=0;
    int count[26]={0};
    int j;
    int ln=s.size();
    for(i=0;i<ln;i++){
        j=s[i]-'a';
        count[j]++;
    }
    for(i=0;i<26;i++){
        if(count[i]&1) lol++;
    }
    if(lol&1 || lol==0) printf("First\n");
    else printf("Second\n");
    return 0;

}