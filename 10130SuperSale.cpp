#include<iostream>
#include<cstdio>
#define MAXN 1001
#define MAXW 31
using namespace std;

int price[MAXN];
int weight[MAXN];
int dpMemo[MAXN][MAXW];
int n,g,maxWght,totalMaxVal;

int SuperSale(int i,int w){
	int profit1,profit2;
	if(i==n){
		return 0;
	}else if(dpMemo[i][w]!=-1){
		return dpMemo[i][w];
	}else{
		profit1=0,profit2=0;
		if(w+weight[i]<=maxWght){
			profit1=price[i]+SuperSale(i+1,w+weight[i]);
		}
		profit2=SuperSale(i+1,w);
		dpMemo[i][w]=max(profit1,profit2);
		return dpMemo[i][w];
	}
}

int main(){
	freopen("in2.txt","r",stdin);
	int tCase;
	scanf("%d",&tCase);
	while(tCase--){
		scanf("%d",&n);
		//memset(dpMemo,-1,sizeof(dpMemo));
		for(int i=0;i<n;i++){
			scanf("%d %d",&price[i],&weight[i]);
		}
		scanf("%d",&g);
		totalMaxVal=0;
		for(int j=0;j<g;j++){
			scanf("%d",&maxWght);
			memset(dpMemo,-1,sizeof(dpMemo));
			totalMaxVal+=SuperSale(0,0);
		}
		printf("%d\n",totalMaxVal);
	}
	return 0;
}