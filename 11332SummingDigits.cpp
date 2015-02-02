#include<iostream>
using namespace std;

int main(){
	freopen("in.txt","r++",stdin);
	int n;
	while(cin>>n && n){
		n%=9;
		if(n<9){
			if(n==0){
				cout<<"9"<<endl;
			}else{
				cout<<n<<endl;
			}
		}else{
			cout<<"9"<<endl;
		}
	}
	return 0;
}