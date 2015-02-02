#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

//#define PI 3.1415926535897932384626433832795
//#define PI 3.1416

int main(){
	//double test = sin(30/2);
	freopen("10221.in","r",stdin);
	freopen("10221.out","w",stdout);
	const double PI = acos(-1);
	double s, a;
	double angle, arcDis, chordDis;
	char angleType[10];
	while (scanf("%lf %lf ", &s, &a) == 2){
		//getchar();
		gets(angleType);
		if(a > 180.0) a = 360 - a;
		if(angleType[0] == 'm'){
			angle = (a/60.0) * (PI/180.0);
		}else{
			angle = a * (PI/180.0);
		}
		arcDis = (6440.0 + s) * angle;
		chordDis = 2.0 * (6440.0 + s) * sin(angle/2);
		printf("%.6lf %.6lf\n", arcDis, chordDis);
	}
}