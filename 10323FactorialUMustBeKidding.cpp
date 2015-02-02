//Bismillahir Rahmanir Rahim

#include<iostream>
using namespace std;

long long factorial(int n);

int main(){
	int n;
	while(cin>>n){
		if(n<8){
			if(n<0 && n%2==0){
				cout<<"Underflow!"<<endl;
			}else if(n<0 && n%2!=0){
				cout<<"Overflow!"<<endl;
			}else{
				cout<<"Underflow!"<<endl;
			}
		}else if(n>13){
			cout<<"Overflow!"<<endl;
		}else{
			cout<<factorial(n)<<endl;
		}
	}
	return 0;
}

long long factorial(int n){
	long long f=n;
	while(n--){
		if(n==1){
			return f;
		}else{
			f=f*n;
		}
	}
}