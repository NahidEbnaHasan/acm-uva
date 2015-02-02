#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

vector<char> v0[20];
vector<char> v1[20];
vector<char> v2[20];
vector<char> v3[20];
int cx0=0,cx1=0,cx2=0,cx3=0;

void QuirkSome(int x,int y){
	int p,q,r;
	if(y==0){
		for(p=0;p<2;p++){
			v0[cx0].push_back(x%10+48);
			x/=10;
		}
		cx0++;
	}else if(y==1){
		for(p=0;p<4;p++){
			v1[cx1].push_back(x%10+48);
			x/=10;
		}
		cx1++;
	}else if(y==2){
		for(p=0;p<6;p++){
			v2[cx2].push_back(x%10+48);
			x/=10;
		}
		cx2++;
	}else {
		for(p=0;p<8;p++){
			v3[cx3].push_back(x%10+48);
			x/=10;
		}
		cx3++;
	}
}

int main(){
	freopen("256.txt","r",stdin);
	int a,b,n,i,j,k,len;
	QuirkSome(0,0);
	QuirkSome(0,1);
	QuirkSome(0,2);
	QuirkSome(0,3);
	QuirkSome(1,0);
	QuirkSome(1,1);
	QuirkSome(1,2);
	QuirkSome(1,3);
	for(i=2;i<=99999999;i++){
		n=i;
		if(n<100){
			b=n%10;
			a=n/10;
			if((a+b)*(a+b)==i){
				QuirkSome(i,0);
			}
		}
		if(n<10000){
			b=n%100;
			a=n/100;
			if((a+b)*(a+b)==i){
				QuirkSome(i,1);
			}
		}
		if(n<1000000){
			b=n%1000;
			a=n/1000;
			if((a+b)*(a+b)==i){
				QuirkSome(i,2);
			}
		}
		if(n<100000000){
			b=n%10000;
			a=n/10000;
			if((a+b)*(a+b)==i){
				QuirkSome(i,3);
			}
		}
	}
	while(scanf("%d",&n)==1){
		if(n==2){
			for(i=0;i<cx0;i++){
				len=v0[i].size()-1;
				for(j=len;j>=0;j--){
					printf("%c",v0[i][j]);
				}
				printf("\n");
			}
		}else if(n==4){
			for(i=0;i<cx1;i++){
				len=v1[i].size()-1;
				for(j=len;j>=0;j--){
					printf("%c",v1[i][j]);
				}
				printf("\n");
			}
		}else if(n==6){
			for(i=0;i<cx2;i++){
				len=v2[i].size()-1;
				for(j=len;j>=0;j--){
					printf("%c",v2[i][j]);
				}
				printf("\n");
			}
		}else{
			for(i=0;i<cx3;i++){
				len=v3[i].size()-1;
				for(j=len;j>=0;j--){
					printf("%c",v3[i][j]);
				}
				printf("\n");
			}
		}
	}
}