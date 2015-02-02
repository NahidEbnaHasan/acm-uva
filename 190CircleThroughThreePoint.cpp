#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

char SignOf(double n){
	if(n>0.000){
		return '+';
	}else{
		return '-';
	}
}

int main(){
	freopen("in.txt","r+",stdin);
	char soG,soF,soC;
	double x1,x2,x3;
	double y1,y2,y3;
	double a1,a2,a3;
	double b1,b2,b3;
	double c1,c2,c3;
	double d1,d2,d3;
	double D,Dx,Dy,Dz;
	double g,f,c,r;
	bool newLine=false;
	while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)==6){
		//if(newLine)printf("\n");
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
		/*if(c>0){
			r=((g*g)+(f*f))-c;
			r=sqrt(r);
		}else{
			r=((g*g)+(f*f))+c;
			r=sqrt(r);
		}*/
		r=((g*g)+(f*f))-c;
		r=sqrt(r);
		//cout<<g<<" "<<f<<" "<<c<<" "<<r<<endl;
		soG=SignOf(g);
		soF=SignOf(f);
		soC=SignOf(c);
		if(g<0.000){
			g=g*(-1.000);
		}
		if(f<0.000){
			f=f*(-1.000);
		}
		if(c<0.000){
			c=c*(-1.000);
		}
		printf("(x %c %0.3lf)^2 + (y %c %0.3lf)^2 = %0.3lf^2\n",soG,g,soF,f,r);
		printf("x^2 + y^2 %c %0.3lfx %c %0.3lfy %c %0.3lf = 0\n",soG,(g*2.000),soF,(f*2.000),soC,c);
		//newLine=true;
		printf("\n");
	}
}