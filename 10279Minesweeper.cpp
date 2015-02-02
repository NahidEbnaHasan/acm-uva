#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	int i,j;
	int tCase,n;
	bool touched,newLine=false;
	char board1[10][10],board2[10][10],board3[10][10];
	scanf("%d",&tCase);
	while(tCase--){
		scanf("%d",&n);
		if(newLine)printf("\n");
		memset(board3,'.',sizeof(board3));
		for(i=0;i<n;i++){
			getchar();
			for(j=0;j<n;j++){
				scanf("%c",&board1[i][j]);
			}
		}
		for(i=0;i<n;i++){
			getchar();
			for(j=0;j<n;j++){
				scanf("%c",&board2[i][j]);
			}
		}
		touched=false;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(board2[i][j]=='x'){
					board3[i][j]='0';
					if(board1[i][j]=='*'){
						touched=true;
					}else{
						if(j+1<n){
							if(board1[i][j+1]=='*'){
								board3[i][j]++;
							}
						}
						if(i+1<n && j+1<n){
							if(board1[i+1][j+1]=='*'){
								board3[i][j]++;
							}
						}
						if(i+1<n){
							if(board1[i+1][j]=='*'){
								board3[i][j]++;
							}
						}
						if(i+1<n && j-1>=0){
							if(board1[i+1][j-1]=='*'){
								board3[i][j]++;
							}
						}
						if(j-1>=0){
							if(board1[i][j-1]=='*'){
								board3[i][j]++;
							}
						}
						if(i-1>=0 && j-1>=0){
							if(board1[i-1][j-1]=='*'){
								board3[i][j]++;
							}
						}
						if(i-1>=0){
							if(board1[i-1][j]=='*'){
								board3[i][j]++;
							}
						}
						if(i-1>=0 && j+1<n){
							if(board1[i-1][j+1]=='*'){
								board3[i][j]++;
							}
						}
					}
				}
			}
		}
		if(touched){
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					if(board1[i][j]=='*'){
						board3[i][j]='*';
					}
				}
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%c",board3[i][j]);
			}
			printf("\n");
		}
		newLine=true;
	}
	return 0;
}