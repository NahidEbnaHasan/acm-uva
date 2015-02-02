#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("10195.in","r",stdin);
	freopen("10195.out","w",stdout);
	double a,b,c,s,r;
	while(scanf("%lf %lf %lf",&a,&b,&c)==3){
		s=(a+b+c)/2.00;
		if(s==0.000){
			r=0.000;
		}else{
			r=sqrt(((s-a)*(s-b)*(s-c))/s);
		}
		printf("The radius of the round table is: %.3lf\n",r);
	}
}
