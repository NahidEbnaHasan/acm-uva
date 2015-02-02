#include<iostream>
#include<cstdio>
#include<cmath>
#define STDIN freopen("in2.txt","r+",stdin);

int main(){
	STDIN;
	int test;
	long double y;
	bool newLine=false;
	scanf("%d",&test);
	while(test--){
		if(newLine){
			printf("\n");
		}
		scanf("%lf",&y);
		printf("%0.0lf\n",sqrtl(y));
		newLine=true;
	}
	return 0;
}