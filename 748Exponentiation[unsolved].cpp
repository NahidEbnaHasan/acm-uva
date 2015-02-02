#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	long double n,p;
	while(1){
	scanf("%llf %llf",&n,&p);
	printf("%llf",powl(n,p));
	}
}