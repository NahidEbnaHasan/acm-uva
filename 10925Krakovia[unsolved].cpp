#include<iostream>
#include<cstdio>
using namespace std;

/*typedef unsigned long long ull;

int main(){
	freopen("10925.in","r",stdin);
	ull i,j;
	ull n,f,value,totalVal;
	j=1;
	while(scanf("%lld %lld",&n,&f)==2){
		if(n==0 && f==0) return 0;
		totalVal=0;
		for(i=0;i<n;i++){
			scanf("%lld",&value);
			totalVal+=value;
		}
		printf("Bill #%lld costs %lld: each friend should pay %lld\n\n",j++,totalVal,totalVal/f);
	}
}*/

int main(){
	freopen("10925.in","r",stdin);
	int i,j,n,f;
	long double value,totalVal;
	j=1;
	while(scanf("%d %d",&n,&f)==2){
		if(n==0 && f==0) return 0;
		totalVal=0;
		for(i=0;i<n;i++){
			scanf("%lf",&value);
			totalVal+=value;
		}
		printf("Bill #%d costs %.f: each friend should pay %.f\n\n",j++,totalVal,totalVal/(double)f);
	}
}

class BigInt
{
public:
	BigInt();
	char* add(char* a,char* b);
	~BigInt();

private:
};

BigInt::BigInt()
{
}
char* BigInt::add(char* a,char* b){

}
BigInt::~BigInt()
{
}