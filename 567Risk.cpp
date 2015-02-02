#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#define MAX 25
using namespace std;

vector<int> G[MAX];

void ClearVector(){
	for(int i=0;i<21;i++){
		G[i].clear();
	}
}

int BFS(int src,int des){
	int u,v,minPath,color[MAX],dis[MAX];
	queue<int> q;
	memset(color,0,sizeof(color));
	memset(dis,0,sizeof(dis));
	q.push(src);
	color[src]=1;
	//dis[src]=0;
	while(!q.empty()){
		u=q.front();
		if(u==des){
			return dis[u];
		}
		for(vector<int>::iterator i=G[u].begin();i!=G[u].end();i++){
			v=*i;
			if(color[v]==0){
				color[v]=1;
				dis[v]=dis[u]+1;
				q.push(v);
			}
		}
		q.pop();
	}
}

int main(){
	freopen("in2.txt","r",stdin);
	int loop=1;
	int i,j,k,n,src,des,nOfLink,minConquer;
	while(scanf("%d",&nOfLink)==1){
		printf("Test Set #%d\n",loop++);
		for(i=1;i<20;i++){
			if(i!=1){
				scanf("%d",&nOfLink);
			}
			for(k=0;k<nOfLink;k++){
				scanf("%d",&j);
				G[i].push_back(j);
				G[j].push_back(i);
			}
		}
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d %d",&src,&des);
			minConquer=BFS(src,des);
			printf("%2d to %2d: %d\n",src,des,minConquer);
		}
		printf("\n");
		ClearVector();
	}
}