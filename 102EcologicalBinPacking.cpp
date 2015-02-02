//programmer: Imam Ibn Hasan
//date: 12.1.2013
//compiler: Vs 2013

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	long int a,b,c,d,e,f,minMove;
	long int b1,g1,c1,b2,g2,c2,b3,g3,c3;
	long int B1,G1,C1,B2,G2,C2,B3,G3,C3;
	while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3){
		B1=b2+b3;
		B2=b1+b3;
		B3=b1+b2;

		G1=g2+g3;
		G2=g1+g3;
		G3=g1+g2;

		C1=c2+c3;
		C2=c1+c3;
		C3=c1+c2;

		a=B1+C2+G3;
		b=B1+G2+C3;
		c=C1+B2+G3;
		d=C1+G2+B3;
		e=G1+B2+C3;
		f=G1+C2+B3;

		long int num[6]={a,b,c,d,e,f};
		sort(num,num+6);
		minMove=num[0];

		if(minMove==a){
			cout<<"BCG "<<minMove<<endl;
		}else if(minMove==b){
			cout<<"BGC "<<minMove<<endl;
		}else if(minMove==c){
			cout<<"CBG "<<minMove<<endl;
		}else if(minMove==d){
			cout<<"CGB "<<minMove<<endl;
		}else if(minMove==e){
			cout<<"GBC "<<minMove<<endl;
		}else{
			cout<<"GCB "<<minMove<<endl;
		}
	}
	return 0;
}