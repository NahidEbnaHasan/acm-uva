#include<iostream>
#include<cstdio>
#include<string>
#include<cctype>
using namespace std;

void MakePigLatin(string s){
	if(s[0]=='A' || s[0]=='a'){
		s.append("ay");
	}else if(s[0]=='E' || s[0]=='e'){
		s.append("ay");
	}else if(s[0]=='I' || s[0]=='i'){
		s.append("ay");
	}else if(s[0]=='O' || s[0]=='o'){
		s.append("ay");
	}else if(s[0]=='U' || s[0]=='u'){
		s.append("ay");
	}else{
		s+=s[0];
		s=s.substr(1,s.length());
		s.append("ay");
	}
	cout<<s;
}

int main(){
	freopen("in2.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	int beg,end;
	string s,s2;
	bool begFound,endFound;
	while(getline(cin,s)){
		beg=0;
		end=0;
		begFound=false;
		endFound=false;
		for(int i=0;i<s.length();i++){
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
					MakePigLatin(s2);
					cout<<s[i];
					begFound=false;
					endFound=false;
				}else{
					cout<<s[i];
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
			MakePigLatin(s2);
			//cout<<s[i];
			begFound=false;
			endFound=false;
		}
		cout<<endl;
	}
	return 0;
}

/*
critical input sets
  JK. .ua.........
beep Beep Bloo-Fs Uu-nB
beep Beep Uu-nB blooo**
beep Beep Uu-aB blooo**_
beep Beep Uu-pp blooo**
hello world
beep Beep Uu-pp blooo**
*/