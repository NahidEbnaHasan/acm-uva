#include<iostream>
#include<string>
using namespace std;

int main(){
	freopen("in.txt","r",stdin);
	int n,q;
	string s,slgnList[25];
	cin>>n;
	cin.get();
	n*=2;
	for(int i=0;i<n;i++){
		getline(cin,slgnList[i]);
	}
	cin>>q;
	cin.get();
	while(q--){
		getline(cin,s);
		for(int j=0;j<n;j++){
			if(slgnList[j]==s){
				cout<<slgnList[j+1]<<endl;
				break;
			}
		}
	}
	return 0;
}