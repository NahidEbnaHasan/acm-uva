#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#define MAX 9999999
using namespace std;

/*int ToDecimal(char* s,int base){
	int p,len=strlen(s),deci=0;
	p=len-1;
	for(int i=0;i<len;i++){
		if(s[i]=='A'){
			deci+=10*pow(base,p--);
		}else if(s[i]=='B'){
			deci+=11*pow(base,p--);
		}else if(s[i]=='C'){
			deci+=12*pow(base,p--);
		}else if(s[i]=='D'){
			deci+=13*pow(base,p--);
		}else if(s[i]=='E'){
			deci+=14*pow(base,p--);
		}else if(s[i]=='F'){
			deci+=15*pow(base,p--);
		}else{
			deci+=(s[i]-48)*pow(base,p--);
		}
	}
	return deci;
}

char err[]={"ERROR"};

void ConvertToBase(int num,int base){
	int n,cx=0,cx2;
	char s2[10],s3[10];
	if(num==0){
		s3[0]='0';
		s3[1]=NULL;
		printf("%7s\n",s3);
	}else{
		while(num>0){
			n=num%base;
			if(n==10){
				s2[cx++]='A';
			}else if(n==11){
				s2[cx++]='B';
			}else if(n==12){
				s2[cx++]='C';
			}else if(n==13){
				s2[cx++]='D';
			}else if(n==14){
				s2[cx++]='E';
			}else if(n==15){
				s2[cx++]='F';
			}else{
				s2[cx++]=n+48;
			}
			num=num/base;
		}
		if(cx>7){
			printf("%7s\n",err);
		}else{
			cx2=0;
			for(int i=cx-1;i>=0;i--){
				s3[cx2++]=s2[i];
			}
			s3[cx2++]=NULL;
			//strrev(s2);
			printf("%7s\n",s3);
		}
	}
}

int main(){
	freopen("in2.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	char s[10];
	int a,b,deci;
	while(scanf("%s",&s)==1){
		scanf("%d",&a);
		scanf("%d",&b);
		if(a!=10){
			deci=ToDecimal(s,a);
		}else{
			deci=atoi(s);
		}

		if(b!=10){
			ConvertToBase(deci,b);
		}else{
			if(deci>MAX){
				printf("%7s\n",err);
			}else{
				printf("%7d\n",deci);
			}
		}
	}
	return 0;
}*/

#include<map>

map<char,int> alph;
map<int,char> numb;

void DefineMaps(){
	for(int i=0;i<6;i++){
		alph['A'+i]=10+i;
		numb[10+i]='A'+i;
	}
}

int ToDecimal(char* s,int base){
	int p,len=strlen(s),deci=0;
	p=len-1;
	for(int i=0;i<len;i++){
		if(s[i]>='A' && s[i]<='F'){
			deci+=alph[s[i]]*pow(base,p--);
		}else{
			deci+=(s[i]-48)*pow(base,p--);
		}
	}
	return deci;
}

char err[]={"ERROR"};

void ConvertToBase(int num,int base){
	int n,cx=0,cx2;
	char s2[10],s3[10];
	if(num==0){
		s3[0]='0';
		s3[1]=NULL;
		printf("%7s\n",s3);
	}else{
		while(num>0){
			n=num%base;
			if(n>=10 && n<=15){
				s2[cx++]=numb[n];
			}else{
				s2[cx++]=n+48;
			}
			num=num/base;
		}
		if(cx>7){
			printf("%7s\n",err);
		}else{
			cx2=0;
			for(int i=cx-1;i>=0;i--){
				s3[cx2++]=s2[i];
			}
			s3[cx2++]=NULL;
			//strrev(s2);
			printf("%7s\n",s3);
		}
	}
}

int main(){
	freopen("in2.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	char s[10];
	int a,b,deci;
	DefineMaps();
	while(scanf("%s",&s)==1){
		scanf("%d",&a);
		scanf("%d",&b);
		if(a!=10){
			deci=ToDecimal(s,a);
		}else{
			deci=atoi(s);
		}

		if(b!=10){
			ConvertToBase(deci,b);
		}else{
			if(deci>MAX){
				printf("%7s\n",err);
			}else{
				printf("%7d\n",deci);
			}
		}
	}
	return 0;
}



/*
critical input
FF 16  2
9999999 15 10
10000000 10 10
10000000 16 16
9999999 16 16
      0 10 12
    000 10 12
0000000 10 12
     FF 16  2
*/