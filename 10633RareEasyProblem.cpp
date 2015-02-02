#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("10633.in","r",stdin);
	freopen("10633.out","w",stdout);
	unsigned long long n,x;
	while(scanf("%lld",&n)==1)
	{
		if(n==0)break;
		x=(n*10)/9;
		if(n%9==0)
			printf("%lld %lld\n",x-1,x);
		else
			printf("%lld\n",x); 
	}
}
/*
Input:
1000000000000000000

Output:
1111111111111111111
*/