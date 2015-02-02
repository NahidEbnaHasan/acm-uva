#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	freopen("362.in","r",stdin);
	//int n,sets=1,bytes1,bytes2,remBytes,tBytes,time;

	double transBytes,remBytes,remSec;
	int n,sets=1,bytes1,bytes2,time;
	while(scanf("%d",&n)==1 && n){
		printf("Output for data set %d, %d bytes:\n",sets++,n);
		bytes1=0;
		bytes2=0;
		transBytes=0;
		time=0;
		while(scanf("%d",&bytes2)==1){
			time++;
			bytes1+=bytes2;
			transBytes+=bytes2;
			//if(bytes1==n) break;
			if(time%5==0){
				if(transBytes==0){
					printf("   Time remaining: stalled\n");
				}else{
					//a=bytes2/5.0;
					remBytes=n-bytes1;
					remSec=(remBytes/(transBytes/5.0));
					//b=ceil(remSec);
					int tem=(int)(remSec+.9999999);
					//printf("   Time remaining: %d seconds\n",(int)ceil(remSec));
					printf("   Time remaining: %d seconds\n",tem);
					transBytes=0;
				}
			}
			if(bytes1==n) break;
		}
		printf("Total time: %d seconds\n\n",time);
	}
}