#include<iostream>
using namespace std;

int Square(int n){
	return n*n;
}

int main(){
	int t,n,n1;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		int sum=0,finalSum,temp;
		n1=n;
		do{
			while(n1>0){
				temp=n1%10;
				sum+=Square(temp);
				n1/=10;
			}
			n1=sum;
			finalSum=sum;
			sum=0;
		}while(finalSum>9);

		if(finalSum==1){
			cout<<"Case #"<<i+1<<": "<<n<<" is a Happy number."<<endl;
		}else{
			cout<<"Case #"<<i+1<<": "<<n<<" is an Unhappy number."<<endl;
		}
	}
	return 0;
}