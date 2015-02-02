#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

bool primeFlag[1000000];
int digitPrimeCount[1000000];

void Sieve(long long L,long long U){
	long long i,j,k;
	//primeFlag=new bool[U];
	for(i=0;i<U;i++){
		primeFlag[i]=true;
	}
	for(i=0;i<=sqrt(U);i++){
		if(primeFlag[i]){
			if(i==0 || i==1){
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

void FindDigitPrime(){
	int n,sum,count=0;
	for(int i=0;i<=1000000;i++){
		if(primeFlag[i]){
			n=i;
			sum=0;
			while(n>0){
				sum+=n%10;
				n/=10;
			}
			if(primeFlag[sum]){
				count++;
				digitPrimeCount[i]=count;
			}else{
				digitPrimeCount[i]=count;
			}
		}else{
			digitPrimeCount[i]=count;
		}
	}
}

int main(){
	int t,n1,n2,count;
	Sieve(0,1000000);
	FindDigitPrime();
	//cin>>t;
	scanf("%i",&t);
	while(t--){
		//cin>>n1>>n2;
		scanf("%i %i",&n1,&n2);
		if(n1==n2 && digitPrimeCount[n1-1]<digitPrimeCount[n1]){
			printf("%i\n",1);
		}else if(n1!=n2 && digitPrimeCount[n1-1]<digitPrimeCount[n1]){
			printf("%i\n",(digitPrimeCount[n2]-digitPrimeCount[n1])+1);
		}else{
			//cout<<count<<endl;
			printf("%i\n",digitPrimeCount[n2]-digitPrimeCount[n1]);
		}
	}
}