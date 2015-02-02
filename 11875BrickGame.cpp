#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

//int *sort(int noOfAges,int arr[50]);

int main(){
	int n,test;
	char s[50],s2[2];
	int age[50],captAge,len;
	cin>>test;
	cin.get();
	for(int i=0;i<test;i++){
		cin.getline(s,sizeof(s));
		n=s[0]-48;
		len=strlen(s);
		int l=0;
		for(int j=2;j<len+1;j++){
			int k=0;
			while(s[j]!=' '&& s[j]!='\t'&&s[j]!='\0'){
				s2[k]=s[j];
				k++;
				j++;
			}
			age[l]=atoi(s2);
			l++;
		}
		//sort(n,age);
		captAge=n/2;
		cout<<"Case "<<i+1<<": "<<age[captAge]<<endl;
	}
	return 0;
}

/*int *sort(int noOfAges,int arr[50]){
	int i,j,key;
	for(j=1;j<noOfAges;j++){
		key=arr[j];
		i=j-1;
		while(i>=0&&arr[i]>key){
			arr[i+1]=arr[i];
			i=i-1;
		}
		arr[i+1]=key;
	}
	return arr;
}*/