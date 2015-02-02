#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	char s[30],soundx[5];
	int cx,sLen,indx,prevIndx,currntCode,prevCode;
	char alpha[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int code[]={0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2};
	printf("         NAME                     SOUNDEX CODE\n");
	while(scanf("%s",&s)==1 && s[0]){
		prevIndx=-1;
		prevCode=-1;
		cx=0;
		memset(soundx,'0',sizeof(soundx));
		for(int i=0;s[i]!=NULL;i++){
			for(int j=0;j<26;j++){
				if(s[i]==alpha[j]){
					indx=j;
					//occurd[j]=true;
					currntCode=code[indx];
					break;
				}
			}
			if(i==0){
				soundx[cx++]=s[i];
				prevIndx=indx;
				prevCode=currntCode;
			}else if(code[indx]!=0 && prevIndx!=indx && prevCode!=currntCode){
				//printf("%d",code[indx]);
				soundx[cx++]=code[indx]+48;
				prevIndx=indx;
				prevCode=currntCode;
			}else{
				prevIndx=indx;
				prevCode=currntCode;
			}
			if(cx==4)
				break;
		}
		sLen=strlen(s);
		soundx[4]=NULL;
		printf("         %-s",s);
		for(int k=0;k<25-sLen;k++){
			printf(" ");
		}
		printf("%s\n",soundx);
	}
	printf("                   END OF OUTPUT\n");
	return 0;
}