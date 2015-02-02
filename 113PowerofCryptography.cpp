//acm 113 power of cryptography
//compiler: visual c++ v 10.0
//date 2012-01-13 12:20:45

#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
	double n,p;
	while(scanf("%lf%lf",&n,&p)==2){
		printf("%.0lf\n",pow(p,1/n));
	}
	getch();
	return 0;
}