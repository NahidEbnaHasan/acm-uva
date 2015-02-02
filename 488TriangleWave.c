//acm Triangle Wave 488
//programmer: Imam Ibn Hasan
//compiler visual c v 9
//5-14-2012 11.03 pm

#include<stdio.h>

void triangleWave(int b);

int a,b,f,t;
int i,loop;

int main(){
	FILE* fp;
	fp=freopen("in.txt","r+",stdin);

	scanf("%d",&t);

	for(loop=0;loop<t;loop++){
		scanf("%d",&a);
		scanf("%d",&f);
		b=(a*2)-1;
		for(i=1;i<=f;i++){
			triangleWave(b);
			if(i!=f){
				printf("\n");
			}
		}
		if(loop==(t-1)){
			break;
		}else{
			printf("\n");
		}
	}
	return 0;
}

void triangleWave(int b){
	int c;
	int j,k,l;
	c=a;
	for(j=1;j<=b;j++){
		if(j>a){
			c--;
			for(k=c;k>0;k--){
				printf("%d",c);
			}
		}else{
			for(l=1;l<=j;l++){
				printf("%d",j);
			}
		}
		printf("\n");
	}
}