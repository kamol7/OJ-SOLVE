#include<bits/stdc++.h>
using namespace std;
int main(){
    int n[5][5];
    int i,j,k,l,m;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&n[i][j]);
        }
    }
    int lol[150]={0};
    int abal=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            for(k=0;k<5;k++){
                for(l=0;l<5;l++){
                    for(m=0;m<5;m++){

                           if((i+j+k+l+m)==10 && i!=j && i!=k && i!=l && i!=m && j!=k && j!=l && j!=m&& k!=l && k!=m && m!=l  ) 
                            {
                                lol[abal++]=n[i][j]+n[j][i]+n[k][l]+n[l][k]+n[j][k]+n[k][j]+n[l][m]+n[m][l]+n[l][k]+n[k][l]+n[l][m]+n[m][l];
                            }






                    }
                }
            }
        }
    }

    sort(lol,lol+abal);
    printf("%d\n",lol[abal-1]);
    return 0;
}