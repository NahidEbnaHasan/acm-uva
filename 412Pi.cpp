#include<iostream>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<algorithm>
using namespace std;

//int primes[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199};

/*bool commonFact(int x,int y){
	int root=ceil((double)sqrt(x));
	for(int i=0;primes[i]<=root;i++){
		if(x%primes[i]==0 && y%primes[i]==0){
			return true;
		}
	}
	return false;
}*/

int GCD(int a,int b){
	if(a%b==0) return b;
	else return GCD(b,a%b);
}

int main(){
	freopen("412.txt","r",stdin);
	int n,data[100];
	int i,j,k,cx,cx2;
	while(scanf("%d",&n)==1 && n){
		for(i=0;i<n;i++){
			scanf("%d",&data[i]);
		}
		sort(data,data+n);
		cx=0;
		cx2=0;
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				/*if(data[i]==1) cx++;
				else{
				if(data[j]%data[i]!=0 && !commonFact(data[i],data[j])){
					cx++;
				}
				}*/
				if(GCD(data[j],data[i])==1) cx++;
				cx2++;
			}
		}
		//cout<<cx<<" "<<cx2<<endl;
		if(!cx){
			//cout<<"No estimate for this data set.\n"<<endl;
			printf("No estimate for this data set.\n");
		}else{
			//cout<<sqrt((double)(6*cx2)/cx)<<endl;
			printf("%.6lf\n",sqrt((6.00*cx2)/cx));
		}
	}
}