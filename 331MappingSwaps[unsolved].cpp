#include<stdio.h>

int main(){
	freopen("in.txt","r+",stdin);
	int i=1,n,a[10],curr,prev,swpC;
	while(scanf("%d",&n)==1 && n){
		swpC=0;
		for(int j=0;j<n;j++){
			//scanf("%d",&a[i]);
			if(j==0){
				scanf("%d",&prev);
			}else{
				scanf("%d",&curr);
				if(curr<prev){
					swpC++;
				}
				prev=curr;
			}
		}
		printf("There are %d swap maps for input data set %d.\n",swpC,i++);
	}
}