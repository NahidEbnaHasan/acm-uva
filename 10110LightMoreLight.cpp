#include<iostream>
#include<math.h>
using namespace std;

/*int main(){
	unsigned long n;
	while(cin>>n){
		if(n==0){
			return 0;
		}else if(floor(sqrt(n))==ceil(sqrt(n))){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}*/

int main(){
	unsigned long n;
	while(cin>>n){
		if(n==0){
			return 0;
		}else{
			double d_sqrt=sqrt(n);
			unsigned long i_sqrt=d_sqrt;
			if(d_sqrt==i_sqrt){
				cout<<"yes"<<endl;
			}else{
				cout<<"no"<<endl;
			}
		}
	}
	return 0;
}

/*bool IsPerfectSquare(unsigned long num){
	double dSqrt=sqrt(num);
	unsigned long iSqrt=dSqrt;
	if(dSqrt==iSqrt)
		return true;
	else
		return false;
}

int main(){
	unsigned long n;
	while(cin>>n){
		if(n==0){
			return 0;
		}else if(IsPerfectSquare(n)){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}*/