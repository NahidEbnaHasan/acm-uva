//patterns are nothing but fibonacci number :)
//Imam Ibn Hasan
//7.1.2012

#include<iostream>
using namespace std;

long long getPatterns(int n){
	long long a=1,b=2,c;
	for(int i=2;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return a;
}

int main(){
	int n;
	long long patt;
	while(cin>>n){
		if(n==0){
			break;
		}
		cout<<(patt=getPatterns(n))<<endl;
	}
	return 0;
}