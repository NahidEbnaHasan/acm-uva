//lol :D  funny problem,coz no need to worry about calculating gcd or lcm :p
//programmer: Imam Ibn Hasan
//date:6.1.2013
//compiler: vs 2012

#include<iostream>
using namespace std;

int main(){
	int t;
	long g,d;
	cin>>t;
	while(t--){
		cin>>g>>d;
		if(d%g!=0){
			cout<<"-1"<<endl;
		}else{
			cout<<g<<" "<<d<<endl;
		}
	}
	return 0;
}