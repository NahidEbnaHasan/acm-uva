#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<bitset>
#define MAX 1000000
using namespace std;

typedef long long int64;
int64 i,j,k;
bool primeFlag[MAX];
void SieveEratosthenes(int64 L,int64 U){
	k=sqrt(U);
    memset(primeFlag, true, sizeof(primeFlag));
    primeFlag[0]=false;
    primeFlag[1]=false;
    for(i=2;i<k;i++){
        if(primeFlag[i]){
            for(j=2;(j*i)<U;j++){
                primeFlag[j*i]=false;
            }
        }
    }
}
int64 prime[100000],cx=0;
void GenPrime(){
	for(i=2;i<MAX;i++){
		if(primeFlag[i]){
			prime[cx++]=i;
		}
	}
	//cout<<cx<<endl;
}
bool ISPRIME(int64 n){
	int64 x,y,root=sqrt(n)+1;
	if(n>prime[cx-1]){
		for(x=2;x<root;x++){
			if(n%x==0)return false;
		}
	}else{
		if(!primeFlag[n]) return false;
	}
	return true;
}
int main(){
	freopen("10539.txt","r",stdin);
	SieveEratosthenes(0,MAX);
	GenPrime();
	cout<<"--------"<<endl;
	int64 tC,cxAP2;
	int64 low,high,div,divCx,n,half;
	bool f;
	scanf("%lld",&tC);
	while(tC--){
		scanf("%lld %lld",&low,&high);
		cxAP2=0;
		for(i=low;i<=high;i++){
			n=i;
			if(!ISPRIME(n) && n!=1){
				divCx=0;
				half=n/2;
				for(j=0;j<cx;j++){
					if(n%prime[j]==0)
						divCx++;
					if(prime[j]>half || divCx>1)break; // need prime factorization
				}
				if(divCx==1){
					//cout<<i<<endl;
					cxAP2++;
				}
			}
		}
		//cout<<endl;
		printf("%d\n",cxAP2);
	}
}