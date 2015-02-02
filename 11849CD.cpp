#include<iostream>
#include<cstdio>
#define MAX 100000
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	int i,j,k;
	bool f;
	int n,m,cx,indx,jackCD[MAX]={0},jillCD;
	while(scanf("%d %d",&n,&m)==2){
		if(n==0 && m==0){
			return 0;
		}else{
			for(i=0;i<n;i++){
				scanf("%d",&jackCD[i]);
			}
			cx=0;
			indx=0;
			for(i=0;i<m;i++){
				scanf("%d",&jillCD);
				f=false;
				do{
					if(jackCD[indx]==jillCD){
						f=true;
						cx++;
						indx++;
					}else if(jackCD[indx]>jillCD || jackCD[indx]==0){
						f=true;
						//indx++;
					}else{
						indx++;
					}
				}while(!f);
			}
			printf("%d\n",cx);
		}
	}
	
}