#include<stdio.h>

int main(){
	long long n;
	while(scanf("%lld",&n)){
		if(n<0){
			return 0;
		}else{
			printf("%lld\n",(n*(n+1)/2)+1);
		}
	}
}