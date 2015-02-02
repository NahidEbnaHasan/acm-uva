#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int i,j;
int k,l,o,p;
int a,b,x,y;
int s,t,n,loop=1;
char field[1000][1000];

void DRAWGRID(int pX,int pY){

	for(k=pX,o=0;o<s;k++,o++){
		for(l=pY,p=0;p<s;l++,p++){
			field[k][l]='.';
		}
	}
}

int main(){
	freopen("11074.txt","r",stdin);
	while(scanf("%d %d %d",&s,&t,&n)==3){
		if(!s && !t && !n) return 0;
		printf("Case %d:\n",loop++);
		a=(s*n)+(t*(n+1));
		memset(field,'*',sizeof(field));

		for(i=0,x=t;i<n;i++){
			for(j=0,y=t;j<n;j++){
				DRAWGRID(x,y);
				y+=(s+t);
			}
			x+=(s+t);
		}
		for(i=0;i<a;i++){
			for(j=0;j<a;j++){
				//cout<<field[i][j];
				printf("%c",field[i][j]);
			}
			//cout<<endl;
			printf("\n");
		}
		//cout<<endl;
		printf("\n");
	}
}