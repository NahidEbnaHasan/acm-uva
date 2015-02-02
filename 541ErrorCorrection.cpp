//Imam Ibn Hasan
//3.3.2013
#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int n,ERowCount,EColCount,posR,posC;
	int matrix[100][100]={NULL};
	//int rowSum[100]={NULL},colSum[100]={NULL};
	while(cin>>n){
		if(n==0)
			return 0;

		int rowSum[100]={NULL},colSum[100]={NULL};
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>matrix[i][j];
				rowSum[i]+=matrix[i][j];
				colSum[j]+=matrix[i][j];
			}
		}

		ERowCount=0;
		EColCount=0;

		for(int i=0;i<n;i++){
			//cout<<rowSum[i]<<" "<<colSum[i]<<endl;
			if(rowSum[i]%2!=0){
				ERowCount++;
				if(ERowCount>1)
					break;
				posR=i;
			}
			if(colSum[i]%2!=0){
				EColCount++;
				if(EColCount>1)
					break;
				posC=i;
			}
		}
		if(ERowCount==0 && EColCount==0){
			cout<<"OK"<<endl;
		}else if(ERowCount==1 && EColCount==1){
			cout<<"Change bit ("<<posR+1<<","<<posC+1<<")"<<endl;
		}else if(ERowCount>1 || EColCount>1){
			cout<<"Corrupt"<<endl;
		}
	}
}