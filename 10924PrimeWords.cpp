#include<iostream>
#include<string>
#include<cmath>
using namespace std;

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

int main(){
	string s;
	char alpha[52]={'a','b','c','d','e','f','g','h','i','j',
	'k','l','m','n','o','p','q','r','s','t','u','v','w','x',
	'y','z','A','B','C','D','E','F','G','H','I','J','K','L',
	'M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',};
	int len,sum,val[52];
	for(int i=0;i<52;i++){
		val[i]=i+1;
	}
	while(cin>>s){
		len=s.length();
		sum=0;
		for(int i=0;i<len;i++){
			for(int j=0;j<52;j++){
				if(s[i]==alpha[j]){
					sum+=val[j];
				}
			}
		}
		if(isPrime(sum)){
			cout<<"It is a prime word."<<endl;
		}else{
			cout<<"It is not a prime word."<<endl;
		}
	}
	return 0;
}