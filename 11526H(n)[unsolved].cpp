#include<iostream>
#include<math.h>
#include<limits>
using namespace std;

/*unsigned long H(unsigned long n){
	unsigned long i,res=0;
	if(n%2==0){
		for(i=1;n/i>=3;i++){
			res+=n/i;
		}
		res=res+(((n/2)-(i-1))*2); 
		res=res+(n/2);
	}else{
		for(i=1;n/i>=3;i++){
			res+=n/i;
		}
		res=res+(((n/2)-(i-1))*2);
		res=res+(n/2)+1;
	}
	return res;
}

typedef long long ll;
ll H(ll n){
	ll i,sum=0,half=n/2,temp;
	if(half%2==0){
		for(i=1;i<=half/2;i++){
			//sum+=n/i;
			if(i==half/2){
				sum+=n/i;
			}else{
				sum+=n/i;
				temp=half-i;
				sum+=n/temp;
			}
		}
	}else{
	for(i=1;i<=half/2;i++){
		sum+=n/i;
		temp=half-i;
		sum+=n/temp;
	}
	}
	if(n%2==0){
		sum+=n/2;
	}else{
		sum+=(n/2)+1;
	}
	return sum+2;
}
int main(){
	//cout<<sizeof(int)<<endl;
	//cout<<numeric_limits<unsigned long long>::max()<<endl;
	ll n;
	while(cin>>n){
		cout<<H(n)<<endl;
	}
	return 0;
}
*/

#include <cmath>
#include <cstdio>

int main(void){
	int t; scanf("%d", &t);
	for(int n; t-- && scanf("%d", &n) == 1; ){
		long long s = 0;
		if(n > 0){
			int L = floor(sqrt(n));
			for(int i = 1, q, pq = n; i <= L; ++i){
				q = n / i;
				s += q + (pq - q) * (i - 1);
				pq = q;
			}
			if(n / L > L) s += L;
		}
		printf("%lld\n", s);
	}
	return 0;
}

