#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

int main(){
	freopen("in2.txt","r+",stdin);
	char s[10];
	int cx,len,correct=0;
	bool opFound,eqFound;
	char op,a[4],b[4],c[4];
	while(scanf("%s",&s)==1){
		memset(a,NULL,sizeof(a));
		memset(b,NULL,sizeof(b));
		memset(c,NULL,sizeof(c));
		len=strlen(s);
		if(s[len-1]!='?'){
			cx=0;
			opFound=false;
			eqFound=false;
			for(int i=0;i<len;i++){
				if(s[i]=='+' || s[i]=='-'){
					op=s[i];
					opFound=true;
					cx=0;
				}else if(s[i]=='='){
					eqFound=true;
					cx=0;
				}else if(eqFound){
					c[cx++]=s[i];
				}else if(opFound){
					b[cx++]=s[i];
				}else{
					a[cx++]=s[i];
				}
			}
			if(op=='+'){
				if(atoi(a)+atoi(b)==atoi(c)){
					correct++;
				}
			}else{
				if((atoi(a)-atoi(b))==atoi(c)){
					correct++;
				}
			}
		}
	}
	printf("%d\n",correct);
	return 0;
}