#include<iostream>
#include<cstdio>
using namespace std;

int i,j;

void DRAW_RECT(int x1,int y1,int x2,int y2){
	for(i=x1;i<y1;i++){
		for(j=x2;j<y2;j++){

		}
	}
}

int main(){
	char field[1000][1000];
	int t;
	int xll,yll,xur,yur;
	scanf("%d",&t);
	while(t--){
		memset(field,'0',sizeof(field));
		for(i=0;i<2;i++){
			scanf("%d %d %d %d",&xll,&yll,&xur,&yur);
			DRAW_RECT(xll,yll,xur,yur);
		}
	}
}