#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int main(){
	freopen("11063.txt","r",stdin);
	int i,j,k=1,n,b[110];
	bool f;
	while(scanf("%d",&n)==1){
		map<int,int> memo;
		f=false;
		for(i=0;i<n;i++){
			scanf("%d",&b[i]);
			if(i==0 && b[i]<1){
				f=true;
			}else if(i!=0 && b[i]<b[i-1]){
				f=true;
			}
		}
		//f=false;
		if(!f){
			for(i=0;i<n-1;i++){
				for(j=i;j<n;j++){
					if(memo.count(b[i]+b[j])>0){
						f=true;
						break;
					}else{
						memo[b[i]+b[j]]++;
					}
				}
				if(f) break;
			}
		}
		if(!f) printf("Case #%d: It is a B2-Sequence.\n",k++);
		else printf("Case #%d: It is not a B2-Sequence.\n",k++);
		printf("\n");
		getchar();
	}
	return 0;
}