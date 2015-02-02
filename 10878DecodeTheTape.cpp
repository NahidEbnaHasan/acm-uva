//Nothing But a binary conversion of the string format
//space for 0 and the holes for 1
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
using namespace std;

int BinToDecimal(char* b){
	int dec=0,p=0,sLen=strlen(b);
	for(int i=sLen-1;i>=0;i--){
		if(b[i]!='0'){
			dec+=(b[i]-48)*pow(2,p++);
		}else{
			p++;
		}
	}
	return dec;
}

int main(){
	freopen("in2.txt","r",stdin);
	int cx,sLen,dec;
	char s[13],bin[9];
	bool isValued;
	while(gets(s) && s[0]){
		sLen=strlen(s);
		cx=0;
		bin[8]=NULL;
		isValued=false;
		for(int i=0;i<sLen;i++){
			if(s[i]==' '){
				bin[cx++]='0';
				isValued=true;
			}else if(s[i]=='o'){
				bin[cx++]='1';
				//isValued=true;
			}
		}
		if(isValued){
			dec=BinToDecimal(bin);
			printf("%c",dec);
		}
	}
}