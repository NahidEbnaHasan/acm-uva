#include<iostream>
using namespace std;

int main(){
	char keys[47] = {'`','1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']','\\','A','S','D','F','G','H','J','K','L',';','\'','Z','X','C','V','B','N','M',',','.','/'};
	char ch;
	while (cin.get(ch)){
		if (ch == '\n' || ch == '\t' || ch == ' '){
			cout << ch;
		}else{
			for(int i=0;i<47;i++){
				if(keys[i]==ch){
					ch = keys[i-1];
				}
			}
			cout<<ch;
		}
	}
}