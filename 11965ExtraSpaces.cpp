#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

int main(){
	freopen("11965.txt","r",stdin);
	freopen("11965out.txt","w",stdout);
	int t,n,len;
	bool blank=false,space;
	char str[510];
	scanf("%d",&t);
	for(int loop=0;loop<t;loop++){
		if(blank)printf("\n");
		printf("Case %d:\n",loop+1);
		scanf("%d",&n);
		getchar();
		while(n--){
			gets(str);
			space=false;
			//len=strlen(str);
			for(int i=0;str[i]!=NULL;i++){
				if(str[i]==' ' || str[i]=='\t'){
					if(!space){
						printf(" ");
						space=true;
					}
				}else{
					printf("%c",str[i]);
					space=false;
				}
			}
			printf("\n");
		}
		blank=true;
	}
	return 0;
}