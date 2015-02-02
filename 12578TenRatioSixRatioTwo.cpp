//#include<iostream>
#include<stdio.h>
#include<math.h>
//using namespace std;

#define Pi acos(-1.0)

int main(){
	int t;
	double length,width,radius;
	double redArea,greenArea;
	//cin>>t;
	scanf("%i",&t);
	while(t--){
		//cin>>length;
		scanf ("%lf",&length);
		width=(length*6)/10;
		radius=length/5;
		redArea=Pi*radius*radius;
		greenArea=(length*width)-redArea;
		//cout.precision(2);
		//cout<<fixed<<redArea<<" "<<fixed<<greenArea<<endl;
		printf ("%.2lf %.2lf\n",redArea,greenArea);
	}
	return 0;
}
