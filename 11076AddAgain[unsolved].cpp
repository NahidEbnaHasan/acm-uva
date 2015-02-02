#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
using namespace std;

long long StringToNumber(int len,int s[15]){
	long long num=0;
	for(int i=0;i<len;i++){
		if(i==0){
			num=s[i];
		}else{
			num=(num*10)+s[i];
		}
	}
	return num;
}

/*int main(){
	freopen("in2.txt","r",stdin);
	int i;
	int n,m,sLen,d[15];
	long long sum;
	while(scanf("%d",&n)==1 && n){
		for(i=0;i<n;i++){
			scanf("%d",&d[i]);
		}
		sum=0;
		sort(d,d+n);
		sum+=StringToNumber(n,d);
		while(next_permutation(d,d+n)){
			sum+=StringToNumber(n,d);
		}
		printf("%d\n",sum);
	}
	return 0;
}*/

int main(){
	freopen("in2.txt","r",stdin);
	int i,n,m;
	char d[15];
	while(scanf("%d",&n)==1 && n){
		for(i=0;i<n;i++){
			scanf("%d",&m);
			d[i]=m+48;
		}
		d[i++]=NULL;
		sort(d,d+n);
		i=0;
		do{
			printf("%d %s\n",i++,d);
		}while(next_permutation(d,d+n));
	}
}