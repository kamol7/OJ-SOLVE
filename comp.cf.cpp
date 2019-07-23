#include<bits/stdc++.h>
using namespace std;
int main(){
    string f,s;
    cin>>f;
    cin>>s;
    int ln=f.size();
    int ol=s.size();
    if(ln!=ol){
        printf("NO\n");
        return 0;
    }
    int i;
    vector <char> lol,abal;
    int count=0;

    for(i=0;i<ln;i++){
        if(f[i]!=s[i]){
            count++;
            lol.push_back(f[i]);
            abal.push_back(s[i]);
        }
    }
    if(count==2){
        if(lol[0]==abal[1] && lol[1]==abal[0]){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}