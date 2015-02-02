#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main(){
	freopen("11716.txt","r",stdin);
	int i,j,k;
	int t,len,iRoot;
	double dRoot;
	char in[10010];
	scanf("%d",&t);
	getchar();
	while(t--){
		gets(in);
		len=strlen(in);
		iRoot=ceil(sqrt(len));
		dRoot=sqrt(len);
		if(iRoot!=dRoot){
			printf("INVALID\n");
		}else{
			for(i=0;i<iRoot;i++){
				for(j=0,k=i;j<iRoot;j++){
					printf("%c",in[k]);
					k+=iRoot;
				}
			}
			printf("\n");
		}
	}
	return 0;
}