#include<iostream>
#include<cstdio>
#include<math.h>
#include<cmath>
#define MAX 2000000000
using namespace std;

int cx,squares[50000];

void GEN_SQUARE(){
	int a=3;
	cx=0;
	squares[0]=4;
	while(squares[cx]<=MAX){
		squares[++cx]=a*a;
		a++;
	}
	//cout<<cx<<endl;
}

int main(){
	freopen("10161.txt","r",stdin);
	//GEN_SQUARE();
	int x,y;
	int n,i,j,s,sVal,mid;
	while(scanf("%d",&n)==1 && n){
		if(n==1){
			printf("1 1\n");
		}else{
			//s=2;
			/*for(i=0;;i++){
				if(n<=squares[i]){
					sVal=squares[i];
					break;
				}
				s++;
			}*/
			s=ceil(sqrt(n));
			sVal=s*s;
			if(sVal%2==0){
				mid=sVal-(s-1);
				if(mid<n){
					x=s;
					y=s-(n-mid);
				}else if(mid>n){
					y=s;
					x=s-(mid-n);
				}else{
					x=y=s;
				}
				printf("%d %d\n",x,y);
			}else{
				mid=sVal-(s-1);
				if(mid<n){
					y=s;
					x=s-(n-mid);
				}else if(mid>n){
					x=s;
					y=s-(mid-n);
				}else{
					x=y=s;
				}
				printf("%d %d\n",x,y);
			}
		}
	}
}

/*int main(){
	//int sqroot=ceil(sqrt(33));
	int sqroot=floor(sqrt(33));
	cout<<sqroot<<endl;
}*/