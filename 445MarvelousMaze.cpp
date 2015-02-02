#include<stdio.h>

int main(){
	freopen("in.txt","r+",stdin);
	freopen("out.txt","w+",stdout);
	char c;
	int f=0;
	while(scanf("%c",&c)==1){
		if(c=='\n' || c=='!'){
			printf("\n");
		}else if(c>='0' && c<='9'){
			f+=(c-48);
		}else{
			if(c=='b'){
				for(int i=0;i<f;i++){
					printf(" ");
				}
			}else{
				for(int i=0;i<f;i++){
					printf("%c",c);
				}
			}
			f=0;
		}
	}
	return 0;
}

//c++ solution

/*#include<iostream>
using namespace std;

int main(){
	freopen("in.txt","r+",stdin);
	char c;
	int f=0;
	while(cin.get(c)){
		if(c=='\n' || c=='!'){
			cout<<endl;
		}else if(c>='0' && c<='9'){
			f=f+(c-48);
		}else{
			if(c=='b'){
				for(int i=0;i<f;i++){
					cout<<" ";
				}
			}else if(c>='A' && c<='Z' || c=='*'){
				for(int i=0;i<f;i++){
					cout<<c;
				}
			}
			f=0;
		}
	}
	return 0;
}*/