//Nahid Ibn Hasan
//2.2.2013
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int main(){
	int k;
	string s1,s2;
	bool ok,found;
	while(cin>>s1>>s2){
		k=0;
		ok=false;
		found=false;
		for(int i=0;i<s1.length();i++){
			for(int j=k;s2[j]!=NULL;j++){
				if(s2[j]==s1[i]){
					ok=true;
					k=j+1;
					break;
				}else{
					ok=false;
				}
			}
			if(!ok){
				found=false;
				break;
			}else{
				found=true;
				continue;
			}
		}
		if(found)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}