//Imam Ibn Hasan
//1.30.2013

#include<iostream>
using namespace std;

int main(){
	int i=1;
	long long a,lim,terms;
	while(cin>>a>>lim){
		if(a==-1 && lim==-1){
			break;
		}else{
			terms=0;
			long long n=a;
			while(n<=lim){
				if(n==1){
					terms++;
					break;
				}else{
					if(n%2==0){
						n=n/2;
					}else{
						n=3*n+1;
					}
					terms++;
				}
			}
		}
		cout<<"Case "<<i++<<": "<<"A = "<<a<<", "<<"limit = "<<lim<<", "<<"number of terms = "<<terms<<endl;
	}
}