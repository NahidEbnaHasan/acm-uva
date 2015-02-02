
//programmer: Imam Ibn Hasan
//compiler: Visual Studio 2012

#include<iostream>
#include<new>
using namespace std;

int main(){
	int n,minCh;
	int *intgs;
	while (cin>>n){
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
		cout<<"Minimum exchange operations : "<<minCh<<endl;
		delete []intgs;
	}
	return 0;
}