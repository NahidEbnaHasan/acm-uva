#include<iostream>
#include<cstdio>

int main(){
	freopen("in2.txt","r+",stdin);
	int cx,n,maxX,v,validVoid[500];
	char surf[26];
	while(scanf("%d",&n)==1 && n){
		getchar();
		maxX=0;
		for(int i=0;i<n;i++){
			gets(surf);
			cx=0;
			for(int j=0;j<25;j++){
				if(surf[j]=='X'){
					cx++;
				}
			}
			maxX=std::max(maxX,cx);
			validVoid[i]=cx;
		}
		v=0;
		for(int i=0;i<n;i++){
			v+=(maxX-validVoid[i]);
		}
		printf("%d\n",v);
	}
}