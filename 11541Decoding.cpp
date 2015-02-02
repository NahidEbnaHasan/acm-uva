
//programmer: Imam Ibn Hasan
//compiler: visual studio 2012

#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main(){
	int n,num,j=0;
	char c;
	char *digits;
	string s;
	cin>>n;
	cin.get();
	for(int loop=0;loop<n;loop++){
		getline(cin,s);
		digits = new char[10];
		cout<<"Case "<<loop+1<<": ";
		for(int i=0;i<s.length();i++){
			if(s[i] >= 'A' && s[i]<='Z'){
				if(i==0){
					c=s[i];
				}else{
					num=atoi(digits);
					for(int k=0;k<num;k++){
						cout<<c;
					}
					delete []digits;
					digits = new char[10];
					j=0;
					c=s[i];
				}
			}else{
				digits[j++]=s[i];
			}
		}
		num=atoi(digits);
		for(int k=0;k<num;k++){
			cout<<c;
		}
		cout<<endl;
		j=0;
	}
	return 0;
}