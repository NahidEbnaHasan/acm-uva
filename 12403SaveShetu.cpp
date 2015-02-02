//BISMILLAHIR RAHMANIR RAHIM

#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main(){
	string s;
	int t,d=0,indx1,indx2;
	cin>>t;
	cin.get();
	while(t--){
		getline(cin,s);
		if(s=="report"){
			cout<<d<<endl;
		}else{
			indx1=(s.find_first_of(" "))+1;
			indx2=s.length();
			s=s.substr(indx1,indx2);
			d+=atoi(s.c_str());
		}
	}
	return 0;
}