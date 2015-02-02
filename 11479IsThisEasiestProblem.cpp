#include<iostream>
using namespace std;

int main(){
	int t;
	long long a,b,c;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a>>b>>c;
		if(a==0 && b==0 && c==0){
			cout<<"Case "<<i+1<<": Invalid"<<endl;
		}else if(a+b<=c || b+c<=a || c+a<=b){
			cout<<"Case "<<i+1<<": Invalid"<<endl;
		}else if(a==b && b==c){
			cout<<"Case "<<i+1<<": Equilateral"<<endl;
		}else if(a==b || b==c || c==a){
			cout<<"Case "<<i+1<<": Isosceles"<<endl;
		}else{
			cout<<"Case "<<i+1<<": Scalene"<<endl;
		}
	}
	return 0;
}