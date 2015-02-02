#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int i,j,k;
char digit='0',upCase='A',lowCase='a';
map<char,int> chaMap;

void SETMAP(){
	for(i=0;i<63;i++){
		if(i<10){
			chaMap[digit++]=i;
		}else if(i==36){
			continue;
		}else if(i<37){
			chaMap[upCase++]=i;
		}else{
			chaMap[lowCase++]=i-1;
		}
	}
}
int main(){
	freopen("10093.txt","r",stdin);
	freopen("10093out.txt","w",stdout);
	SETMAP();
	bool f;
	int maxDig,sumofDig,temp,N;
	char input[10000];
	while(gets(input) && input[0]){
		maxDig=0;
		sumofDig=0;
		for(i=0;input[i]!='\0';i++){
			if(input[i]>='0' && input[i]<='9' || input[i]>='A' && input[i]<='Z' || input[i]>='a' && input[i]<='z'){
				temp=chaMap[input[i]];
				maxDig=max(maxDig,temp);
				sumofDig+=temp;
			}
		}
		if(maxDig==0) maxDig=1;
		f=false;
		for(N=maxDig;N<63;N++){
			if(sumofDig%N==0){
				f=true;
				break;
			}
		}
		if(f)
			printf("%d\n",N+1);
		else
			printf("such number is impossible!\n");
	}
	return 0;
}