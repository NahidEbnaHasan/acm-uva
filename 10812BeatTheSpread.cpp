//beat the spread acm 10812
//programmer: imam ibn hasan
//compiler: visual studio v 9.0
//date: 1-11-2011


#include<iostream>
using namespace std;

int main(){

	int test,sum,diff,x,y;
	cin>>test;
	while(test--){
		cin>>sum>>diff;
		if(sum>=diff && ((sum+diff)%2==0)){		
			x=(sum+diff)/2;
			y=x-diff;
			if(x>y){
				cout<<x<<" "<<y<<endl;
			}else{
				cout<<y<<" "<<x<<endl;
			}
		}else{
			cout<<"impossible"<<endl;
		}
	}
	return 0;
}