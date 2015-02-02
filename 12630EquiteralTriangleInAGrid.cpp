#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	double n;
	while(scanf("%lf",&n)==1){
		if(!n){
			return 0;
		}else{
			double ans=pow(2,n)-3;
			printf("%.g",pow(2,n)-3);
		}
	}
}