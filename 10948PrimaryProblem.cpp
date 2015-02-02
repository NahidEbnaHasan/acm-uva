
//programmer: Imam Ibn Hasan
//date: 30.12.12
//compiler: visual studio 2012

#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(long long num);

int main(){
	long long n,firstPrime,secPrime;
	bool found;

	while(cin>>n){
		found = false;
		if (n==0){
			break;
		}else if(n==1 || n==2 ||n==3){
			found = false;
		}else{
			for(long long i=1;i<=sqrt(n);i++){
				if(isPrime(i+1) == true){
					firstPrime = i+1;
					secPrime = n-firstPrime;
					if(isPrime(secPrime)){
						found=true;
						break;
					}
				}
			}
		}
		if(found){
			cout<<n<<":"<<endl;
			cout<<firstPrime<<"+"<<secPrime<<endl;
		}else{
			cout<<n<<":"<<endl;
			cout<<"NO WAY!"<<endl;
		}
	}
	return 0;
}


bool isPrime(long long num){
	bool isP = true;
	if(num == 2 || num == 3 || num == 5 || num == 7){
		isP = true;
	}else if(num%2 == 0){
		isP = false;
	}else{
		for (long long i = 2; i <= sqrt(num); i++){
			if(num%i==0){
				isP = false;
				break;
			}else{
				isP = true;
			}
		}
	}
	return isP;
}


// out put

//231232:
//101+231131