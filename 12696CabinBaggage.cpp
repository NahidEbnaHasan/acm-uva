#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("12696.txt","r",stdin);
	int t,allwd=0;
	double length,width,depth,total,weight;
	scanf("%d",&t);
	while(t--){
		scanf("%lf %lf %lf %lf",&length,&width,&depth,&weight);
		
		total=length+width+depth;
		if(weight<=7.00){
			if(length>56.00 || width>45.00 || depth>25.00){
				if(total<=125.00){
					allwd++;
					printf("1\n");
				}else{
					printf("0\n");
				}
			}else{
				allwd++;
				printf("1\n");
			}
		}else{
			printf("0\n");
		}
	}
	printf("%d\n",allwd);
}