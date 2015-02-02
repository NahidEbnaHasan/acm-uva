#include<iostream>
#include<cstdio>
#define MAX 100000
using namespace std;

int main(){
	freopen("484.in","r",stdin);
	int i,j;
	bool numF;
	int n,cx=0,intgrs[MAX],freq[MAX]={0};
	while(scanf("%d",&n)==1){
		numF=false;
		for(i=0;i<cx;i++){
			if(intgrs[i]==n){
				numF=true;
				break;
			}
		}
		if(numF){
			freq[i]++;
		}else{
			intgrs[cx]=n;
			freq[cx++]++;
		}
	}
	for(j=0;j<cx;j++){
		printf("%d %d\n",intgrs[j],freq[j]);
	}
}