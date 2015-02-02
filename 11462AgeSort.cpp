#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int age[200000];
	long int n,i;

	while(cin>>n){
		if(n==0){
			break;
		}else{
			for(i=0;i<n;i++){
				cin>>age[i];
			}
			sort(age,age+n);
			for(i=0;i<n;i++){
				if(i==(n-1)){
					cout<<age[i]<<endl;
				}else{
					cout<<age[i]<<" ";
				}
			}
		}
	}
	return 0;
}