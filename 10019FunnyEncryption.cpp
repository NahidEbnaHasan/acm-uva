#include<iostream>
#include<math.h>
using namespace std;

int ToBin(int num);
int HexToDec(int num);

int c1sDec,c1sHex;
int main(){
	int t,dec,hex;
	cin>>t;
	while(t--){
		cin>>dec;
		hex=dec;
		c1sDec=ToBin(dec);
		c1sHex=ToBin(HexToDec(hex));
		cout<<c1sDec<<" "<<c1sHex<<endl;
	}
	return 0;
}

int  ToBin(int num){
	int count=0;
	while(num>0){
		if(num%2==1){
			count++;
		}
		num/=2;
	}
	return count;
}

int HexToDec(int num){
	int i=0,deci=0;
	while(num>=1){
		deci+=num%10*pow(16,i++);
		num/=10;
	}
	return deci;
}