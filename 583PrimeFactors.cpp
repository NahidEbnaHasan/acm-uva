#include<stdio.h>
#include<string.h>
#include<cmath>
#include<iostream>
#include<algorithm>

#define MAX1 2147483647
#define MAX2 46350//50000

bool primeFlag[MAX2];
long long count;
long long primeNum[MAX2];

void Sieve(long long L,long long U){
    long long i,j,k;
    memset(primeFlag,true,sizeof(primeFlag));
	for(i=0;i<=sqrt(U);i++){
        if (primeFlag[i]){
            if(i==0||i==1){
                primeFlag[i]=false;
            }else{
                k=0;
                for(j=(i*i);j<U;j=(i*i)+k*i){
                    if(!primeFlag[j]){
                        k++;
                        continue;
                    }else{
                        primeFlag[j]=false;
                    }
                    k++;
                }
            }
        }
    }
}

void GenPrimeNum(){
    long long i,j;
    j=0;
	for(i=0;i<sqrt(MAX1);i++){
        if(primeFlag[i]){
            primeNum[j++]=i;
			//printf("%d\n",primeNum[j-1]);
        }
    }
    count=j;
}

bool isPrime(int n){
	if(n>primeNum[count-1]){
		for(int i=0;i<count;i++){
			if(n%primeNum[i]==0){
				return false;
			}
		}
		return true;
	}else{
		if(primeFlag[n]){
			return true;
		}else
			return false;
	}
}

void findPrimeFact(bool isNegative,int n){
	int i,m=n;
	int primeFact[MAX2],c=0;
	if(isPrime(n)){
		if(isNegative){
			printf("-%d = -1 x %i\n",n,n);
		}else{
			printf("%d = %i\n",n,n);
		}
	}else{
		while(n>1){
			for(i=0;primeNum[i]<=sqrt(n);i++){
				if(n%primeNum[i]==0){
					n/=primeNum[i];
					primeFact[c++]=primeNum[i];
					break;
				}
			}
			if(isPrime(n)){
				primeFact[c++]=n;
				break;
			}
		}
		if(isNegative){
			std::sort(primeFact,primeFact+c);
			printf("-%d = -1 x ",m);
			for(i=0;i<c;i++){
				if(i==c-1){
					printf("%d\n",primeFact[i]);
				}else{
					printf("%d x ",primeFact[i]);
				}
			}
		}else{
			std::sort(primeFact,primeFact+c);
			printf("%d = ",m);
			for(i=0;i<c;i++){
				if(i==c-1){
					printf("%d\n",primeFact[i]);
				}else{
					printf("%d x ",primeFact[i]);
				}
			}
		}
	}
}

int main(){
	freopen("in.txt","r+",stdin);
	Sieve(0,sqrt(MAX1));
	GenPrimeNum();
	int n;
	bool isNegative;
	while(scanf("%d",&n)){
		isNegative=false;
		if(n==0){
			return 0;
		}else if(n<0){
			n=n*(-1);
			isNegative=true;
			if(n==1){
				printf("-1 = -1\n");
			}else{
				findPrimeFact(isNegative,n);
			}
		}else{
			if(n==1){
				printf("1 = 1\n");
			}else{
				findPrimeFact(isNegative,n);
			}
		}
	}
	return 0;
}