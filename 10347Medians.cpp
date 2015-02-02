#include<stdio.h>
#include<math.h>

int main(){
	freopen("in.txt","r+",stdin);
	double m1,m2,m3,s,area;
	while(scanf("%lf %lf %lf",&m1,&m2,&m3)==3){
		s=(m1+m2+m3)/2;
		if(s<=0 || s<=m1 || s<=m2 || s<=m3){
			printf("-1.000\n");
		}else{
			area=4*sqrt(s*(s-m1)*(s-m2)*(s-m3))/3;
			printf("%.3lf\n",area);
		}
	}
	return 0;
}
