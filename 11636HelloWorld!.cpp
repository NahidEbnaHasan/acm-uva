#include<iostream>
using namespace std;

int main(){
	int n;
	int i,j=1,cpyCmd;
	while(cin>>n){
		if(n<0){
			return 0;
		}else{
			i=1;
			cpyCmd=0;
			while(i<n){
				i*=2;
				cpyCmd++;
			}
			cout<<"Case "<<j++<<": "<<cpyCmd<<endl;
		}
	}
}