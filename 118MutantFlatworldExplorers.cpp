#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

map<char,int> dir,mov;
char graph[4][2]={{'W','E'},{'E','W'},{'N','S'},{'S','N'}};
int x[51]={0};
int y[51]={0};
int main(){
	freopen("118.in","r",stdin);
	freopen("118.out","w",stdout);
	dir['N']=0;
	dir['S']=1;
	dir['E']=2;
	dir['W']=3;
	mov['L']=0;
	mov['R']=1;
	mov['F']=2;
	bool lost;
	int i,j,k;
	int x1,y1,x2,y2;
	char c,moveIn[200];
	scanf("%d %d",&x1,&y1);
	while(scanf("%d %d %c",&x2,&y2,&c)==3){
		getchar();
		gets(moveIn);
		lost=false;
		for(i=0;moveIn[i]!='\0';i++){
			if(moveIn[i]=='L'){
				c=graph[dir[c]][0];
			}else if(moveIn[i]=='R'){
				c=graph[dir[c]][1];
			}else{
				if(c=='N'){
					if(y2+1>y1){
						if(!y[y2]){
							y[y2]=1;
							x[x2]=1;
							lost=true;
							//y2++;
							break;
						}
					}else{
						y2++;
					}
				}else if(c=='S'){
					if(y2-1<0){
						if(!y[y2]){
							y[y2]=1;
							x[x2]=1;
							lost=true;
							//y2--;
							break;
						}
					}else{
						y2--;
					}
				}else if(c=='E'){
					if(x2+1>x1){
						if(!x[x2]){
							x[x2]=1;
							y[y2]=1;
							lost=true;
							//x2++;
							break;
						}
					}else{
						x2++;
					}
				}else{
					if(x2-1<0){
						if(!x[x2]){
							x[x2]=1;
							y[y2]=1;
							lost=true;
							//x2--;
							break;
						}
					}else{
						x2--;
					}
				}
			}
		}
		if(lost){
			printf("%d %d %c LOST\n",x2,y2,c);
		}else{
			printf("%d %d %c\n",x2,y2,c);
		}
	}
}