#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	int t;
	double d,v,u,time1,time2;
	scanf("%d",&t);
	for(int loop=0;loop<t;loop++){
		scanf("%lf %lf %lf",&d,&v,&u);
		if(v==0 || v>=u || u==0){
			printf("Case %d: can't determine\n",loop+1);
		}else{
			time1=d/u;
			time2=d/sqrtf((u*u)-(v*v));
			printf("Case %d: %0.3lf\n",loop+1,fabs(time1-time2));
		}
	}
	return 0;
}