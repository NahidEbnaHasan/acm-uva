#include<iostream>
#include<cstdio>
#include<cstring>
#define MAX 10000001
using namespace std;

int main(){
	int a,b;
	int n,d[10];
	char map[MAX][10]={'0'};
	for(int i=1;i<MAX;i++){
		n=i;
		//memset(d,0,sizeof(d));
		while(n>0){
			map[i][n%10]++;
			n/=10;
		}
	}
	while(scanf("%d %d",&a,&b)==2){
		if(a==0 && b==0){
			return 0;
		}else{
			memset(d,0,sizeof(d));
			for(int j=a;j<=b;j++){
				d[0]+=map[j][0];
				d[1]+=map[j][1];
				d[2]+=map[j][2];
				d[3]+=map[j][3];
				d[4]+=map[j][4];
				d[5]+=map[j][5];
				d[6]+=map[j][6];
				d[7]+=map[j][7];
				d[8]+=map[j][8];
				d[9]+=map[j][9];
			}
			for(int k=0;k<9;k++){
				printf("%d ",d[k]);
			}
			printf("%d\n",d[9]);
		}
	}
}