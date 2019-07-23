#include<bits/stdc++.h>
using namespace std;
struct point {
    int x,y;
};
int main(){
    int n,xx,yy;
    scanf("%d",&n);

    point v[230000];
    int i;
    scanf("%d%d",&v[0].x,&v[0].y);
    int min_x=v[0].x;
    int max_y=v[0].y;
    for(i=1;i<n;i++){
        scanf("%d%d",&v[i].x,&v[i].y);
        if(v[i].x<min_x) min_x=v[i].x;
        if(v[i].y>max_y) max_y=v[i].y;
        }
    int pos=-1;
    for(i=0;i<n;i++){
        if(v[i].x==min_x && v[i].y==max_y) {
            pos=i+1;
            break;
        }
    }
    printf("%d\n",pos);
    return 0;
}