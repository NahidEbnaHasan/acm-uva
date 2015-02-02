#include<iostream>
#include<math.h>
using namespace std;

bool primeFlag[1010];
int primes[175];

void Sieve(int L, int U){
	int i,j,k;
	//primeFlag=new bool[U];
	memset(primeFlag,true,sizeof(primeFlag));
	for(i=0;i<=sqrt(U);i++){
		if(primeFlag[i]){
			if(i==0){
				primeFlag[i]=false;
			}else if(i==1){
				continue;
			}else{
				k=0;
				for(j=(i*i);j<U;j=(i*i)+k*i){
					if(!primeFlag[j]){
						k++;
						continue;
					}else{
						primeFlag[j]=false;
					}
					k++;
				}
			}
		}
	}
	j=0;
	for(int i=0;i<1010;i++){
		if(primeFlag[i]){
			primes[j++]=i;
		}
	}
}

int main(){
	Sieve(0,1010);
	int n,c,nofPrime,pos1,pos2;
	while(cin>>n>>c){
		nofPrime=0;
		for(int i=0;primes[i]<=n;i++){
			nofPrime++;
		}
		if(nofPrime%2==0){
			c=c*2;
			int tempPos=(nofPrime/2)-1;
			pos1=tempPos-((c/2)-1);
			if(pos1<0){
				pos1=0;
				pos2=nofPrime;
			}else{
				pos2=pos1+c;
			}
			cout<<n<<" "<<c/2<<": ";
			for(int i=pos1;i<pos2;i++){
				if(i==pos2-1){
					cout<<primes[i]<<endl<<endl;
				}else{
					cout<<primes[i]<<" ";
				}
			}
		}else{
			c=(c*2)-1;
			int tempPos=(nofPrime/2);
			pos1=tempPos-(c/2);
			if(pos1<0){
				pos1=0;
				pos2=nofPrime;
			}else{
				pos2=pos1+c;
			}
			cout<<n<<" "<<(c/2)+1<<": ";
			for(int i=pos1;i<pos2;i++){
				if(i==pos2-1){
					cout<<primes[i]<<endl<<endl;
				}else{
					cout<<primes[i]<<" ";
				}
			}
		}
	}
	return 0;
}