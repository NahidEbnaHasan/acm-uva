
//programmer: Imam Ibn Hasan
//compiler: Visual Studio 2012
//Date:2.1.2013


#include<iostream>
using namespace std;

int main(){
	int t,test;
	float c,d,incC;
	cin>>t;
	test = t;
	while (t--){
		cin>>c>>d;
		incC = (d*5)/9;
		c+=incC;
		cout<<"Case "<<(test-t)<<": ";
		cout.precision(2);
		cout<<fixed<<c<<endl;
	}
	return 0;
}