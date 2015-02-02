#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<map>
#include<vector>
using namespace std;

int main(){
	freopen("11064.txt","r",stdin);
	freopen("11064out.txt","w",stdout);
	int i,j,k;
	int n,m,root,divsr;
	double fi;
	while(scanf("%d",&n)==1){
		map<int,int> factor;
		m=n;
		root=sqrt(n);
		divsr=1;
		fi=n;
		for(i=2;i<=root;i++){
			while(n%i==0){
				factor[i]++;
				n/=i;
			}
		}
		if(n>1) factor[n]++;
		for(map<int,int>::iterator itr=factor.begin();itr!=factor.end();itr++){
			divsr*=(itr->second+1);
			fi*=(1-(1/(double)itr->first));
		}
		printf("%d\n",m-(int)fi-divsr+1);
	}
	return 0;
}