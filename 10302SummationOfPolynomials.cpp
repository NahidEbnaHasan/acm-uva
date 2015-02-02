#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

/*int main(){
	double n;
	double a,b;
	while(scanf("%lf",&n)==1){
		a=(n/2)*(n/2);
		b=(n+1)*(n+1);
		printf("%.lf\n",a*b);
		//printf("%.lf",pow((n/2),2)*pow((n+1),2));
	}

	return 0;
}*/

int main(){
	long long x,sum;
	while(scanf("%lld",&x)==1){
		sum=0;
		for(long long i=1;i<x+1;i++){
			sum+=i*i*i;
			//cout<<sum<<endl;
		}
		printf("%lld\n",sum);
	}
	return 0;
}