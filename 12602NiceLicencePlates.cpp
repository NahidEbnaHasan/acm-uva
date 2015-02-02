#include<iostream>
#include<string>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main(){
	//freopen("in.txt","r+",stdin);
	int t,pos1,pos2,alphPos,num1,num2;
	string s,s2,alph="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cin>>t;
	while(t--){
		cin>>s;
		pos1=0;
		pos2=s.find("-");
		s2=s.substr(pos1,pos2);
		int j=0;
		num1=0;
		for(int i=pos2-1;i>=0;i--){
			alphPos=alph.find(s2[j++]);
			num1+=alphPos*pow(26,i);
		}
		pos1=pos2+1;
		pos2=s.length();
		s2=s.substr(pos1,pos2);
		num2=atoi(s2.c_str());
		if(abs(num1-num2)<=100){
			cout<<"nice"<<endl;
		}else{
			cout<<"not nice"<<endl;
		}
	}
	return 0;
}