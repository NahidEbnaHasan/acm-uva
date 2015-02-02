#include<iostream>
#include<ctime>
int main()
{
	int j=0;
	long int n;
	long int i;
	int mark=0;
	time_t starttime,endtime;
	time(&starttime);
	for(i=800000000;;i++)
	{
		n=i;
		do
		{
			if(n==1)
			{
				mark=1;
			}
			else if(n%2==0)
			{
				n=n/2;
				mark=1;
			}
			else if(n%3==0)
			{
				n=n/3;
				mark=1;
			}
			else if(n%5==0)
			{
				n=n/5;
				mark=1;
			}
			else
			{
				mark=0;
				break;
			}
		}while(n>1);
		if(mark==1)
		{
			std::cout<<i<<std::endl;
			j++;
		}
		if(j==15)
			break;
	}
	std::cout<<"The 1500'th ugly number is "<<i<<"."<<std::endl;
	time(&endtime);
	std::cout<<"Time: "<<difftime(endtime,starttime)<<std::endl;
	return 0;
}