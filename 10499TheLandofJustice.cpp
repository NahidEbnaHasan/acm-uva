#include<stdio.h>

int main(){
	freopen("in.txt","r",stdin);
	long long n;
	while(scanf("%lli",&n)==1 && n>=0){
		if(n==1){
			printf("0%%\n");
		}else{
			printf("%lli%%\n",n*25);
		}
	}
	return 0;
}