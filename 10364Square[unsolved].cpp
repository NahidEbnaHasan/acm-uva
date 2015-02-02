#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("in.txt","r+",stdin);
	int t,nOfStik,stikLen,tmp;
	cin>>t;
	while(t--){
		cin>>nOfStik;
		stikLen=0;
		while(nOfStik--){
			cin>>tmp;
			stikLen+=tmp;
		}
		if(stikLen%4==0){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}

/*
8
2 2 2
4 1 1 1 1
5 10 20 30 40 50
6 5 3 8 5 3 8
6 1 1 1 1 1 3
8 1 7 2 6 4 4 3 5
9 1 7 2 2 6 3 5 4 2
5 0 0 0 0 0
*/