
#include <iostream>

unsigned long long int C(int n,int k)
{
	int i = 0;
	if(k==n-1 || k==1)
		return n;
	if(k>n/2)
		k = n-k;
	unsigned long long int res = 1;
	unsigned int den = k;
	while(i++<k)
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
	int n,k;
	while(std::cin>>n>>k){
		if(n==0 && k==0)
			return 0;
		else
			std::cout<<C(n,k)<<std::endl;
	}
}
