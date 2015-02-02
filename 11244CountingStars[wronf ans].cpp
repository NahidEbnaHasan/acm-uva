#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("11244.txt","r",stdin);
	int r,c,cx,adjc;
	int i,j,k,pos[2];
	char sky[110][110];
	while(scanf("%d %d",&r,&c)==2){
		if(r==0 && c==0)break;
		for(i=0;i<r;i++){
			getchar();
			for(j=0;j<c;j++){
				scanf("%c",&sky[i][j]);
			}
		}
		//cx=0;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				if(sky[i][j]=='*'){
					adjc=0;
					if(j+1<c){
						if(sky[i][j+1]=='*'){
							//break;
							//sky[i][j]='.';
							adjc++;
							if(adjc==1){
								pos[0]=i;
								pos[1]=j+1;
							}else if(adjc==2){
								sky[pos[0]][pos[1]]='.';
								sky[i][j]='.';
								sky[i][j+1]='.';
							}else if(adjc>2){
								sky[i][j+1]='.';
							}
						}
					}
					if(i+1<r && j+1<c){
						if(sky[i+1][j+1]=='*'){
							//break;
							//sky[i][j]='.';
							adjc++;
							if(adjc==1){
								pos[0]=i+1;
								pos[1]=j+1;
							}else if(adjc==2){
								sky[pos[0]][pos[1]]='.';
								sky[i][j]='.';
								sky[i+1][j+1]='.';
							}else if(adjc>2){
								sky[i+1][j+1]='.';
							}
						}
					}
					if(i+1<r){
						if(sky[i+1][j]=='*'){
							//break;
							//sky[i][j]='.';
							adjc++;
							if(adjc==1){
								pos[0]=i+1;
								pos[1]=j;
							}else if(adjc==2){
								sky[pos[0]][pos[1]]='.';
								sky[i][j]='.';
								sky[i+1][j]='.';
							}else if(adjc>2){
								sky[i+1][j]='.';
							}
						}
					}
					if(i+1<r && j-1>=0){
						if(sky[i+1][j-1]=='*'){
							//break;
							//sky[i][j]='.';
							adjc++;
							if(adjc==1){
								pos[0]=i+1;
								pos[1]=j-1;
							}else if(adjc==2){
								sky[pos[0]][pos[1]]='.';
								sky[i][j]='.';
								sky[i+1][j-1]='.';
							}else if(adjc>2){
								sky[i+1][j-1]='.';
							}
						}
					}
					if(j-1>=0){
						if(sky[i][j-1]=='*'){
							//break;
							//sky[i][j]='.';
							adjc++;
							if(adjc==1){
								pos[0]=i;
								pos[1]=j-1;
							}else if(adjc==2){
								sky[pos[0]][pos[1]]='.';
								sky[i][j]='.';
								sky[i][j-1]='.';
							}else if(adjc>2){
								sky[i][j-1]='.';
							}
						}
					}
					if(i-1>=0 && j-1>=0){
						if(sky[i-1][j-1]=='*'){
							//break;
							//sky[i][j]='.';
							adjc++;
							if(adjc==1){
								pos[0]=i-1;
								pos[1]=j-1;
							}else if(adjc==2){
								sky[pos[0]][pos[1]]='.';
								sky[i][j]='.';
								sky[i-1][j-1]='.';
							}else if(adjc>2){
								sky[i-1][j-1]='.';
							}
						}
					}
					if(i-1>=0){
						if(sky[i-1][j]=='*'){
							//break;
							//sky[i][j]='.';
							adjc++;
							if(adjc==1){
								pos[0]=i-1;
								pos[1]=j;
							}else if(adjc==2){
								sky[pos[0]][pos[1]]='.';
								sky[i][j]='.';
								sky[i-1][j]='.';
							}else if(adjc>2){
								sky[i-1][j]='.';
							}
						}
					}
					if(i-1>=0 && j+1<c){
						if(sky[i-1][j+1]=='*'){
							//break;
							//sky[i][j]='.';
							adjc++;
							if(adjc==1){
								pos[0]=i-1;
								pos[1]=j+1;
							}else if(adjc==2){
								sky[pos[0]][pos[1]]='.';
								sky[i][j]='.';
								sky[i-1][j+1]='.';
							}else if(adjc>2){
								sky[i-1][j+1]='.';
							}
						}
					}
					//if(adjc<2){
						//cx++;
					//}
				}
			}
		}
		cx=0;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				//cout<<sky[i][j];
				if(sky[i][j]=='*')cx++;
			}
			//cout<<endl;
		}
		printf("%d\n",cx);
	}
	return 0;
}