#include<iostream>
#include<iomanip>
using namespace std;

int n,f,j;
int primes[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int primeCount[25]={0};

void countPrimes(int num){
	while(num>1){
		for(int i=0;i<25;i++){
			if(num%primes[i]==0){
				num=num/primes[i];
				primeCount[i]++;
				break;
			}
		}
	}
}

int main(){
	
	while(cin>>n){
		if(n==0)
			return 0;
		else{
			f=n;
			while(f>=2){
				countPrimes(f);
				f=f-1;
			}
			cout<<setw(3)<<n<<"! =";
			for(int i=0;i<25;i++){
				if(primeCount[i]>0){
					if(i==(j-1)){
						cout<<setw(3)<<primeCount[i];
						primeCount[i]=0;
					}else if(i==15){
						cout<<endl<<setw(9)<<primeCount[i];
						primeCount[i]=0;
					}else{
						cout<<setw(3)<<primeCount[i];
						primeCount[i]=0;
					}
				}
			}
			cout<<endl;
		}	
	}
}