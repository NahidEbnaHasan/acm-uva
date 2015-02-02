#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#define MAX 5000001
#define SQRTMAX 2236
using namespace std;

int cxP,prime[SQRTMAX];
bool primeFlag[MAX];
bool mapDePrime[MAX]={false};
bool flag[MAX]={false};

void SieveEratosthenes(int L,int U){
    int i,j,k;
    memset(primeFlag, true, sizeof(primeFlag));
    primeFlag[0]=false;
    primeFlag[1]=false;
    k=sqrt(U);
    for(i=2;i<k;i++){
        if(primeFlag[i]){
            for(j=2;(j*i)<U;j++){
                primeFlag[j*i]=false;
            }
        }
    }
}

void GenDePrime(){
	int n,sum,cx,arr[SQRTMAX];
	//memset(mapDePrime,false,sizeof(mapDePrime));
	//memset(flag,false,sizeof(flag));
	for(int i=2;i<MAX;i++){
		n=i;
		sum=0;
		cx=0;
		while(n>1){
			if(primeFlag[n]){
				if(!flag[n]){
					sum+=n;
					flag[n]=true;
					arr[cx++]=n;
				}
				break;
			}else{
				for(int j=0;;j++){
					if(n%prime[j]==0){
						n/=prime[j];
						if(!flag[prime[j]]){
							sum+=prime[j];
							flag[prime[j]]=true;
							arr[cx++]=prime[j];
						}
						break;
					}
				}
			}
		}
		if(primeFlag[sum]){
			mapDePrime[i]=true;
		}
		for(int k=0;k<cx;k++){
			flag[arr[k]]=false;
		}
	}
}

void GenPrime(){
    cxP=1;
    prime[0]=2;
	for(int i=3;i<=SQRTMAX;i++){
        if(primeFlag[i]){
            prime[cxP++]=i;
        }
    }
}

int main(){
	freopen("in2.txt","r",stdin);
	int a,b,cxDPrime;
	SieveEratosthenes(0,MAX);
	GenPrime();
	GenDePrime();
	while(scanf("%d",&a)==1){
		if(a==0){
			return 0;
		}else{
			scanf("%d",&b);
			cxDPrime=0;
			for(int i=a;i<=b;i++){
				if(mapDePrime[i]){
					cxDPrime++;
				}
			}
			printf("%d\n",cxDPrime);
		}
	}
}