#include<iostream>

using namespace std;

int main()
{
	int n,j;
	int count;
	int card[427];
	int card2[427];

	while(cin>>n)
	{
		count=0;
		if(n==0)
			break;
		for(int i=1;i<=n;i++)
		{
			card[i]=i;
		}
		int top=1;
		int end=n;
	
		j=0;
		cout<<"Discarded cards: ";
		while(n-count!=1)
		{
				if(top%2!=0)
				{
					card2[j]=card[top];
					cout<<card2[j];
					if(count<n-2)
					{
						cout<<", ";
					}
					count++;
					j++;
				}
				if(top%2==0)
				{
					end=end+1;
					card[end]=card[top];
				}
				top++;
				
				
		}
		cout<<endl<<"Remaining card: "<<card[end]<<endl;
	}
	return 0;
}
