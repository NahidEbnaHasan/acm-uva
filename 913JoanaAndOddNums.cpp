#include<iostream>
using namespace std;

int main(){
	long long n;
	unsigned long long lastNum,sum;
	while(cin>>n){
		sum=0;
		n=(n+1)/2; //calculating the num of line
		//n=n*(n+1)-n; //calculating the num of num in that line
		lastNum=2*(n*(n+1)-n)-1; //calculating the last num of that line
		cout<<lastNum+(lastNum-2)+(lastNum-4)<<endl;
		//cout<<sum<<endl;
	}
	return 0;
}