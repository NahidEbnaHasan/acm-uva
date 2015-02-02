#include<iostream>
#include<string>
#include<stdlib.h>
#include<math.h>
using namespace std;

long long StringToInt(string s){
	long long n=0,len;
	len=s.length();
	for(int i=0;i<len;i++){
		n=n*10+(s[i]-48);
	}
	return n;
}

long long HexToDecimal(string s){
	char c[2];
	long long Dec=0,len=s.length();
	s=s.substr(2,len);
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

string DecToHex(string s){
	char c;
	string s2="";
	long long tmp,n=StringToInt(s);
	if(n==0){
		s2="0x0";
		return s2;
	}else{
		while(n>0){
			tmp=n%16;
			if(tmp==10){
				s2=s2+'A';
			}else if(tmp==11){
				s2=s2+'B';
			}else if(tmp==12){
				s2=s2+'C';
			}else if(tmp==13){
				s2=s2+'D';
			}else if(tmp==14){
				s2=s2+'E';
			}else if(tmp==15){
				s2=s2+'F';
			}else{
				c=tmp+48;
				s2=s2+c;
			}
			n=n/16;
		}
		s2=s2+'x';
		s2=s2+'0';
		return string(s2.rbegin(),s2.rend());
	}
}

int main(){
	//freopen("10473.txt","r+",stdin);
	string s;
	while(cin>>s){
		if(s[0]=='-'){
			return 0;
		}else{
			if(s[0]=='0' && s[1]=='x'){
				cout<<HexToDecimal(s)<<endl;
			}else{
				cout<<DecToHex(s)<<endl;
			}
		}
	}
}