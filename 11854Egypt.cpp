#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
	freopen("in2.txt","r+",stdin);
	int a,b,c,sides[3];
	double s,areaT,areaR;
	while(scanf("%d %d %d",&a,&b,&c)==3){
		if(a==0 && b==0 && c==0){
			return 0;
		}else{
			sides[0]=a;
			sides[1]=b;
			sides[2]=c;
			sort(sides,sides+3);
			if(sides[0]==sides[1]){
				printf("right\n");
			}else{
				s=(double)(sides[0]+sides[1]+sides[2])/2;
				areaT=sqrt(s*(s-sides[0])*(s-sides[1])*(s-sides[2]));
				areaR=(double)(sides[0]*sides[1])/2;
				if(areaR==areaT){
					printf("right\n");
				}else{
					printf("wrong\n");
				}
			}
		}
	}
	return 0;
}