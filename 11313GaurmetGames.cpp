#include<stdio.h>

int main(){
	int t,n,m;
	scanf("%d",&t);

	while(t--){
		scanf("%d %d",&n,&m);
		if((m-1==1)){
			printf("%d\n",(n/(m-1))-1);
		}else if(n%(m-1)==1){
			printf("%d\n",n/(m-1));
		}else{
			printf("cannot do this\n");
		}
	}
	return 0;
}