#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
	freopen("in.txt","r+",stdin);
	int t,d1,d2,m1,m2,y1,y2,d3,m3,y3;
	string date1,date2;
	cin>>t;
	cin.get();
	for(int loop=0;loop<t;loop++){
		cin>>date1;
		cin>>date2;

		d1=atoi(date1.substr(0,2).c_str());
		m1=atoi(date1.substr(3,4).c_str());
		y1=atoi(date1.substr(6,date1.length()).c_str());

		d2=atoi(date2.substr(0,2).c_str());
		m2=atoi(date2.substr(3,4).c_str());
		y2=atoi(date2.substr(6,date2.length()).c_str());

		if(d1<d2){
			d1+=30;
			d3=d1-d2;
			m2++;
		}else{
			d3=d1-d2;
		}

		if(m1<m2){
			m1+=12;
			m3=m1-m2;
			y2++;
		}else{
			m3=m1-m2;
		}

		y3=y1-y2;

		if(y3<0){
			cout<<"Case #"<<loop+1<<": Invalid birth date"<<endl;
		}else if(y3>130){
			cout<<"Case #"<<loop+1<<": Check birth date"<<endl;
		}else{
			cout<<"Case #"<<loop+1<<": "<<y3<<endl;
		}
	}
}