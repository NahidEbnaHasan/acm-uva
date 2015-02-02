#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	int n,e;
	int numCx,zeroCx,loop=1;
	while(scanf("%d",&n)==1 && n){
		numCx=0;
		zeroCx=0;
		for(int i=0;i<n;i++){
			scanf("%d",&e);
			if(e==0){
				zeroCx++;
			}else{
				numCx++;
			}
		}
		printf("Case %d: %d\n",loop++,numCx-zeroCx);
	}
	return 0;
}