#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#define MAX 1000000
#define SQROOTOFMAX 1000
using namespace std;


int pCx,fCx,nOffactors[MAX];
bool flag[MAX];
int prime[SQROOTOFMAX];
bool primeFlag[MAX];

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

void GenKPrimeFactors(){
	int n,cx,arr[100];
	//memset(kPrimeMap,0,sizeof(kPrimeMap));
	memset(flag,false,sizeof(flag));
	for(int i=2;i<MAX;i++){
		//memset(flag,false,sizeof(flag));
		fCx=0;
		cx=0;
		n=i;
		while(n!=1){
			if(primeFlag[n]){
				if(!flag[n]){
					fCx++;
					arr[cx++]=n;
				}
				break;
			}else{
				for(int i=0;i<pCx;i++){
					if(n%prime[i]==0){
						n/=prime[i];
						if(!flag[prime[i]]){
							flag[prime[i]]=true;
							fCx++;
							arr[cx++]=prime[i];
						}
						break;
					}
				}
			}
		}
		nOffactors[i]=fCx;
		//printf("%d %d\n",i,kCx);
		for(int j=0;j<cx;j++){
			flag[arr[j]]=false;
		}
	}
}

void GenPrime(){
	pCx=1;
    prime[0]=2;
	for(int i=3;i<SQROOTOFMAX;i++){
        if(primeFlag[i]){
			prime[pCx++]=i;
        }
    }
}

int main(){
	freopen("in2.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	SieveEratosthenes(0,MAX);
	GenPrime();
	GenKPrimeFactors();
	//cout<<"complte"<<endl;
	int n;
	while(scanf("%d",&n)==1 && n){
		printf("%d : %d\n",n,nOffactors[n]);
	}
	return 0;
}