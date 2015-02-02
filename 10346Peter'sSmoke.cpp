//peter's smoke acm 10346
//programmer: imam ibn hasan
//compiler: vidual studio v 9.0

#include<iostream>
using namespace std;

int main(){
	long n,k,max;

	while(cin>>n>>k){
		max=0;
		long n1=0,m=0,o,p;
		if(n<k){
			cout<<n<<endl;
		}
		else if(n==k||k>n/2){
			cout<<n+1<<endl;
		}else{
			p=n;
			do{
				n1=p/k;
				m=p%k;
				o=n1+m;
				max=n+n1;
				n=max;
				p=o;
			}while(o>=k);
 			cout<<max<<endl;
		}
	}
	return 0;
}