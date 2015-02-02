#include<iostream>
#include<cstdio>
using namespace std;

typedef long long ll;

int main(){
	freopen("880.in","r",stdin);
	freopen("880.out","w",stdout);
	ll n,line,last,nume,denom;
	int i,j,k,l,loop;
	double tmpLine1,tmpLine2;
	while(scanf("%lld",&n)==1){
		tmpLine1=sqrt(n*2);
		tmpLine2=(ll) tmpLine1+0.5;
		if(tmpLine1<tmpLine2){
			line=(ll)tmpLine1;
		}else{
			line=ceil(tmpLine1);
		}
		last=(line*(line+1))/2;
		nume=1;
		denom=line;
		nume+=(last-n);
		denom-=(last-n);
		printf("%lld/%lld\n",nume,denom);
	}
}