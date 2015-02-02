#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
#define pi 3.141592653589793

int main(){
	freopen("438.in","r",stdin);
	double x1,x2,x3;
	double y1,y2,y3;
	double a1,a2,a3;
	double b1,b2,b3;
	double c1,c2,c3;
	double d1,d2,d3;
	double D,Dx,Dy,Dz;
	double g,f,c,r,Cir;
	while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)==6){
		a1=2*x1;
		b1=2*y1;
		c1=1;
		a2=2*x2;
		b2=2*y2;
		c2=1;
		a3=2*x3;
		b3=2*y3;
		c3=1;
		d1=-((x1*x1)+(y1*y1));
		d2=-((x2*x2)+(y2*y2));
		d3=-((x3*x3)+(y3*y3));
		D=a1*((b2*c3)-(c2*b3))+b1*((c2*a3)-(a2*c3))+c1*((a2*b3)-(b2*a3));
		//find g
		Dx=d1*((b2*c3)-(c2*b3))+b1*((c2*d3)-(d2*c3))+c1*((d2*b3)-(b2*d3));
		g=Dx/D;
		//find f
		Dy=a1*((d2*c3)-(c2*d3))+d1*((c2*a3)-(a2*c3))+c1*((a2*d3)-(d2*a3));
		f=Dy/D;
		//find c
		Dz=a1*((b2*d3)-(d2*b3))+b1*((d2*a3)-(a2*d3))+d1*((a2*b3)-(b2*a3));
		c=Dz/D;

		r=((g*g)+(f*f))-c;
		r=sqrt(r);
		Cir=2*pi*r;
		printf("%.2lf\n",Cir);
	}
}