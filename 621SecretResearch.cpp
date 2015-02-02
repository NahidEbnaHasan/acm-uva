#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	string s;
	int testCase,sLen;
	scanf("%d",&testCase);
	getchar();
	while(testCase--){
		cin>>s;
		if(s=="1" || s=="4" || s=="78"){
			printf("+\n");
		}else{
			sLen=s.length();
			if(s[sLen-2]=='3' && s[sLen-1]=='5'){
				printf("-\n");
			}else if(s[0]=='9' && s[sLen-1]=='4'){
				printf("*\n");
			}else{
				printf("?\n");
			}
		}
	}
	return 0;
}