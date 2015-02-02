#include<string>
#include<iostream>
using namespace std;

int main(){
	freopen("in.txt","r+",stdin);
	int l;
	char c;
	bool ok;
	string s;
	while(getline(cin,s)){
		if(s=="*"){
			return 0;
		}else{
			l=s.length();
			ok=true;
			for(int i=0;i<l;i++){
				if(i==0){
					c=s[i];
				}else{
					if(s[i]==' '){
						if(s[i+1]==c || tolower(s[i+1])==c || toupper(s[i+1])==c){ //tolower toupepr header<ctype.h> :/
							ok=true;
						}else{
							ok=false;
							break;
						}
					}
				}
			}
			if(ok){
				cout<<"Y"<<endl;
			}else{
				cout<<"N"<<endl;
			}
		}
	}
}