#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main(){
	freopen("test.txt","r+",stdin);
	char c;
	int indx;
	string sQwerty="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
	string dVorak="`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg'~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";

	//cout<<sQwerty<<endl;
	//cout<<dVorak<<endl;
	while(scanf("%c",&c)==1){
		if(c=='\n'){
			cout<<endl;
		}else if(c==' '){
			cout<<" ";
		}else{
			indx=sQwerty.find(c);
			cout<<dVorak[indx];
		}
	}
	return 0;
}