//programmer: Imam Ibn Hasan
//compiler:vs 2012
//7.1.2013

#include<iostream>
using namespace std;

int main(){
	char ch;
	while (cin.get(ch)){
		if(ch=='\n'){
			cout<<ch;
		}else{
			//int c=(int) ch-7;
			ch=(char) ch-7;
			cout<<ch;
		}
	}
	return 0;
}