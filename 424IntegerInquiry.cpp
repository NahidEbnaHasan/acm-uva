//integer inquiry acm problem 424
//prorammer: Imam Ibn Hasan
//compiler: visual c++ v 9.0
//date: 21-11-2011 3.28 am

#include<iostream>
#include<string>
using namespace std;

#define max 100

int main(){
	int i=0,j,k;
	int len,maxlen=0;
	int temp=0,temp1=0,temp2=0;
	string s;
	int a[max][max],b[max];
	for(int x=0;x<max;x++){
		for(int y=0;y<max;y++){	
			a[x][y]=0;
		}
	}
	cin>>s;
	while(s!="0"){
		len=s.size();
		if(len>maxlen)
			maxlen=len;
		for(j=0;j<len;j++){
			a[i][j]=s[len-(j+1)]-48;
		}
		i++;
		cin>>s;
	}
	for(k=0;k<maxlen;k++){
		for(int l=0;l<i;l++){
			temp=temp+a[l][k];
		}
		temp=temp+temp2;
		if(k==maxlen-1){
			while(temp>=10){
				temp1=temp%10;
				b[k]=temp1;
				k++;
				temp=temp/10;
			}
			b[k]=temp;
		}
		else if(temp>=10){
			temp1=temp%10;
			temp2=temp/10;
			b[k]=temp1;
		}else{
			temp1=temp;
			temp2=0;
			b[k]=temp1;
		}
		temp=0;
	}
	for(int m=k-1;m>=0;m--){		
		cout<<b[m];
	}
	cout<<endl;
	return 0;
}