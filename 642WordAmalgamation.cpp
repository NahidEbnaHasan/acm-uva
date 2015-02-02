#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<list>
using namespace std;

bool IsMatched(string s1,string s2){
	int len1,len2;
	bool f;
	len1=s1.length();
	len2=s2.length();
	if(len1==len2){
		//sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		if(s1==s2){
			return true;
		}else{
			return false;
		}
	}else{
		return false;
	}
}

int main(){
	freopen("in2.txt","r",stdin);
	int cx=0;
	string scWrd,dict[101];
	list<string> wordList;
	while(cin>>scWrd && scWrd!="XXXXXX"){
		dict[cx++]=scWrd;
	}
	while(cin>>scWrd && scWrd!="XXXXXX"){
		sort(scWrd.begin(),scWrd.end());
		for(int i=0;i<cx;i++){
			if(IsMatched(scWrd,dict[i])){
				wordList.push_back(dict[i]);
			}
		}
		if(wordList.empty()){
			cout<<"NOT A VALID WORD"<<endl;
		}else{
			wordList.sort();
			while(!wordList.empty()){
				cout<<wordList.front()<<endl;
				wordList.pop_front();
			}
		}
		cout<<"******"<<endl;
	}
}