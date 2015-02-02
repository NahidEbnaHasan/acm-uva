#include<iostream>
#include<string>
using namespace std;

int main(){
	freopen("test.txt","r+",stdin);
	string s;
	int cx,len;
	char palin[500];
	bool palindrome;
	while(getline(cin,s)){
		if(s=="DONE"){
			return 0;
		}else{
			cx=0;
			len=s.length();
			for(int i=0;i<len;i++){
				if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z'){
					palin[cx++]=s[i];
				}
			}
			len=cx;
			int lastPos=len-1;
			palindrome=false;
			if(len==0 || len==1){
				palindrome=true;
			}else{
			for(int i=0;i<len/2;i++){
				if(palin[i]==palin[lastPos] || palin[i]==tolower(palin[lastPos]) || palin[i]==toupper(palin[lastPos])){
					palindrome=true;
					lastPos--;
				}else{
					palindrome=false;
					break;
				}
			}
			}
			if(palindrome){
				cout<<"You won't be eaten!"<<endl;
			}else{
				cout<<"Uh oh.."<<endl;
			}
		}
	}
	return 0;
}