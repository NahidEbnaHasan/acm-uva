//Imam Ibn Hasan
//1.28.2013

#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

void ReverseWord(char s[50]){
	int len=0;
	for(int i=0;s[i]!=NULL;i++){
		len++;
	}
	if(len==1){
		cout<<s[0];
	}else{
		for(int i=(len-1);i>=0;i--){
			cout<<s[i];
		}
	}
}

int main(){
	string s;
	char s1[50]={NULL};
	while(getline(cin,s)){
		int j=0;
		for(int i=0;i<s.size();i++){
			if(s[i]==' ' || s[i]=='\t'){
				ReverseWord(s1);
				cout<<s[i];
				j=0;
				for(int k=0;k<50;k++){
					s1[k]=NULL;
				}
			}else{
				s1[j++]=s[i];
			}
		}
		ReverseWord(s1);
		cout<<endl;

		for(int k=0;k<50;k++){
			s1[k]=NULL;
		}
	}
	return 0;
}