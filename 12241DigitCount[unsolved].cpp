#include<stdio.h>
#include<string.h>

#define MAX 5000000
//#define MAX2 20

char num[MAX][9];

void GenerateNum(){
	//memset(num,NULL,sizeof(num));
	for(int i=0,j,k;i<MAX+1;i++){
		k=i;
		j=0;
		while(k>0){
			num[i][j++]=(k%10)+48;
			k/=10;
		}
		num[i][j]=NULL;
	}
}

int main(){
	//freopen("in.txt","r+",stdin);
	int l,u,n;
	int digits[10]={0};
	GenerateNum();
	while(scanf("%d %d",&l,&u)==2 &&l &&u){
		for(int i=l;i<=u;i++){
			if(i<MAX){
				for(int j=0;num[i][j]!=NULL;j++){
					digits[(num[i][j]-48)]++;
				}
			}else{
				n=i;
				while(n>0){
					digits[n%10]++;
					n/=10;
				}
			}
		}
		for(int i=0;i<10;i++){
			if(i==9){
				printf("%d\n",digits[i]);
			}else{
				printf("%d ",digits[i]);
			}
		}
		memset(digits,0,sizeof(digits));
	}
	return 0;
}