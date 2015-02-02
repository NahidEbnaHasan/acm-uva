#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;

int main(){
	freopen("11988.txt","r",stdin);
	int i,j,k,cx,vIndx,vLen;
	int len;
	char in[100005];
	bool f;
	while(gets(in) && in[0]){
		vector<char> v[100005]; // 
		len=strlen(in);
		cx=0;
		vIndx=0;
		f=false;
		for(i=0;i<len;i++){
			if(in[i]=='['){
				in[i]=' ';
				if(v[vIndx].size()>0){
					vIndx++;
				}
				f=true;
			}else if(in[i]==']'){
				in[i]=' ';
				f=false;
			}else{
				if(f){
					v[vIndx].push_back(in[i]);
					in[i]=' ';
				}
			}
		}
		for(i=vIndx;i>=0;i--){
			vLen=v[i].size();
			for(j=0;j<vLen;j++){
				//cout<<v[i][j];
				printf("%c",v[i][j]);
			}
		}
		for(i=0;i<len;i++){
			if(in[i]!=' '){
				printf("%c",in[i]);
			}
		}
		printf("\n");
	}
}