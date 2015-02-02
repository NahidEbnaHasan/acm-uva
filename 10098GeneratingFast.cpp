#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>

using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	char s[15];
	int tC,sLen;
	//bool LF=false;
	scanf("%d",&tC);
	while(tC--){
		//if(LF)printf("\n");
		scanf("%s",&s);
		sLen=strlen(s);
		sort(s,s+sLen);
		//printf("%s\n",s);
		do{
			printf("%s\n",s);
		}while(next_permutation(s,s+sLen));
		//LF=true;
		printf("\n");
	}
	return 0;
}