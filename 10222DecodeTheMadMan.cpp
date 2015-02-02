//author: Imam Ibn Hasan
//visual studio 2012

#include<iostream>
using namespace std;

int main(){
	char keysLow[34] = {'q','w','e','r','t','y','u','i','o','p','[',']','\\','a','s','d','f','g','h','j','k','l',';','\'','z','x','c','v','b','n','m',',','.','/'};
	char keysUp[34] = {'Q','W','E','R','T','Y','Y','I','O','P','[',']','\\','A','S','D','F','G','H','J','K','L',';','\'','Z','X','C','V','B','N','M',',','.','/'};
	char ch;
	while (cin.get(ch)){
		if (ch == '\n' || ch == '\t' || ch == ' '){
			cout << ch;
		}else{
			for(int i=0;i<34;i++){
				if(keysLow[i]==ch || keysUp[i]==ch){
					ch = keysLow[i-2];
				}
			}
			cout<<ch;
		}
	}
}