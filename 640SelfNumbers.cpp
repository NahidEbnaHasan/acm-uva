#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	freopen("640out.txt","w",stdout);
	int i,n,m;
	bool selfNum[1000001];
	memset(selfNum,true,sizeof(selfNum));
	for(i=1;i<1000000;i++){
		n=i;
		m=i;
		while(n>0){
			m+=n%10;
			n/=10;
		}
		if(m>1000000) break;
		selfNum[m]=false;
	}

	for(i=1;i<1000001;i++){
		if(selfNum[i]){
			printf("%d\n",i);
		}
	}
}