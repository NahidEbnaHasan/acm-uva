#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#define MAX 10000
using namespace std;

int coins[21];
long long dpMemo[MAX];

void ChangeCoin(){
	for(int i=0;i<21;i++){
		coins[i]=pow(i+1,3);
	}
	memset(dpMemo,0,sizeof(dpMemo));
	dpMemo[0]=1;
	for(int i=0;i<21;i++){
		for(int j=coins[i];j<MAX;j++){
			dpMemo[j]+=dpMemo[j-coins[i]];
		}
	}
}

int main(){
	int n;
	ChangeCoin();
	while(scanf("%d",&n)==1){
		printf("%lld\n",dpMemo[n]);
	}
	return 0;
}