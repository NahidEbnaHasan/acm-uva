#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("12468.txt","r",stdin);
	int a,b,minMove;
	while(scanf("%d %d",&a,&b)==2){
		if(a==-1 && b==-1){
			return 0;
		}else{
			if(a<b){
				minMove=min(b-a,(99-b)+1+a);
			}else if(a>b){
				minMove=min(a-b,(99-a)+1+b);
			}else{
				minMove=0;
			}
			printf("%d\n",minMove);
		}
	}
}