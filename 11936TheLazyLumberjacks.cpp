#include<stdio.h>
#include<algorithm>

int main(){
	freopen("in.txt","r+",stdin);
	int t;
	double a,b,c,s,max[3];
	scanf("%i",&t);
	while(t--){
		scanf("%lf %lf %lf",&a,&b,&c);
		max[0]=a;
		max[1]=b;
		max[2]=c;
		std::sort(max,max+3);
		s=(a+b+c)/2;
		if(s<=max[2]){
			printf("Wrong!!\n");
		}else{
			printf("OK\n");
		}
	}
	return 0;
}