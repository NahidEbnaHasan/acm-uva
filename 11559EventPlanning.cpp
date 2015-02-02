#include<iostream>
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	int i,j,k;
	int p,b,h,w;
	int costPP[20],beds[20],minCost,tmpCost;
	bool possi;
	while(scanf("%d",&p)==1 && p){
		scanf("%d %d %d",&b,&h,&w);
		for(i=0;i<h;i++){
			scanf("%d",&costPP[i]);
			for(j=0;j<w;j++){
				scanf("%d",&beds[j]);
			}
		}
		possi=false;
		minCost=INT_MAX;
		for(i=0;i<h;i++){
			if(p*costPP[i]<=b){
				for(j=0;j<w;j++){
					if(beds[j]>p){
						possi=true;
						tmpCost=p*costPP[i];
						minCost=min(minCost,tmpCost);
						//break;
					}
				}
			}
			/*if(possi){
				break;
			}*/
		}
		if(possi){
			printf("%d\n",minCost);
		}else{
			printf("stay home\n");
		}
	}
	return 0;
}

/*
critical I/O
184 430887 10 5
7794
521 220 380 729 969
2363
887 104 641 909 378
541
582 387 583 241 294
2568
198 653 369 418 692
4068
901 516 623 703 971
3070
394 491 525 464 219
6230
648 796 287 979 395
5199
702 667 743 976 908
6092
134 106 380 193 214
6997
920 114 587 543 817
*/