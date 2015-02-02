#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	char s[30];
	int sLen,indx,prevIndx,currntCode,prevCode;
	char sndx[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int code[]={0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2};
	while(scanf("%s",&s)==1 && s[0]){
		prevIndx=-1;
		prevCode=-1;
		for(int i=0;s[i]!=NULL;i++){
			for(int j=0;j<26;j++){
				if(s[i]==sndx[j]){
					indx=j;
					//occurd[j]=true;
					currntCode=code[indx];
					break;
				}
			}
			if(code[indx]!=0 && prevIndx!=indx && prevCode!=currntCode){
				printf("%d",code[indx]);
				prevIndx=indx;
				prevCode=currntCode;
			}else{
				prevIndx=indx;
				prevCode=currntCode;
			}
		}
		printf("\n");
	}
}