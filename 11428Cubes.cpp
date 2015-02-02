#include<iostream>
#include<cstdio>
#include<limits.h>
#define MAX 10010
#define MAX2 1000000000
using namespace std;

long long i,j,k;
long long cubes[MAX],cx,res[MAX][2];

void MemSET(){
	for(i=0;i<=MAX;i++){
		res[i][1]=INT_MAX;
	}
}

void SetCubes(){
	for(i=0;;i++){
		cubes[i]=i*i*i;
		if(cubes[i]>MAX2) break;
	}
}

void Calculate(){
	for(i=2;i<cx;i++){
		for(j=1;j<i;j++){
			//cout<<res[cubes[i]-cubes[j]][1]<<endl;
			if(cubes[i]-cubes[j]<=MAX){
				if((res[cubes[i]-cubes[j]][1])>j){
					res[cubes[i]-cubes[j]][0]=i;
					res[cubes[i]-cubes[j]][1]=j;
				}
			}
		}
	}
}
int main(){
	freopen("11428.txt","r",stdin);
	freopen("11428out.txt","w",stdout);
	MemSET();
	SetCubes();
	cx=i;
	Calculate();
	long long n;
	while(scanf("%d",&n)==1 && n){
		if(res[n][0]!=0){
			printf("%lld %lld\n",res[n][0],res[n][1]);
		}else{
			printf("No solution\n");
		}
	}
	return 0;
}