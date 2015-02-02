//programmer: Imam Ibn Hasan
//1.29.2013

#include<iostream>
using namespace std;

int main(){
	int h1,m1,h2,m2;
	while (cin>>h1>>m1>>h2>>m2){
		if(h1==0 && m1==0 && h2==0 && m2==0){
			break;
		}else{
			if(h1<h2){
				cout<<((h2*60)+m2)-((h1*60)+m1)<<endl;
			}else if(h1>h2){
				cout<<((h2*60)+m2)+((24*60)-((h1*60)+m1))<<endl;
			}else{
				if(m1>m2){
					cout<<(24*60)-(m1-m2)<<endl;
				}else{
					cout<<m2-m1<<endl;
				}
			}
		}
	}
	return 0;
}