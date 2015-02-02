#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	freopen("11586.txt","r",stdin);
	freopen("11586out.txt","w",stdout);
	int i;
	bool loop;
	int n,M,F,len;
	char tracks[500],*token;
	scanf("%d",&n);
	getchar();
	while(n--){
		gets(tracks);
		len=strlen(tracks);
		M=F=0;
		for(i=0;i<len;i++){
			if(tracks[i]=='M') M++;
			else if(tracks[i]=='F') F++;
		}
		if(M==1 && F==1 || M!=F){
			printf("NO LOOP\n");
		}else{
			printf("LOOP\n");
		}
	}
	return 0;
}