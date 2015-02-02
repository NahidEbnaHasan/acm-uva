#include<iostream>
#include<cstdio>
#define MAX 40001
using namespace std;

int main(){
	freopen("974.txt","r",stdin);
	long long i,j,k,cx;
	long long n,INF,SUP;
	bool KAP[40001]={false},blank=false;
	for(i=0;i<MAX;i++){
		n=i*i;
		if(((n%10)+(n/10)==i || (n%100)+(n/100)==i) && (n%10 && n/10 || n%100 && n/100)){
			KAP[i]=true;
		}else if(((n%100)+(n/100)==i || (n%1000)+(n/1000)==i) && (n%100 && n/100 || n%1000 && n/1000)){
			KAP[i]=true;
		}else if(((n%1000)+(n/1000)==i || (n%10000)+(n/10000)==i) && (n%1000 && n/1000 || n%10000 && n/10000)){
			KAP[i]=true;
		}else if(((n%10000)+(n/10000)==i || (n%100000)+(n/100000)==i) && (n%10000 && n/10000 || n%100000 && n/100000)){
			KAP[i]=true;
		}else if(((n%100000)+(n/100000)==i || (n%1000000)+(n/1000000)==i) && (n%100000 && n/100000 || n%1000000 && n/1000000)){
			KAP[i]=true;
		}
	}
	//cout<<"-------------"<<endl;
	scanf("%lld",&n);
	for(i=1;i<=n;i++){
		scanf("%lld %lld",&INF,&SUP);
		cx=0;
		if(blank)
			printf("\n");
		printf("case #%lld\n",i);
		for(j=INF;j<=SUP;j++){
			if(KAP[j]){
				printf("%lld\n",j);
				cx++;
			}
		}
		if(!cx){
			printf("no kaprekar numbers\n");
		}
		blank=true;
		//printf("\n");
	}

}