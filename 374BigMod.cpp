#include<iostream>
using namespace std;
long long Square(long long x);
long long BigMod(long long b,long long p,long long m);

long long BigMod(long long b,long long p,long long m){
	if(p==0){
		return 1;
	}else if(p % 2==0){
		return Square(BigMod(b,p/2,m)) % m;
	}else{
		return ((b % m) * BigMod(b,p-1,m)) % m;
	}
}

long long Square(long long x){
	return x*x;
}

int main(){
	long long b,p,m;
	while(cin>>b>>p>>m){
		cout<<BigMod(b,p,m)<<endl;
	}
	return 0;
}