
#include <iostream>

unsigned long long int C(int n,int m)
{
	int i = 0;
	if(m==n-1 || m==1)
		return n;
	if(m>n/2)
		m = n-m;
	unsigned long long int res = 1;
	unsigned int den = m;
	while(i++<m)
	{
		res*=n;
		n--;
		while(den>1 && res % den==0)
		{
			res/=den;
			den--;
		}
	}
	return res;
}
int main()
{
	int n,m;
	while(std::cin>>n>>m){
		if(n==0 && m==0)
			return 0;
		else
			std::cout<<n<<" things taken "<<m<<" at a time is "<<C(n,m)<<" exactly."<<std::endl;
	}
}
