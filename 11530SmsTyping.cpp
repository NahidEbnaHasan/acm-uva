#include<iostream>
#include<string>
using namespace std;

int main(){
	char keyPad[27]={'a','b','c',
		'd','e','f',
		'g','h','i',
		'j','k','l',
		'm','n','o',
		'p','q','r','s',
		't','u','v',
		'w','x','y','z',' '};
	int typeFreq[27]={1,2,3,
		1,2,3,
		1,2,3,
		1,2,3,
		1,2,3,
		1,2,3,4,
		1,2,3,
		1,2,3,4,1};
	int t,totalFreq;
	string s;
	cin>>t;
	cin.ignore(100,'\n');
	for(int a=0;a<t;a++){
		getline(cin,s);
		totalFreq=0;
		for(int i=0;i<s.length();i++){
			for(int j=0;j<27;j++){
				if(s[i]==keyPad[j]){
					totalFreq+=typeFreq[j];
				}
			}
		}
		cout<<"Case #"<<a+1<<": "<<totalFreq<<endl;
	}
}