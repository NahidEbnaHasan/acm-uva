#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){
	freopen("11364.txt","r",stdin);
	int t;
	int nOfStore,pos[25];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&nOfStore);
		for(int i=0;i<nOfStore;i++){
			scanf("%d",&pos[i]);
		}
		sort(pos,pos+nOfStore);
		printf("%d\n",(pos[nOfStore-1]-pos[0])*2);
	}
	return 0;
}