#include<iostream>
#include<cstdio>
#include<string.h>
#include<cstring>
#include<map>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;

void Strlwr(char *ch){
	for(int i=0;ch[i]!='\0';i++){
		if(ch[i]>='A'&& ch[i]<='Z'){
			ch[i]+=32;
		}
	}
}

int main(){
	freopen("156in.txt","r",stdin);
	int len,cx;
	char input[100],*token,*copy;
	//map<char[30],int> anagrams;
	//map<char[30],char[30]> relAnagrams;
	stringstream ss;
	vector<string> v3;
	char v[1010][30],v2[1010][30],v4[30];
	cx=0;
	copy=(char *) malloc(30*sizeof(char));
	while(gets(input) && input[0]!='#'){
		token=strtok(input," \t");
		while(token){
			len=strlen(token);
			strcpy(copy,token);
			//copy=(strlwr(token));
			Strlwr(copy);
			sort(copy,copy+len);
			//v.push_back(token);
			strcpy(v[cx],token);
			//token=strtok(NULL," \t");
			//v2.push_back(copy);
			strcpy(v2[cx],copy);
			token=strtok(NULL," \t");
			cx++;
		}
		//input[0]='\0';
	}
	bool f;
	for(int i=0;i<cx;i++){
		f=false;
		if(v2[i]!=""){
		for(int j=0;j<cx;j++){
			if(i!=j && v2[j]!=""){
				if(strcmp(v2[i],v2[j])==0){
					strcpy(v[i],"");
					strcpy(v[j],"");
					f=true;
					break;
				}
			}
		}
		}
		if(!f){
			v3.push_back(v[i]);
			strcpy(v2[i],"");
		}
	}
	sort(v3.begin(),v3.end());
	for(vector<string>::iterator i=v3.begin();i!=v3.end();i++){
		cout<<*i<<endl;
	}
}


/*
std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}


std::vector<std::string> split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, elems);
    return elems;
}

std::vector<std::string> x = split("one:two::three", ':');
*/