#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	int i=1;
	int n,j,lol[10],count;
	while(test){
		cin>>n;
		for (int j = 0; j < n; ++j)
		{
			scanf("%d",&lol[j]);

		}
		if((lol[j-1]-lol[0])%5==0){
			count=(lol[j-1]-lol[0])/5;
		}
		else (lol[j-1]-lol[0])/5 + 1;
		
		printf("Case %d: %d",i,count);
		i++;
		test--;
	}
	return 0;
}