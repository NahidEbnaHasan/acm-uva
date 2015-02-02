#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	string s;
	/*int digits[10][7]={{1,1,1,1,1,1,0},
					   {0,1,1,0,0,0,0},
					   {1,1,0,1,1,0,1},
					   {1,1,1,1,0,0,1},
					   {0,1,1,0,0,1,1},
					   {1,0,1,1,0,1,1},
					   {1,0,1,1,1,1,1},
					   {1,1,1,0,0,0,0},
					   {1,1,1,1,1,1,1},
					   {1,1,1,1,0,1,1}};*/
	int zero[7]={1,1,1,1,1,1,0};
	int one[7]={0,1,1,0,0,0,0};
	int two[7]={1,1,0,1,1,0,1};
	int three[7]={1,1,1,1,0,0,1};
	int four[7]={0,1,1,0,0,1,1};
	int five[7]={1,0,1,1,0,1,1};
	int six[7]={1,0,1,1,1,1,1};
	int seven[7]={1,1,1,0,0,0,0};
	int eight[7]={1,1,1,1,1,1,1};
	int nine[7]={1,1,1,1,0,1,1};

	while(cin>>n>>s){
		if(n==0){
			break;
		}else{
			int digitLen=s.size();
			int horizLen=(n+2)*digitLen+(digitLen-1);
			int vertiLen=2*n+3;

			for(int i=0;i<vertiLen;i++){
				for(int j=0;j<horizLen;j++){
					if((i==0 && j==0) || (i==0 && j==(horizLen-1)) || (i==(vertiLen-1) && j==0) || (i==(vertiLen-1) && j==(horizLen-1))){
						cout<<" ";
					}else{
						cout<<"-";
					}
				}
				cout<<endl;
			}
		}
	}
	return 0;
}