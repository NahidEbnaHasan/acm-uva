#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;

bool comparator(char a,char b){
	if(tolower(a)==tolower(b)){
		return a<b;
	}
	return tolower(a)<tolower(b);
}

int main(){
	freopen("in2.txt","r",stdin);
	char s[1000];
	int tCase,sLen;
	scanf("%d",&tCase);
	while(tCase--){
		scanf("%s",&s);
		sLen=strlen(s);
		sort(s,s+sLen,comparator);
		do{
			printf("%s\n",s);
		}while(next_permutation(s,s+sLen,comparator));
	}
	return 0;
}
