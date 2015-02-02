//programmer: Imam Ibn Hasan
//compiler: Visual Studio 2012

#include<iostream>
#include<new>
using namespace std;

int main(){
	int t,n,minCh;
	int *intgs;
	cin>>t;
	while (t--){
		cin>>n;
		intgs = new int[n];
		minCh=0;
		for(int i=0;i<n;i++){
			cin>>intgs[i];
		}
		for(int i=0;i<n-1;i++){
			for(int j=i;j<n-1;j++){
				if(intgs[i]>intgs[j+1]){
					minCh++;
				}
			}
		}
		cout<<"Optimal train swapping takes "<<minCh<<" swaps."<<endl;
		delete []intgs;
	}
	return 0;
}