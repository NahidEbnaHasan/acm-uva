#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<map>
using namespace std;

int len,cpyCx=0;
int i,j,k;
bool hyphen;
char in[1000],*token,cpy[1000];
char delims[]=" \t,':;?<>/0123456789~!@#$%^&*()_+=`{}[]|\\.\"";
map<string,int> dic;

void Strlwr(char *ch){
	for(int i=0;ch[i]!='\0';i++){
		if(ch[i]>='A'&& ch[i]<='Z'){
			ch[i]+=32;
		}
	}
}

void FUNC(int len){
	for(i=0;i<len;i++){
		cpy[cpyCx++]=token[i];
	}
}

int main(){
	freopen("11062in1.txt","r",stdin);
	freopen("11062out1.txt","w",stdout);
	//freopen("11062in2.txt","r",stdin);
	//freopen("11062out2.txt","w",stdout);
	hyphen=false;
	while(gets(in)){
		if(!in[0] && cpy[0]){
			dic[cpy]=0;
			cpyCx=0;
			memset(cpy,'\0',sizeof(cpy));
		}else{
		token=strtok(in,delims);
		while(token){
			Strlwr(token);
			len=strlen(token);
			if(token[len-1]=='-'){
				hyphen=true;
				FUNC(len-1);
			}else{
				if(hyphen){
					FUNC(len);
					dic[cpy]=0;
					cpyCx=0;
					memset(cpy,'\0',sizeof(cpy));
					hyphen=false;
				}else{
					dic[token]=0;
				}
			}
			token=strtok(NULL,delims);
		}
		}
	}
	if(cpy[0]) dic[cpy]=0;
	for(map<string,int>::iterator itr=dic.begin();itr!=dic.end();itr++){
		cout<<itr->first<<endl;
	}
}
