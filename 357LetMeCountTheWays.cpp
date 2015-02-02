#include<iostream>
#include<cstdio>
#define MAX 30005
using namespace std;

typedef long long ___int64;
//int coins[]={1,5,10,25,50};
int coins[]={50,25,10,5,1};
___int64 dpMemo[MAX];

void CoinChange(){
	dpMemo[0]=1;
	for(int i=0;i<5;i++){
		for(int j=coins[i];j<MAX;j++){
			dpMemo[j]+=dpMemo[j-coins[i]];
		}
	}
}

int main(){
	freopen("in2.txt","r",stdin);
	int a;
	CoinChange();
	while(scanf("%d",&a)==1){
		if(dpMemo[a]==1){
			printf("There is only 1 way to produce %d cents change.\n",a);
		}else{
			printf("There are %lld ways to produce %d cents change.\n",dpMemo[a],a);
		}
	}
}