#include<iostream>
using namespace std;

int main(){
	int t;
	int length,width,radius;
	int left,right,up,low;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>radius;
		length=radius*5;
		width=(length*6)/10;
		left=length*(0.45);
		right=length*(0.55);
		up=width/2;
		low=width/2;
		cout<<"Case "<<i+1<<":"<<endl;
		//left upper corner
		cout<<(0-left)<<" "<<(0+up)<<endl;
		//right upper corner
		cout<<(0+right)<<" "<<(0+up)<<endl;
		//right lower corner
		cout<<(0+right)<<" "<<(0-low)<<endl;
		//left lower corner
		cout<<(0-left)<<" "<<(0-low)<<endl;
	}
	return 0;
}