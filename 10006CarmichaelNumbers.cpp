#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(long long n);
bool fermat(long long n);
long long bigMod(long long a,long long n,long long m);
long long square(long long x);

int main() {
	long long n;
	while(cin>>n){
		if(n==0){
			return 0;
		}else{
			if(isPrime(n)){
				cout<<n<<" is normal."<<endl;
			}else if(fermat(n)){
				cout<<"The number "<<n<<" is a Carmichael number."<<endl;
			}else{
				cout<<n<<" is normal."<<endl;
			}
		}
	}
}

bool isPrime(long long n){
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

bool fermat(long long n){
	long long a,m;
	for(a=2;a<n;a++){
		m=n;
		if(bigMod(a,n,m)!=a){
			return false;
		}
	}
	return true;
}

long long bigMod(long long a,long long n,long long m){
	if(n==0){
		return 1;
	}else if(n%2==0){
		return square(bigMod(a,n/2,m))%m;
	}else{
		return (a%m)*bigMod(a,n-1,m)%m;
	}
}

long long square(long long x){
	return x*x;
}