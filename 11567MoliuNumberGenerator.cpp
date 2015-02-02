//#include<iostream>
//#include<cmath>
#include<cstdio>
//using namespace std;

int main(){
	freopen("in.txt","r+",stdin);
	long long s,a,b;
	while(scanf("%lld",&s)==1){
		int i=0;
		while(s>0){
			if(s%2==0){
				s/=2;
			}else{
				a=(s+1)/2;
				b=(s-1)/2;
				if(b==1){
					s-=1;
				}else if(a%2==0){
					s+=1;
				}else{
					s-=1;
				}
			}
			i++;
		}
		printf("%i\n",i);
	}
	return 0;
}