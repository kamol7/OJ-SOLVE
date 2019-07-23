#include<bits/stdc++.h>
using namespace std;
int main(){
    char lol[5000],abal[205];
    gets(lol);
    gets(abal);
    int chk[150]={0},num[150]={0};
    int i;
    for(i=0;lol[i]!='\0';i++){
        num[lol[i]]++;
    }
    for(i=0;chk[i]!='\0'){
        chk[abal[i]]++;
    }
    for(i=60;i<125;i++){
        if(chk[i]>num[i]){
            printf("NO\n");
            return 0;
        }
    }
        printf("YES\n");
        return 0;
}