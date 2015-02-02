#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cctype>
using namespace std;

int i,dataSet;
char con[2],pre[2],uni[2];
double num[3];

void ProcessString(string s,int ds){
	int cx=0,sLen=s.length();
	char n[30];
	con[ds]=s[0];
	for(int j=2;;j++){
		if(s[j]>='0' && s[j]<='9' || s[j]=='.'){
			n[cx++]=s[j];
		}else{
			n[cx++]=NULL;
			num[ds]=atof(n);
			break;
		}
	}
	if(isdigit(s[sLen-2])){
		pre[ds]=NULL;
	}else{
		pre[ds]=s[sLen-2];
	}
	uni[ds]=s[sLen-1];
}

double ProcessPrefix(char c){
	if(c==NULL){
		return 1.00;
	}else if(c=='m'){
		return 0.001;
	}else if(c=='k'){
		return 1000.00;
	}else{
		return 1000000.00;
	}
}

int main(){
	freopen("in2.txt","r",stdin);
	string s;
	int tCase,sLen,pos1,toLen;
	bool eqFound;
	scanf("%d",&tCase);
	getchar();
	for(int loop=0;loop<tCase;){
		getline(cin,s);
		sLen=s.length();
		eqFound=false;
		dataSet=0;
		for(i=0;i<sLen;i++){
			if(s[i]=='='){
				pos1=i-1;
				eqFound=true;
			}
			if(eqFound && (s[i-1]=='W' || s[i-1]=='A' || s[i-1]=='V')){
				//dataSet++;
				toLen=i-pos1;
				ProcessString(s.substr(pos1,toLen),dataSet);
				eqFound=false;
				dataSet++;
			}
			if(dataSet==2){
				break;
			}
		}
		if(eqFound){
			//dataSet++;
			toLen=i-pos1;
			ProcessString(s.substr(pos1,toLen),dataSet);
			eqFound=false;
		}
		printf("Problem #%d\n",++loop);
		if(con[0]=='U' && con[1]=='I' || con[0]=='I' && con[1]=='U'){
			num[2]=(num[0]*ProcessPrefix(pre[0]))*(num[1]*ProcessPrefix(pre[1]));
			printf("P=%0.2lfW\n",num[2]);
		}else if(con[0]=='P' && con[1]=='U'){
			num[2]=(num[0]*ProcessPrefix(pre[0]))/(num[1]*ProcessPrefix(pre[1]));
			printf("I=%0.2lfA\n",num[2]);
		}else if(con[0]=='U' && con[1]=='P'){
			num[2]=(num[1]*ProcessPrefix(pre[1]))/(num[0]*ProcessPrefix(pre[0]));
			printf("I=%0.2lfA\n",num[2]);
		}else if(con[0]=='P' && con[1]=='I'){
			num[2]=(num[0]*ProcessPrefix(pre[0]))/(num[1]*ProcessPrefix(pre[1]));
			printf("U=%0.2lfV\n",num[2]);
		}else{
			num[2]=(num[1]*ProcessPrefix(pre[1]))/(num[0]*ProcessPrefix(pre[0]));
			printf("U=%0.2lfV\n",num[2]);
		}
		printf("\n");
	}
	return 0;
}