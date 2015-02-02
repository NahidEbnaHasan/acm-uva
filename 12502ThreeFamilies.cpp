#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("in2.txt","r+",stdin);
	int t,x,y,z,moreWorkTime,lesWorkTime;
	float A,costPHr;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&x,&y,&z);
		costPHr=(float)z/(x+y);
		A=(float)x*costPHr;
		if(x<y){
			lesWorkTime=y-x;
			A-=(float)lesWorkTime*costPHr;
		}else{
			moreWorkTime=x-y;
			A+=(float)moreWorkTime*costPHr;
		}
		if(A<0.00){
			printf("0\n");
		}else{
			printf("%.0f\n",A);
		}
	}
}