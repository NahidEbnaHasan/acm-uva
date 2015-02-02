#include<iostream>
#include<cstdio>
#include<string>
#include<math.h>
using namespace std;

string DecToBin(int num){
	int a,b;
	string s;
	while(num>0){
		a=num%2;
		num/=2;
		s+=a+48;
	}
	return s;
	//return string(s.rbegin(),s.rend());
}

int BinToDec(string s){
	int len,dec=0;
	len=s.length();
	for(int i=0;i<len;i++){
		dec+=(s[i]-48)*(pow(2,i));
	}
	return dec;
}

int main(){
	freopen("11933.txt","r",stdin);
	int n,len,i,cx;
	string s,sa,sb;
	while(scanf("%d",&n)==1 && n){
		s=DecToBin(n);
		sa=sb=s;
		len=s.length();
		cx=0;
		for(i=0;i<len;i++){
			if(s[i]=='1'){
				cx++;
				if(cx%2!=0){
					sb[i]='0';
				}else{
					sa[i]='0';
				}
			}
		}
		//BinToDec(sa);
		printf("%d %d\n",BinToDec(sa),BinToDec(sb));
	}
}