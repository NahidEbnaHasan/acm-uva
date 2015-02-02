#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
using namespace std;

int main(){
	freopen("11991.in","r",stdin);
	int i,j;
	int n,m,k,v,cx;
	while(scanf("%d %d",&n,&m)==2){
		//vector<int> vec;
		map<int,vector<int> > MAP;
		for(i=0;i<n;i++){
			scanf("%d",&v);
			MAP[v].push_back(i);
		}
		for(i=0;i<m;i++){
			scanf("%d %d",&k,&v);
			if(MAP.find(v)==MAP.end()){
				printf("0\n");
			}else{
				if(MAP[v].size()<k){
					printf("0\n");
				}else{
					int res=MAP[v][k-1];
					printf("%d\n",res+1);
				}
			}
		}
	}
	return 0;
}