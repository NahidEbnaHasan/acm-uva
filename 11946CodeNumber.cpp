//no need of test case variable
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main(){
	//freopen("in.txt","r+",stdin);
	int t;
	string s;
	char encoded[10]={'0','1','2','3','4','5','6','7','8','9'};
	char decoded[10]={'O','I','Z','E','A','S','G','T','B','P'};
	cin>>t;
	cin.ignore(100,'\n');
	while(getline(cin,s)){	
		for(int i=0;i<s.length();i++){
			if(s[i]>='0' && s[i]<='9'){
				for(int j=0;j<10;j++){
					if(s[i]==encoded[j]){
						cout<<decoded[j];
					}
				}
			}else{
				cout<<s[i];
			}
		}
		cout<<endl;
	}
	return 0;
}