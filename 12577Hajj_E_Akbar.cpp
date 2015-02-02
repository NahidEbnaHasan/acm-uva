#include<iostream>
#include<string>
using namespace std;

int main(){
	int i=0;
	string s;
	while(cin>>s){
		if(s=="*"){
			return 0;
		}else if(s=="Hajj"){
			cout<<"Case "<<++i<<": Hajj-e-Akbar"<<endl;
		}else{
			cout<<"Case "<<++i<<": Hajj-e-Asghar"<<endl;
		}
	}
	return 0;
}