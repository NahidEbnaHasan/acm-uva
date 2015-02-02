#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;// n stands for no. of pages
	int m;
	char blank[]="Blank";
	
	while(scanf("%i",&n)==1&&n!=0)
	{
		
			printf("Printing order for %i pages:\n",n);

			n%4==0?m=n/4:m=(n/4)+1; //m stands for sheet number.

			int top=m*4;
			int top3=top;
			int bottom=1;
			for(int i=0;i<m;i++)
			{
				int top2=top-1;

				if(top>n)
				{
					//top=0;
					printf("Sheet %i, front: %s, %i\n",i+1,blank,bottom);
				}
				else
				{
					top=top;
					printf("Sheet %i, front: %i, %i\n",i+1,top,bottom);
				}

				if(top2>n&&n==1)
				{
					//top2=0;
					//printf("sheet %i, back : %s, %s\n",i+1,blank,blank);    // if page is greater than input n then filled up with Blank 
				}
				else if(top2>n)
				{
					//top2=0;
					printf("Sheet %i, back : %i, %s\n",i+1,++bottom,blank);
				}
				else
				{
					top2=top2;
					printf("Sheet %i, back : %i, %i\n",i+1,++bottom,top2);
				}

				bottom++;
				top3-=2;
				top=top3;
			}
		
	}

	return 0;
}