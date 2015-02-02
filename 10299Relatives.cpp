//NUMBER THEORY EULER TOTIENT FUNCTION FOR FINDING RELATIVELY PRIME NUMBERS
//http://community.topcoder.com/tc?module=Static&d1=tutorials&d2=primeNumbers

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<map>
#include<vector>
using namespace std;

int main(){
	freopen("10299.in","r",stdin);
	freopen("10299.out","w",stdout);
	int i,j,k;
	int n,m,root;
	double fi;
	while(scanf("%d",&n)==1 && n){
		if(n==1){
			printf("0\n");
		}else{
			map<int,int> factor;
			m=n;
			root=sqrt(n);
			fi=n;
			for(i=2;i<=root;i++){
				while(n%i==0){
					factor[i]++;
					n/=i;
				}
			}
			if(n>1) factor[n]++;
			for(map<int,int>::iterator itr=factor.begin();itr!=factor.end();itr++){
				fi*=(1-(1/(double)itr->first));
			}
			printf("%d\n",(int)fi);
		}
	}
	return 0;
}