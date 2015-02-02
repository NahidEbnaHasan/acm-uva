#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

#define MAX 1299710
int i,j;
bool prime[MAX];
void sieve(int l,int h){
	memset(prime,true,sizeof(prime));
	int sq=sqrt(h);
	prime[0]=prime[1]=false;
	for(i=2;i<=sq;i++){
		if(prime[i]){
			for(j=i;i*j<MAX;j++){
				prime[i*j]=false;
			}
		}
	}
}

int main(){
	freopen("1644.in","r",stdin);
	sieve(0,MAX);
	int n,cx;
	while(scanf("%d",&n)==1 && n){
		if(prime[n]){
			printf("0\n");
		}else{
			cx=0;
			for(i=n;;i--){
				if(prime[i]){
					break;
				}
				cx++;
			}
			for(i=n;;i++){
				if(prime[i]){
					break;
				}
				cx++;
			}
			printf("%d\n",cx);
		}
	}
}