#include<iostream>
#include<cmath>
using namespace std;

long long firstPrime[100000]={0};
long long secPrime[100000]={0};

void Sieve(long long L,long long U){
	long long i,j,k,count;
	//long long primes[500000]={0};
	bool *flag=new bool[U];
	memset(flag,true,sizeof(flag));
	for(i=0;i<sqrt(U);i++){
		if(!flag[i]){
			continue;
		}else if(i==0 || i==1){
			flag[i]=false;
		}else{
			k=0;
			for(j=(i*i);j<U;j=(i*i)+k*i){
				if(!flag[j]){
					k++;
					continue;
				}else{
					flag[j]=false;
				}
				k++;
			}
		}
	}
	count=0;
	long long temp1=3,temp2;
	for(i=5;count<100000;i+=2){
		if(flag[i]){
			temp2=i;
			if(temp2-temp1==2){
				firstPrime[count]=temp1;
				secPrime[count]=temp2;
				count++;
				temp1=temp2;
			}else{
				temp1=temp2;
			}
		}
	}
}

int main(){
	freopen("10394.in","r",stdin);
	freopen("10394.out","w",stdout);
	long long n;
	Sieve(0,20000000);
	while(cin>>n){
		cout<<"("<<firstPrime[n-1]<<", "<<secPrime[n-1]<<")"<<endl;
	}
	return 0;
}