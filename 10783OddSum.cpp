
#include<iostream>
using namespace std;


int main(){

	int test;
	int sum;
	int initNum,endNum;

	while(cin>>test){
	
		for(int i=0;i<test;i++){
			cin>>initNum;
			cin>>endNum;
			sum=0;
			for(int i=initNum;i<=endNum;i++){
			
				if(i%2!=0)
					sum=sum+i;
			}
			cout<<"Case "<<i+1<<": "<<sum<<endl;
		}
	}
	return 0;
}