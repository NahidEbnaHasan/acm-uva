//3n+1 acm 100
//programmer: Imam Ibn Hasan
//compiler visual c++ v 9.0


#include<iostream>

using namespace std;
int main()
{
	long i,j;
	long a,b,c=1,n;

	while(cin>>a>>b)
	{
		i=a<b?a:b;
		j=a>b?a:b;
		long max=0;
		for(long k=j;k>=i;k--)
		{
			n=k;
			while(n>1)
			{
				n=(n%2==0)?n/2:3*n+1;
				c=c+1;
			}
			if(c>max)
			{
				max=c;
			}
			c=1;
		}
		cout<<a<<" "<<b<<" "<<max<<endl;
	}
	return 0;
}