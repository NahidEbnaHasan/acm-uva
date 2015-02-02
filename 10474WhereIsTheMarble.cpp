#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
	freopen("10474in.txt","r",stdin);
	int i,j,k;
	int N,Q,query,loop=1;
	bool found;
	int marbles[10010];
	while(scanf("%d %d",&N,&Q)==2){
		if(!N && !Q){
			return 0;
		}else{
			for(i=0;i<N;i++){
				scanf("%d",&marbles[i]);
			}
			sort(marbles,marbles+N);
			printf("CASE# %d:\n",loop++);
			for(i=0;i<Q;i++){
				scanf("%d",&query);
				found=false;
				for(j=0;j<N;j++){
					if(query==marbles[j]){
						found=true;
						break;
					}
				}
				if(!found){
					printf("%d not found\n",query);
				}else{
					printf("%d found at %d\n",query,j+1);
				}
			}
		}
	}
}