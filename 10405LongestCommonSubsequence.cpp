#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
#define MAX 1001

//char X[MAX1],Y[MAX1]; //Z[MAX1]={NULL};
string s1,s2;
int i,j,m,n,c[MAX][MAX],b[MAX][MAX];

int LCSLength(int m,int n){
	for(i=1;i<=m;i++)
		c[i][0]=0;
	for(j=0;j<=n;j++)
		c[0][j]=0;

	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(s1[i-1]==s2[j-1]){
				c[i][j]=c[i-1][j-1]+1;
				b[i][j]=1;
			}else if(c[i-1][j]>=c[i][j-1]){
				c[i][j]=c[i-1][j];
				b[i][j]=2;
			}else{
				c[i][j]=c[i][j-1];
				b[i][j]=3;
			}
		}
	}
	return c[m][n];
}
/*void storeLCS(int i,int j){
	if(i==0 || j==0)
		return;
	if(b[i][j]==1){
		storeLCS(i-1,j-1);
		cout<<X[i-1];
		Z[k++]=X[i-1];
	}else if(b[i][j]==2){
		storeLCS(i-1,j);
	}else{
		storeLCS(i,j-1);
	}
}*/
int main(){
	while(getline(cin,s1)){
		getline(cin,s2);
		m=s1.length();
		n=s2.length();
		cout<<LCSLength(m,n)<<endl;
	}
	return 0;
}