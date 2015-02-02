//acm problem 11639 guard the land
//programmer: Imam Ibn Hasan
//compiler: visual c++ version 9.0
//date: 20-11-2011 3.32 am

#include<iostream>
using namespace std;

#define max 100
int main(){
	int n;
	int p1,p2,p3,p4,p5,p6,p7,p8;
	int land[max][max];
	int strongSec,weakSec;
	cin>>n;
	for(int a=0;a<n;a++){
		strongSec=0;
		weakSec=0;
		for(int i=0;i<max;i++){
			for(int j=0;j<max;j++){
				land[i][j]=0;
			}
		}
		cin>>p1>>p2>>p3>>p4;
		cin>>p5>>p6>>p7>>p8;
		for(int x1=p1-1;x1<p3-1;x1++){
			for(int y1=p2-1;y1<p4-1;y1++){
				land[x1][y1]=1;
				weakSec=weakSec+1;
			}
		}
		for(int x2=p5-1;x2<p7-1;x2++){
			for(int y2=p6-1;y2<p8-1;y2++){
				if(land[x2][y2]==0){
					land[x2][y2]=1;
					weakSec=weakSec+1;
				}else{
					land[x2][y2]=2;
					strongSec=strongSec+1;
				}
			}
		}
		/*for(int i=0;i<max;i++){
			for(int j=0;j<max;j++){
				cout<<land[i][j];
			}
			cout<<endl;
		}*/
		cout<<"Night "<<a+1<<": "<<strongSec<<" "<<weakSec-strongSec<<" "<<10000-weakSec<<endl;
	}
	return 0;
}