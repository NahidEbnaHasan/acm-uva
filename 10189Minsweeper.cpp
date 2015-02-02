#include<iostream>
#include<cstdio>
#include<cstring>

int main(){
	freopen("in2.txt","r",stdin);
	int i,j;
	int n,m,cx=1;
	char field[101][101];
	bool newLine=false;
	while(scanf("%d %d",&n,&m)==2){
		if(n==0 && m==0)return 0;
		//memset(field,'0',sizeof(field));
		for(i=0;i<n;i++){
			getchar();
			for(j=0;j<m;j++){
				scanf("%c",&field[i][j]);
			}
		}
		if(newLine)printf("\n");
		printf("Field #%d:\n",cx++);
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(field[i][j]!='*'){
					field[i][j]='0';
					if(j+1<m){
						if(field[i][j+1]=='*'){
							field[i][j]++;
						}
					}
					if(i+1<n && j+1<m){
						if(field[i+1][j+1]=='*'){
							field[i][j]++;
						}
					}
					if(i+1<n){
						if(field[i+1][j]=='*'){
							field[i][j]++;
						}
					}
					if(i+1<n && j-1>=0){
						if(field[i+1][j-1]=='*'){
							field[i][j]++;
						}
					}
					if(j-1>=0){
						if(field[i][j-1]=='*'){
							field[i][j]++;
						}
					}
					if(i-1>=0 && j-1>=0){
						if(field[i-1][j-1]=='*'){
							field[i][j]++;
						}
					}
					if(i-1>=0){
						if(field[i-1][j]=='*'){
							field[i][j]++;
						}
					}
					if(i-1>=0 && j+1<m){
						if(field[i-1][j+1]=='*'){
							field[i][j]++;
						}
					}
				}
				printf("%c",field[i][j]);
			}
			printf("\n");
		}
		newLine=true;
	}
}