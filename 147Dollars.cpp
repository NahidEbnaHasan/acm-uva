#include<iostream>
#include<cstring>
#include<cstdio>
#define MAXAMNT 30005
using namespace std;


//int coin[11]={5,10,20,50,100,200,500,1000,2000,5000,10000};
int coin[11]={10000,5000,2000,1000,500,200,100,50,20,10,5};
long long dpMemo[MAXAMNT];

void CoinChange(){
	int i,j;
	memset(dpMemo,0,sizeof(dpMemo));
	dpMemo[0]=1;
	for(i=0;i<11;i++){
		//c=coin[i];
		for(j=coin[i];j<MAXAMNT;j++){
			dpMemo[j]+=dpMemo[j-coin[i]];
		}
	}
}

int main(){
	freopen("in2.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	CoinChange();
	int a,b,c;
	while(scanf("%d.%d",&b,&c)==2){
		if(b==0 && c==0) break;
		a=b*100+c;
		printf("%3d.%.2d%17lld\n",b,c,dpMemo[a]);
	}
}

/*
critical input
285.65
*/