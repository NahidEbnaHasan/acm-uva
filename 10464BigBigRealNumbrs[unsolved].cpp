#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

void Add(string fNum,string sNum){
	int carry,count,pos,fLen,sLen,maxLen,fDotIndx,sDotIndx;
	char f[1005],s[1005],r[1005];
	memset(f,'0',sizeof(f));
	memset(s,'0',sizeof(s));
	fLen=fNum.length();
	sLen=sNum.length();
	fDotIndx=fNum.find(".");
	sDotIndx=sNum.find(".");
	if(fDotIndx>sDotIndx){
		count=0;
		for(int i=0;i<fLen;i++){
			f[i]=fNum[count++];
		}
		pos=fDotIndx-sDotIndx;
		count=0;
		for(int i=pos;i<sLen+pos;i++){
			s[i]=sNum[count++];
		}
	}else if(sDotIndx>fDotIndx){
		count=0;
		for(int i=0;i<sLen;i++){
			s[i]=sNum[count++];
		}
		pos=sDotIndx-fDotIndx;
		count=0;
		for(int i=pos;i<fLen+pos;i++){
			f[i]=fNum[count++];
		}
	}else{
		for(int i=0;i<fLen;i++){
			f[i]=fNum[i];
		}
		for(int i=0;i<sLen;i++){
			s[i]=sNum[i];
		}
	}
	maxLen=max(fLen,sLen);
	carry=0;
	count=0;
	int n;
	for(int i=maxLen-1;i>=0;i--){
		if(f[i]=='.'){
			r[count++]='.';
		}else{
			n=(f[i]-48)+(s[i]-48)+carry;
			r[count++]=(n%10)+48;
			carry=n/10;
		}
	}
	r[count++]=carry+48;
	for(int i=count-1;i>=0;i--){
		printf("%c",r[i]);
	}
	printf("\n");
}

void Subtract(string fNum,string sNum){
	int carry,count,pos,fLen,sLen,maxLen,fDotIndx,sDotIndx;
	char f[1005],s[1005],r[1005];
	memset(f,'0',sizeof(f));
	memset(s,'0',sizeof(s));
	fLen=fNum.length();
	sLen=sNum.length();
	fDotIndx=fNum.find(".");
	sDotIndx=sNum.find(".");
	if(fDotIndx>sDotIndx){
		count=0;
		for(int i=0;i<fLen;i++){
			f[i]=fNum[count++];
		}
		pos=fDotIndx-sDotIndx;
		count=0;
		for(int i=pos;i<sLen+pos;i++){
			s[i]=sNum[count++];
		}
	}else if(sDotIndx>fDotIndx){
		count=0;
		for(int i=0;i<sLen;i++){
			s[i]=sNum[count++];
		}
		pos=sDotIndx-fDotIndx;
		count=0;
		for(int i=pos;i<fLen+pos;i++){
			f[i]=fNum[count++];
		}
	}else{
		for(int i=0;i<fLen;i++){
			f[i]=fNum[i];
		}
		for(int i=0;i<sLen;i++){
			s[i]=sNum[i];
		}
	}
	maxLen=max(fLen,sLen);
	carry=0;
	count=0;
	int n;
	for(int i=maxLen-1;i>=0;i--){
		if(f[i]=='.'){
			r[count++]='.';
		}else{
			if((f[i]-48)<((s[i]-48)+carry)){
				n=((f[i]-48)+10)-((s[i]-48)+carry);
				carry=1;
			}else{
				n=(f[i]-48)-((s[i]-48)+carry);
				carry=0;
			}
			r[count++]=(n%10)+48;
			//carry=n/10;
		}
	}
	r[count++]=carry+48;
	for(int i=count-1;i>=0;i--){
		printf("%c",r[i]);
	}
	printf("\n");
}

int main(){
	freopen("in.txt","r+",stdin);
	int t;
	//bool neg;
	string s,num1,num2;
	scanf("%d",&t);
	getchar();
	while(t--){
		getline(cin,s);
		int indx=s.find(" ");
		num1=s.substr(0,indx);
		num2=s.substr(indx+1,s.length());
		//neg=false;
		if(num1[0]=='-' && num2[0]!='-'){
			num1=num1.substr(1,num1.length());
			//neg=true;
			Subtract(num2,num1);
		}else if(num2[0]=='-' && num1[0]!='-'){
			num2=num2.substr(1,num2.length());
			//neg=true;
			Subtract(num1,num2);
		}else if(num1[0]=='-' && num2[0]=='-'){
			num1=s.substr(1,indx);
			num2=s.substr(indx+2,s.length());
			Add(num1,num2);
		}else{
			Add(num1,num2);
		}

	}
}