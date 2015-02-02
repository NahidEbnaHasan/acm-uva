#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;


int main(){
	int t,sum;
	string s;
	int doubDgts[8]={0},unDblDgts[8]={0};
	cin>>t;
	getchar();
	while(t--){
		getline(cin,s);
		for(int i=0,j=0;i<s.size();){
			if(s[i]==' '){
				i++;
			}else{
				doubDgts[j]=(s[i]-48)*2;
				unDblDgts[j]=s[i+1]-48;
				j++;
				i+=2;
			}
		}
		sum=0;
		for(int i=0;i<8;i++){
			if(doubDgts[i]>9){
				int temp;
				temp=doubDgts[i]%9;
				if(temp==0){
					sum+=9;
				}else{
					sum+=temp;
				}
			}else{
				sum+=doubDgts[i];
			}
			sum+=unDblDgts[i];
		}
		if(sum%10==0){
			cout<<"Valid"<<endl;
		}else{
			cout<<"Invalid"<<endl;
		}
	}
}