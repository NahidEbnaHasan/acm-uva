#include<iostream>
using namespace std;

int main(){
	int n,hBricks[55],sumofH,sameH,minMove,j=0;

	while (cin>>n){
		if(n==0){
			break;
		}else{
			sumofH = 0;
			minMove = 0;
			for(int i=0;i<n;i++){
				cin>>hBricks[i];
				sumofH+=hBricks[i];
			}
			sameH = sumofH/n;
			for(int i=0;i<n;i++){
				if(hBricks[i]>sameH){
					minMove+=hBricks[i]-sameH;
				}
			}
			cout<<"Set #"<<j+1<<endl;
			cout<<"The minimum number of moves is "<<minMove<<"."<<endl<<endl;
			j++;
		}
	}
	return 0;
}