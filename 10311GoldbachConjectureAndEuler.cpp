
#include<iostream>
#include<cmath>
using namespace std;


long long primes[10000]={0};

void Sieve(long long L,long long U){
	long long i,j,k,count;
	//long long primes[500000]={0};
	bool *flag=new bool[U];
	//bool flag[20];
	for(i=0;i<U;i++){
		flag[i]=true;
	}
	for(i=0;i<sqrt(U);i++){
		if(!flag[i]){
			continue;
		}else if(i==0 || i==1){
			flag[i]=false;
		}else{
			k=0;
			for(j=(i*i);j<U;j=(i*i)+k*i){
				if(!flag[j]){
					k++;
					continue;
				}else{
					flag[j]=false;
				}
				k++;
			}
		}
	}
	count=0;
	for(i=0;i<U;i++){
		if(flag[i]){
			primes[count++]=i;
			//cout<<primes[count-1]<<endl;
		}
	}
}

bool isPrime(long long n){
	if(n==2 || n==3){
		return true;
	}else{
		for(long long i=0;i<(sqrt(n)-1) && primes[i]!=0;i++){
			if(n%primes[i]==0){
				return false;
			}
		}
	}
	return true;
}

int main(){
	long long n,m,i,j;
	bool found;
	Sieve(0,sqrt(100000000));
	while(cin>>n){
		if (n<4){
			cout<<n<<" is not the sum of two primes!"<<endl;
		}else if(n%2==1){
			if(isPrime(n-2)){
				cout<<n<<" is the sum of "<<2<<" and "<<n-2<<"."<<endl;
			}else{
				cout<<n<<" is not the sum of two primes!"<<endl;
			}
		}else{
			found=false;
			for(i=n/2;i>2;i--){
				if(isPrime(i) && isPrime(n-i) && i!=n-i){
					found=true;
					break;
				}
			}
			if(found)
				cout<<n<<" is the sum of "<<i<<" and "<<n-i<<"."<<endl;
			else
				cout<<n<<" is not the sum of two primes!"<<endl;
		}
	}
	return 0;
}