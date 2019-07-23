#include<bits/stdc++.h>
using namespace std;
struct card
{
    int nu;
    int pos;
}num[120];
bool cmp(card a, card b) {
    return a.nu<b.nu;
}

int main(){
    int n;
    cin>>n;
    int i,j;
    for(i=0;i<n;i++) {
        cin>>num[i].nu;
        num[i].pos=i+1;
    }
    sort(num,num+n,cmp);
    for(i=0,j=n-1;j>i;i++,j--) printf("%d %d\n",num[i].pos,num[j].pos);
    return 0;


}