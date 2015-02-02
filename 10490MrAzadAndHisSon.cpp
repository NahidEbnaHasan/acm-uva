#include<iostream>
#include<stdio.h>
using namespace std;

typedef long long ll;

int main(){
	freopen("10490.txt","r",stdin);
	ll n;
	ll primes[32]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1};
	ll perfPrime[32]={0,0,1,1,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1};
	ll perfNum[32];
	perfNum[2]=6;//2^2
	perfNum[3]=28;//2^3
	perfNum[5]=496;//2^5
	perfNum[7]=8128;//2^7
	perfNum[13]=33550336;//2^13
	perfNum[17]=8589869056;//2^17
	perfNum[19]=137438691328;//2^19
	perfNum[31]=2305843008139952128;//2^31
	while(scanf("%lld",&n)==1 && n){
		if(!primes[n]){
			printf("Given number is NOT prime! NO perfect number is available.\n");
		}else{
			if(!perfPrime[n]){
				printf("Given number is prime. But, NO perfect number is available.\n");
			}else{
				printf("Perfect: %lld!\n",perfNum[n]);
			}
		}
	}
	return 0;
}
