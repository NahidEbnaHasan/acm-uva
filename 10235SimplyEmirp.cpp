#include<iostream>
#include<string>
#include<math.h>
#include<stdlib.h>
using namespace std;

void Sieve(int L,int U);
bool isPrime(int n);
int getNumber(string s);
int getRevNum(string s);


int primes[10000]={0};


int main(){
	string s;
	int num,revNum;
	Sieve(0,sqrt(1000000));
	while(cin>>s){
		num=getNumber(s);
		revNum=getRevNum(s);
		//cout<<"Int:"<<num<<endl;
		//cout<<"RevInt:"<<revNum<<endl;
		if(isPrime(num)){
			if(isPrime(revNum) && num!=revNum){
				cout<<num<<" is emirp."<<endl;
			}else{
				cout<<num<<" is prime."<<endl;
			}
		}else{
			cout<<num<<" is not prime."<<endl;
		}
	}
	return 0;
}

int getNumber(string s){
	int len=s.length();
	char *n=new char[len];
	for(int i=0;i<len;i++){
		n[i]=s[i];
	}
	return atoi(n);
}

int getRevNum(string s){
	int len=s.length();
	char *n=new char[len];
	for(int i=(len-1),j=0;i>=0;i--){
		n[j++]=s[i];
	}
	return atoi(n);
}

void Sieve(int L,int U){
	int i,j,k,count;
	//long long primes[500000]={0};
	bool *flag=new bool[U];

	for(i=0;i<U;i++){
		flag[i]=true;
	}
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
	for(i=0;i<U;i++){
		if(flag[i]){
			primes[count++]=i;
			//cout<<primes[count-1]<<endl;
		}
	}
}

bool isPrime(int n){
	if(n==2 || n==3){
		return true;
	}else{
		for(int i=0;i<(sqrt(n)-1) && primes[i]!=0;i++){
			if(n%primes[i]==0){
				return false;
			}
		}
	}
	return true;
}