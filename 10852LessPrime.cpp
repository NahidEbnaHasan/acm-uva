#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
#define MAX 10001

int i,j,k,root;
bool pFlag[MAX];
void SIEVE(int l,int h){
	memset(pFlag,true,sizeof(pFlag));
	pFlag[0]=0;
	pFlag[1]=0;
	root=sqrt(h);
	for(i=2;i<=root;i++){
		if(pFlag[i]){
			for(j=i;i*j<h;j++){
				pFlag[i*j]=false;
			}
		}
	}
}

int main(){
	freopen("10852in.txt","r",stdin);
	SIEVE(0,10000);
	int test,n;
	scanf("%d",&test);
	while(test--){
		scanf("%d",&n);
		n=n/2;
		for(i=n+1;;i++){
			if(pFlag[i]){
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}