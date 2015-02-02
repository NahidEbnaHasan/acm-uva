#include<iostream>
#include<stack>
using namespace std;

void ToBinary(int num);

int p;
stack<char> s;

int main(){
	int n;
	while(cin>>n){
		if(n==0){
			return 0;
		}else{
			ToBinary(n);
			cout<<"The parity of ";
			while(!s.empty()){
				cout<<s.top();
				s.pop();
			}
			cout<<" is "<<p<<" (mod 2)."<<endl;
		}
	}
}

void ToBinary(int num){
	p=0;
	while(num>0){
		if(num%2==1){
			p++;
		}
		s.push((num%2)+48);
		num/=2;
	}
}