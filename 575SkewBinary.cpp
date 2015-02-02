#include<iostream>
#include<string>
using namespace std;

int SkewBinToDeci(string s);

int main(){
	string s;
	while(cin>>s){
		if(s=="0"){
			return 0;
		}else{
			cout<<SkewBinToDeci(s)<<endl;
		}
	}
}

int SkewBinToDeci(string s){
	int dec=0,len=s.length();
	for(int i=(len-1),j=1;i>=0;i--){
		dec+=(s[i]-48)*(pow(2,j++)-1);
	}
	return dec;
}