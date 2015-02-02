//Imam Ibn Hasan
//1.27.2013

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	char alphaUp[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char alphaLow[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	bool displyed[26]={false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false};
	int mark[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int count[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int n;
	string s;
	cin>>n;
	cin.get();
	while(n--){
		getline(cin,s);
		for(int i=0;i<s.size();i++){
			if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
				for(int j=0;j<26;j++){
					if((s[i]==alphaUp[j])||(s[i])==alphaLow[j]){
						mark[j]++;
						count[j]++;
						break;
					}
				}
			}
		}
	}
	sort(count,count+26);
	for(int i=25;count[i]!=0;i--){
		for(int j=0;j<26;j++){
			if((count[i]==mark[j]) && displyed[j]==false){
				displyed[j]=true;
				cout<<alphaUp[j]<<" "<<count[i]<<endl;
				break;
			}else{
				continue;
			}
		}
	}

	return 0;
}