#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int i,j,k;
	int e[110],nOnR[110],r[110][110];
	int n,tEnrgy;
	while(scanf("%d",&n)==1){
		for(i=0;i<n;i++){
			scanf("%d %d",&e[i],&nOnR[i]);
			for(j=0;j<nOnR[i];j++){
				scanf("%d",&r[i][j]);
			}
		}
		tEnrgy=0;
		for(i=0;i<n;i++){
			tEnrgy+=e[i];
			for(j=0;j<nOnR[i];j++){

			}
		}
	}
}