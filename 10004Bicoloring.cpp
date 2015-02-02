#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;

vector<int> edge[200];

bool IsBicolorable(){     //checking with BFS
	int v,color[200];
	memset(color,-1,sizeof(color));
	queue<int> q;
	q.push(0);
	color[0]=0; //assume 0 is for black
	while(!q.empty()){
		v=q.front();
		q.pop();
		for(vector<int>::iterator i=edge[v].begin();i!=edge[v].end();i++){
			if(color[*i]==-1){
				if(color[v]==0){
					color[*i]=1;
				}else{
					color[*i]=0;
				}
				q.push(*i);
			}else{
				if(color[*i]==color[v]){
					return false;
				}
			}
			//q.push(*i);
		}
	}
	return true;
}

int main(){
	freopen("in2.txt","r",stdin);
	int n,e,x,y;
	while(scanf("%d",&n)==1 && n){
		scanf("%d",&e);
		for(int i=0;i<e;i++){
			scanf("%d %d",&x,&y);
			edge[x].push_back(y);
			edge[y].push_back(x);
		}
		if(IsBicolorable()){
			printf("BICOLORABLE.\n");
		}else{
			printf("NOT BICOLORABLE.\n");
		}
		for(int i=0;i<200;i++){
			edge[i].clear();
		}
	}
	
}