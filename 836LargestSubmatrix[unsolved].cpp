#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void printMatrix(char mat[25][25],int len){
	for(int l=0;l<len;l++){
		for(int m=0;m<len;m++){
			cout<<mat[l][m];
		}
		cout<<endl;
	}
}

int AreaLargestSubMatrix(char mat[25][25],int len){
	int maxArea=0,rectArea=0,width=0,height=0;
	int arr[3];
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			if(mat[i][j]=='0'){
				if(i!=0){

				}
			}else{
				width++;
			}
		}
	}
}

int main(){
	int t,len,i,k;
	string s;
	char matrix[25][25];
	cin>>t;
	while(t--){
		i=0;
		cin>>s;
		len=s.length();
		k=len;
		while(k>1){
			for(int j=0;j<len;j++){
				matrix[i][j]=s[j];
			}
			i++;
			k--;
			cin>>s;
		}
		for(int j=0;j<len;j++){
			matrix[i][j]=s[j];
		}
		//printMatrix(matrix,len);
		AreaLargestSubMatrix(matrix,len);
	}
}