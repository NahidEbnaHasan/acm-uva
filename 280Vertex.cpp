#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
using namespace std;

#define MAX 105

void BFS(int totalVtx,vector<int> graph[],int vtxForInv){
	int v,acVtxCx=0,inAcVtx,color[MAX]={0};
	queue<int> Q;
	Q.push(vtxForInv);
	while(!Q.empty()){
		v=Q.front();
		for(vector<int>::iterator itr=graph[v].begin();itr!=graph[v].end();itr++){
			if(!color[*itr]){
				Q.push(*itr);
				color[*itr]=1;
				acVtxCx++;
			}
		}
		Q.pop();
	}
	inAcVtx=totalVtx-acVtxCx;
	if(inAcVtx==0){
		printf("0");
	}else{
		printf("%d",inAcVtx);
	}
	for(v=1;v<=totalVtx;v++){
		if(!color[v]){
			printf(" %d",v);
		}
	}
	printf("\n");
}

int main(){
	freopen("280.in","r",stdin);
	freopen("280.out","w",stdout);
	int n,vtxFrm,vtxTo,query,invVtx;
	while(scanf("%d",&n)==1 && n){
		vector<int> vertex[105];
		while(scanf("%d",&vtxFrm)==1 && vtxFrm){
			while(scanf("%d",&vtxTo)==1 && vtxTo){
				vertex[vtxFrm].push_back(vtxTo);
			}
		}
		scanf("%d",&query);
		while(query--){
			scanf("%d",&invVtx);
			BFS(n,vertex,invVtx);
		}
	}
	return 0;
}