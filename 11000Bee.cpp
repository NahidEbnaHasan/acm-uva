#include<stdio.h>
#include<string.h>
#define MAX 4294967296

int main(){
	//freopen("in.txt","r+",stdin);
	int n,i=2;
	long long bee[50];
	memset(bee,0,sizeof(bee));
	bee[0]=0;
	bee[1]=1;
	
	for(i=2;i<49;i++){
		bee[i]=bee[i-1]+bee[i-2];
	}
	for(int j=0;j<i;j++){
		printf("%d %lld\n",j,bee[j]);
	}

	while(scanf("%d",&n)==1){
		if(n==-1)
			break;
		else{
			printf("%lld %lld\n",(bee[n+2])-1,(bee[n+3])-1);
		}
	}
	return 0;
}