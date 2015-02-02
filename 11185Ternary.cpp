//Imam Ibn Hasan
//14.2.2013
#include<iostream>
#include<stack>
using namespace std;

int main(){
	int decNum;
	stack<int> ter;
	while(cin>>decNum){
		if(decNum<0){
			return 0;
		}else if(decNum==0){
			cout<<"0";
		}else{
			while(decNum>0){
				ter.push(decNum%3);
				decNum=decNum/3;
			}
			while(!ter.empty()){
				cout<<ter.top();
				ter.pop();
			}
		}
		cout<<endl;
	}
}