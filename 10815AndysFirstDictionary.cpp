#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<list>
#include<cctype>
using namespace std;

string MakeLowerCase(string s){
	int len=s.length();
	for(int i=0;i<len;i++){
		if(s[i]>='A' && s[i]<='Z'){
			s[i]=tolower(s[i]);
		}
	}
	return s;
}

int main(){
	freopen("in2.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	int beg,end,sLen;
	string s,s2;
	list<string> wordList;
	bool begFound,endFound;
	while(getline(cin,s)){
		beg=0;
		end=0;
		begFound=false;
		endFound=false;
		sLen=s.length();
		for(int i=0;i<sLen;i++){
			if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
				if(!begFound){
					begFound=true;
					beg=i;
				}
			}else{
				if(!endFound){
					endFound=true;
					end=i-beg;
				}
				if(begFound && endFound){
					s2=s.substr(beg,end);
					s2=MakeLowerCase(s2);
					wordList.push_back(s2);
					//cout<<s[i];
					begFound=false;
					endFound=false;
				}else{
					//cout<<s[i];
					//begFound=false;
					endFound=false;
				}
			}
		}
		if(!endFound){
			endFound=true;
			end=s.length()-beg;
		}
		if(begFound && endFound){
			s2=s.substr(beg,end);
			s2=MakeLowerCase(s2);
			wordList.push_back(s2);
			//cout<<s[i];
			begFound=false;
			endFound=false;
		}
		//cout<<endl;
	}
	wordList.sort();
	wordList.unique();
	while(!wordList.empty()){
		cout<<wordList.front()<<endl;
		wordList.pop_front();
	}
	return 0;
}