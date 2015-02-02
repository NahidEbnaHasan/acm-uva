/*#include<stdio.h>
#include<math.h>

#define PI 3.1415926535897932384626433832795028841972
int main(){
	freopen("10286.in","r",stdin);
	double side,a,d,D,sqA;
	while(scanf("%lf",&side)==1){
		//printf("%lf",tan(54*PI/180.0));
		a=(side*tan(53.35*PI/180.00))/2.00;
		d=sqrt((side/2.00)*(side/2.00)+(a)*(a));
		D=d+a;
		D=(D*D)/2.00;
		printf("%.10lf\n",sqrtl(D));
	}
	return 0;
}*/


#include<stdio.h>
#include<math.h>
#define PI 3.1415926535897932384626433832795028841972
int main(){
	freopen("10286.in","r",stdin);
	double a,b=sin(108*PI/180)/sin(63*PI/180);
	while(scanf("%lf",&a)==1){
		printf("%.10f\n",a*b);
	}
	return 0;
}