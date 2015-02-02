#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
string revAlpha="A   3  HIL JM O   2TUVWXY5 1SE Z  8 ";

bool IsRegular(string s){
	int len,eIndx;
	len=s.length();
	eIndx=len-1;
	for(int i=0;i<len/2;i++){
		if(s[i]==s[eIndx]){
			//palin=true;
			eIndx--;
		}else{
			return false;
		}
	}
	return true;
}

bool IsMirror(string s){
	int len,eIndx,mIndx;
	len=s.length();
	if(len==1){
		mIndx=alpha.find(s[0]);
		if(s[0]==revAlpha[mIndx]){
			return true;
		}else{
			return false;
		}
	}else{
		eIndx=len-1;
		for(int i=0;i<len/2;i++){
			mIndx=alpha.find(s[i]);
			if(s[eIndx]==revAlpha[mIndx]){
				//palin=true;
				eIndx--;
			}else{
				return false;
			}
		}
	}
	return true;
}

int main(){
	freopen("in2.txt","r+",stdin);
	string s;
	while(cin>>s){
		if(IsRegular(s)){
			if(IsMirror(s)){
				cout<<s<<" -- is a mirrored palindrome."<<endl;
			}else{
				cout<<s<<" -- is a regular palindrome."<<endl;
			}
		}else if(IsMirror(s)){
			cout<<s<<" -- is a mirrored string."<<endl;
		}else{
			cout<<s<<" -- is not a palindrome."<<endl;
		}
		cout<<endl;
	}
	return 0;
}



//critical input
//S2 -- Mirrored string.
//S -- Reguler plaindrome
//T -- Mirrored palindrome