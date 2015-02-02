#include<iostream>
#include<string>
#include<stdlib.h>
#include<algorithm>
using namespace std;

unsigned long long GetMinNumber(string s){
	int len;
	len=s.length();
	char *temp=new char[len];
	for(int i=0;i<len;i++){
		temp[i]=s[i];
	}
	sort(temp,temp+len);
	if(temp[0]=='0'){
		for(int i=0;i<len;i++){
			if(temp[i]!='0'){
				temp[0]=temp[i];
				temp[i]='0';
				break;
			}
		}
	}
	return atol(temp);
	delete[] temp;
}

unsigned long long GetMaxNumber(string s){
	int j=0,len;
	unsigned long long n=0;
	len=s.length();
	char *temp=new char[len];
	char *temp2=new char[len];
	for(int i=0;i<len;i++){
		temp[i]=s[i];
	}
	sort(temp,temp+len);
	for(int i=len-1;i>=0;i--){
		temp2[j++]=temp[i];
	}
	for(int i=0;i<len;i++){
		n=(n*10)+(temp2[i]-48);
	}
	return n;
	delete[] temp;
	delete[] temp2;
}

int main(){
	string s;
	unsigned long long minN,maxN;
	while(cin>>s){
		minN=GetMinNumber(s);
		maxN=GetMaxNumber(s);
		cout<<maxN<<" - "<<minN<<" = "<<maxN-minN<<" = 9 * "<<(maxN-minN)/9<<endl;
	}
	return 0;
}