#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	freopen("in2.txt","r",stdin);
	int k,test,n,p,q,temp;
	bool flag;
	char *ptr;
	char s[50];
	scanf("%d",&test);
	for(int i=0;i<test;i++){
		int arr[50];
		scanf("%d %d %d",&n,&p,&q);
		getchar();
		gets(s);
		k=0;
		flag=true;
		ptr=strtok(s," \t\n");
		while(ptr){
			arr[k++]=atoi(ptr);
			ptr=strtok(NULL," \t\n");
		}
		while(flag){
			temp=0;
			for(int x=0;x<n;x++){
				temp=temp+arr[x];
			}
			if(temp<=q && n<=p){
				printf("Case %d: %d\n",i+1,n);
				flag=false;
			}else{
				n--;
			}
		}
	}
	return 0;
}