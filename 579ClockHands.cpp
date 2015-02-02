//Problem: Uva 579
//Author: Nahid Ibn Hasan
//Compiler: Visual Studio v11
//Date: 3.13.2013

#include<iostream>
#include<string>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(){
	string s;
	double H,M,endH,endM;
	double ang1,ang2;
	char hour[2],min[2];
	while(cin>>s){
		if(s.size()==4){
			hour[0]='0';
			hour[1]=s[0];
			min[0]=s[2];
			min[1]=s[3];
		}else{
			hour[0]=s[0];
			hour[1]=s[1];
			min[0]=s[3];
			min[1]=s[4];
		}

		H=atof(hour);
		M=atof(min);

		if(H==0 && M==0)
			return 0;
		if(H==0){
			endH=0;
		}else{
			endH=12;
		}
		if(M==0){
			endM=0;
		}else{
			endM=60;
		}
		if((H*5)>=M){
			ang1=((H*30)+(M*.5))-(M*6);
			ang1=fabs(ang1);
			ang2=(((endH-H)*30)-(M*.5))+(M*6);
			ang2=fabs(ang2);
		}else{
			ang1=(M*6)-((H*30)+(M*.5));
			ang1=fabs(ang1);
			ang2=((H*30)+(M*.5))+((endM-M)*6);
			ang2=fabs(ang2);
		}
		if(ang1<ang2){
			cout.precision(3);
			cout<<fixed<<ang1<<endl;
		}else{
			cout.precision(3);
			cout<<fixed<<ang2<<endl;
		}
	}
}