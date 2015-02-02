#include<iostream>
#include<cstdio>
#include<cstring>
#define MAX 1000005
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	bool same;
	char s[MAX];
	int loop=1,qry,min,max,tmp;
	while(scanf("%s",&s)==1 && s[0]){
		printf("Case %d:\n",loop++);
		scanf("%d",&qry);
		for(int i=0;i<qry;i++){
			scanf("%d %d",&min,&max);
			if(min>max){
				tmp=min;
				min=max;
				max=tmp;
			}
			same=true;
			for(int j=min;j<=max;j++){
				if(j==min){
					tmp=s[j];
				}else{
					if(tmp!=s[j]){
						same=false;
						break;
					}
				}
			}
			if(!same){
				printf("No\n");
			}else{
				printf("Yes\n");
			}
		}
	}
	return 0;
}