#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ln=s.size();
    int i;
    for(i=0;i<ln;i++){
        if(s[i]=='1') break;
    }
    int j,l=0;
    for(j=0;j<ln;j++,i++){
        s[j]=s[i];
    }
    j=0;
    for(i=0;i<ln;i++){
            if(s[i]=='0'){
                for(j=i;j<ln;j++){
                    s[j]=s[j+1];
                }
                l++;
                break;
            }
    }
    if(l==0) s.pop_back();
    cout<<s<<endl;
    return 0;


}