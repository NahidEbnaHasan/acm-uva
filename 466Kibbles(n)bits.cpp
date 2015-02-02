#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
using namespace std;

long long HexToDecimal(string s){
	char c[2];
	long long Dec=0,len=s.length();
	//s=s.substr(2,len);
	len=s.length();
	s=string(s.rbegin(),s.rend());
	for(int i=0;i<len;i++){
		if(s[i]=='A' || s[i]=='a'){
			Dec=Dec+10*pow(16,i);
		}else if(s[i]=='B' || s[i]=='b'){
			Dec=Dec+11*pow(16,i);
		}else if(s[i]=='C' || s[i]=='c'){
			Dec=Dec+12*pow(16,i);
		}else if(s[i]=='D' || s[i]=='d'){
			Dec=Dec+13*pow(16,i);
		}else if(s[i]=='E' || s[i]=='e'){
			Dec=Dec+14*pow(16,i);
		}else if(s[i]=='F' || s[i]=='f'){
			Dec=Dec+15*pow(16,i);
		}else{
			c[0]=s[i];
			c[1]=NULL;
			Dec=Dec+atoi(c)*pow(16,i);
		}
	}
	return Dec;
}

void DecToBinary(int n){
	int i=0;
	//string bin;
	char b[13];
	memset(b,'0',sizeof(b));
	while(n>0){
		b[i++]=(n%2)+48;
		n/=2;
	}
	for(int i=12;i>=0;i--){
		//printf("%c",b[i]);
		cout<<b[i];
	}
	//bin=string(b);
	//bin=string(bin.rbegin(),bin.rend());
	//return bin;
}

int main(){
	freopen("in.txt","r+",stdin);
	int t,dec1,dec2,decRes;
	char c;
	string s,hex1,hex2;
	scanf("%d",&t);
	getchar();
	while(t--){
		getline(cin,s);
		int f=s.find_first_of(" ");
		hex1=s.substr(0,f);
		hex2=s.substr(f+3,s.length());
		c=s[f+1];
		dec1=HexToDecimal(hex1);
		dec2=HexToDecimal(hex2);
		if(c=='+'){
			decRes=dec1+dec2;
		}else{
			decRes=dec1-dec2;
		}

		//cout<<DecToBinary(dec1)<<" "<<c<<" "<<DecToBinary(dec2)<<" = "<<decRes<<endl;
		DecToBinary(dec1);
		cout<<" "<<c<<" ";
		DecToBinary(dec2);
		cout<<" = "<<decRes<<endl;
	}
}