#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main(){
	//freopen("in.txt","r+",stdin);
	int n;
	bool flag[10]={false};
	string s;
	while(cin>>n){
		if(n==0){
			return 0;
		}
		getchar();
		getline(cin,s);
		if(s=="too high"){
			for(int i=(n-1);i<10;i++){
				flag[i]=true;
			}
		}else if(s=="too low"){
			for(int i=0;i<n;i++){
				flag[i]=true;
			}
		}else{
			if(flag[n-1]){
				cout<<"Stan is dishonest"<<endl;
			}else{
				cout<<"Stan may be honest"<<endl;
			}
			for(int i=0;i<10;i++){
				flag[i]=false;
			}
		}
	}
}