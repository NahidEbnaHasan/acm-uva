#include<iostream>
#include<string>
using namespace std;

int main(){
	int i,j=0;
	string s;
	string lang[]={"HELLO","HOLA","HALLO","BONJOUR","CIAO","ZDRAVSTVUJTE"};
	string country[]={"ENGLISH","SPANISH","GERMAN","FRENCH","ITALIAN","RUSSIAN"};
	while(cin>>s){
		if(s=="#"){
			return 0;
		}else{
			bool found=false;
			for(i=0;i<6;i++){
				if(s==lang[i]){
					found=true;
					break;
				}
			}
			if(found){
				cout<<"Case "<<++j<<": "<<country[i]<<endl;
			}else{
				cout<<"Case "<<++j<<": "<<"UNKNOWN"<<endl;
			}
		}
	}
}