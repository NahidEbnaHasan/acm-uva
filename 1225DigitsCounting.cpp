//Imam Ibn Hasan
//14.2.2013
#include<iostream>
using namespace std;

int main(){
	int t,n;
	int digits[10]={0,0,0,0,0,0,0,0,0,0};
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			if(i<=9){
				digits[i]+=1;
			}else{
				int j=i;
				while(j>0){
					digits[j%10]+=1;
					j/=10;
				}
			}
		}
		for(int i=0;i<10;i++){
			if(i!=9)
				cout<<digits[i]<<" ";
			else
				cout<<digits[i];
			digits[i]=0;
		}
		cout<<endl;
	}
	return 0;
}