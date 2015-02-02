#include<iostream>
using namespace std;

int GCD(int i,int j){
	while(j>0){
		i=i%j;
		i^=j;
		j^=i;
		i^=j;
	}
	return i;
}
int FindG(int n){
	int G=0;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			G+=GCD(i,j);
		}
	}
	return G;
}

int main(){
	int n;
	while(cin>>n){
		if(n==0){
			return 0;
		}else{
			cout<<FindG(n)<<endl;
		}
	}
}