#include<iostream>
#include<string.h>
#include<string>
using namespace std;

char alphaUp[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char alphaLow[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int freq[26];

int main(){
	int t,maxFreq;
	string s;
	cin>>t;
	cin.ignore(100,'\n');
	while(t--){
		getline(cin,s);
		maxFreq=0;
		memset(freq,0,sizeof(freq));
		for(int i=0;i<s.size();i++){
			if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
				for(int j=0;j<26;j++){
					if((s[i]==alphaUp[j])||(s[i])==alphaLow[j]){
						freq[j]++;
						if(freq[j]>maxFreq){
							maxFreq=freq[j];
						}
						break;
					}
				}
			}
		}

		for(int i=0;i<26;i++){
			if(freq[i]==maxFreq){
				cout<<alphaLow[i];
			}
		}
		cout<<endl;
	}
}