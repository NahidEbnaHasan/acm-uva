#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	//freopen("in.txt","r+",stdin);
	int n,sum;
	cout<<"PERFECTION OUTPUT"<<endl;
	while(cin>>n){
		if(n==0){
			cout<<"END OF OUTPUT"<<endl;
			return 0;
		}else if(n==1){
			cout<<setw(5)<<n<<"  DEFICIENT"<<endl;
		}else{
			sum=1;
			for(int i=2;i<(n/2)+1;i++){
				if(n%i==0){
					sum+=i;
				}
			}
			if(sum==n){
				cout<<setw(5)<<n<<"  PERFECT"<<endl;
			}else if(sum>n){
				cout<<setw(5)<<n<<"  ABUNDANT"<<endl;
			}else{
				cout<<setw(5)<<n<<"  DEFICIENT"<<endl;
			}
		}
	}
}