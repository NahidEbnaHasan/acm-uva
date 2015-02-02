#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("test.txt","r+",stdin);
	freopen("out.txt","w+",stdout);
	bool newLine=false;
	int a,l,h,n,i,j,sum;
	while(scanf("%d %d",&l,&h)==2){
		if(newLine){
			printf("\n");
		}
		for(i=l;i<=h;i++){
			if(i==1){
				printf("1 1\n");
			}else{
				n=i;
				j=1;
				while(1){
					j++;
					sum=0;
					while(n>0){
						a=n%10;
						sum+=a*a;
						n/=10;
					}
					if(sum<=9 && sum!=7){
						break;
					}else{
						n=sum;
					}
				}
				if(sum==1){
					printf("%d %d\n",i,j);
				}
			}
		}
		newLine=true;
	}
}


//critical in/out
//1110 1120