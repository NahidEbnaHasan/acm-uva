//Imam Ibn Hasan
//1.28.2013

#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num);

int main(){
	int n;

	while(cin>>n){
		if (n==0){
			break;
		}else{
			for(int i=2;i<(n/2)+1;i++){
				if(isPrime(i) && isPrime(n-i)){
					cout<<n<<" = "<<i<<" + "<<n-i<<endl;
					break;
				}
			}
		}
	}
	return 0;
}


bool isPrime(int num) 
{ 
	int i; 
	for(i=2;i<=sqrt(num);i++){ 
		if((num%i)==0){ 
			return false;
		}
	}
	return true;
}