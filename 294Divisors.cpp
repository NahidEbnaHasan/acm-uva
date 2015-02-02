#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	int tCase;
	int l,h,p,k,sqroot,nDiv,maxDiv;
	scanf("%d",&tCase);
	while(tCase--){
		scanf("%d %d",&l,&h);
		maxDiv=0;
		p=0;
		for(int i=l;i<=h;i++){
			nDiv=0;
			sqroot=sqrt(i);
			for(int j=1;j<=sqroot;j++){
				if(i%j==0){
					k=i/j;
					if(k==j){
						nDiv++;
					}else{
						nDiv+=2;
					}
				}
			}
			if(nDiv>maxDiv){
				maxDiv=nDiv;
				p=i;
			}
		}
		printf("Between %d and %d, %d has a maximum of %d divisors.\n",l,h,p,maxDiv);
	}
}


/*
critical input
5
1 1
2 2
3 3
4 4
1 1000
*/