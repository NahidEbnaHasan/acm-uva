#include<iostream>
#include<cstring>
#include<cstdio>
#define MAXAMNT 7500
using namespace std;


int coin[5]={1,5,10,25,50};

int dpMemo[5][MAXAMNT];
//int nway1,nway2;
int CoinChange(int i,int amnt){
	int nway1,nway2;
	if(i>4){
		if(amnt==0){
			return 1;
		}else{
			return 0;
		}
	}else if(dpMemo[i][amnt]!=-1){
		return dpMemo[i][amnt];
	}else{
		nway1=0,nway2=0;
		if(amnt-coin[i]>=0){
			//cout<<amnt<<endl;
			nway1=CoinChange(i,amnt-coin[i]);
		}
		nway2=CoinChange(i+1,amnt);
		return dpMemo[i][amnt]=nway1+nway2;
	}
}

int main(){
	freopen("in2.txt","r",stdin);
	int amount;
	memset(dpMemo,-1,sizeof(dpMemo));
	while(scanf("%d",&amount)==1){
		printf("%d\n",CoinChange(0,amount));
	}
}

//iterativly DP algorithm

//int coin[5]={50,25,10,5,1};
//long long nway[MAXAMNT];
/*int main(){
	int i,j,v,n,c;
	while(scanf("%d",&n)==1){
		v=5;
		nway[0]=1;
		for(i=0;i<5;i++){
			c=coin[i];
			for(j=c;j<=n;j++){
				nway[j]+=nway[j-c];
			}
		}
		printf("%d\n",nway[n]);
	}
}*/