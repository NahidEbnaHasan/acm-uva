#include<stdio.h>

int f91(int N);

int main()
{
	int N;
	while(scanf("%d",&N)==1)
	{
		if(N==0)
		{
			break;
		}
		printf("f91(%d) = %d\n",N,f91(N));
	}
	return 0;
}

int f91(int N)
{
	if(N<=100)
	{
		return f91(f91(N+11));
	}
	else
	{
		return N-10;
	}
}