#include<stdio.h>
#include<limits.h>

int main(){
	freopen("in2.txt","r+",stdin);
	int t;
	int x1,y1,x2,y2,x3,y3,x4,y4;
	double x,y,c1,c2,m1,m2;
	printf("INTERSECTING LINES OUTPUT\n");
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		if(x2-x1==0){
			m1=LONG_MIN;
			c1=x1;
		}else{
			m1=(double) (y2-y1)/(x2-x1);
			c1=(double) (y1-(m1*x1));
		}
		if(x4-x3==0){
			m2=LONG_MIN;
			c2=x3;
		}else{
			//m1=(double) (y2-y1)/(x2-x1);
			m2=(double) (y4-y3)/(x4-x3);
			//c1=(double) y1-(m1*x1);
			c2=(double) (y3-(m2*x3));
		}
		if(m1==m2){
			if(c1==c2){
				printf("LINE\n");
			}else{
				printf("NONE\n");
			}
		}else{
			if(x2-x1==0 && x4-x3!=0){
				x=x1;
				y=(double) (m2*x)+c2;
				printf("POINT %0.2lf %0.2lf\n",x,y);
			}else if(x2-x1!=0 && x4-x3==0){
				x=x3;
				y=(double) (m1*x)+c1;
				printf("POINT %0.2lf %0.2lf\n",x,y);
			}else{
				x=(double) (c2-c1)/(m1-m2);
				y=(double) (m1*x)+c1;
				printf("POINT %0.2lf %0.2lf\n",x,y);
			}
		}
	}
	printf("END OF OUTPUT\n");
}

/*
critical input
14
0 0 4 4 0 4 4 0
5 0 7 6 1 0 2 3
5 0 7 6 3 -6 4 -3
2 0 2 27 1 5 18 5
0 3 4 0 1 2 2 5
0 0 1 1 0 0 1 1
4 0 6 0 1 2 6 9
1 0 5 0 8 5 4 5
1 0 5 0 5 0 1 0
0 1 0 5 0 5 0 1
2 0 2 27 2 0 2 27
2 0 2 27 3 0 3 27
2 0 2 27 0 1 0 5
2 0 2 27 1 5 18 5
*/