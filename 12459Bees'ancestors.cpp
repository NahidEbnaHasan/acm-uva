#include<iostream>
#include<cstdio>
using namespace std;

typedef unsigned long long ull;

ull ances[81];

void BUILD_ANCESTORS(){
	ances[0]=ances[1]=1;
	for(int i=2;i<81;i++){
		ances[i]=ances[i-1]+ances[i-2];
	}
}

int main(){
	freopen("12459.out","w",stdout);
	BUILD_ANCESTORS();
	ull n;
	while(scanf("%lld",&n)==1 && n){
		printf("%lld\n",ances[n]);
	}
}