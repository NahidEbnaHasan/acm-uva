//acm Gourmet Games 11313
//programmer: Imam Ibn Hasan
//compiler visual c v 9
//5-14-2012 2.44 am


#include<stdio.h>

int main(){
	int t,n,m,loop;
	FILE* fp;
	fp=freopen("in.txt","r+",stdin);

	scanf("%d",&t);
	for(loop=0;loop<t;loop++){
		scanf("%d",&n);
		scanf("%d",&m);
		if(m==2){
			printf("%d",n-1);
		}else if(n%(m-1)==1){
			printf("%d",n/(m-1));
		}else{
			printf("Cannot do this");
		}
		printf("\n");
	}
	return 0;
}