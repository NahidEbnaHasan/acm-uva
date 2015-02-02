#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

typedef long long ull;

int main(){
	freopen("10392.in","r",stdin);
	ull i,j,n;
	while(scanf("%lld",&n)==1){
		//sq=sqrt(n);
		if(n<0) return 0;
		//cout<<n<<endl;
		for(i=2;i<=sqrt(n);i++){
			while(n%i==0){
				n/=i;
				printf("    %lld\n",i);
			}
		}
		if(n>1) printf("    %lld\n\n",n);
	}
	return 0;
}