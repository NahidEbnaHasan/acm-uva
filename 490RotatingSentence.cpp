#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){
	int count=0,len,maxLen=0;
	char s[100][100];
	char s2[100];
	for(int i=0;i<100;i++){
		memset(s[i],' ',100);
	}
	while(cin.getline(s2,128)){
		len=strlen(s2);
		if(len>maxLen)
			maxLen=len;
		//cout<<maxLen<<endl;
		for(int i=0;i<len;i++){
			s[count][i]=s2[i];
		}
		count++;
	}
	for(int j=0;j<maxLen;j++){
		for(int k=count-1;k>=0;k--){
			cout<<s[k][j];
		}
		cout<<endl;
	}
}
