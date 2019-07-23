#include<bits/stdc++.h>
using namespace std;
 int main(){
     int n,k;
      scanf("%d %d",&n,&k);
      vector <int> v;
      int i;
      int lol;
      for(i=0;i<n;i++){
          scanf("%d",&lol);
          v.push_back(lol);
      }
      int x=v[k-1];
      for(i=k;i<n;i++){
          if(v[i]!=x){
              printf("-1\n");
              return 0;
          }
      }
      lol=0;
      for(i=k-2;i>=0;i--){
          if(v[i]==x) lol++;
          else break;
      }
      lol=k-1-lol;
      printf("%d\n",lol);
      return 0;

 }