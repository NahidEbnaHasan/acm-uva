#include<iostream>
#include<stdio.h>
#include<math.h>
#include<map>
using namespace std;

#define MAX 8589934592
long long i,j,k,n,p,divSum,root;
map<long long,int> perfectNum;

void GEN_PERFECT_NUM(){
	perfectNum[6]=0;
	perfectNum[28]=0;
	perfectNum[496]=0;
	perfectNum[8128]=0;
	p=1;
	for(i=3;p<=MAX;i++){
		if(i%2!=0){
			p+=(i*i*i);
			divSum=1;
			root=sqrt(p);
			for(j=2;j<=root;j++){
				if(p%j==0){
					divSum+=(j+(p/j));
				}
			}
			if(divSum==p) perfectNum[p]=0;
		}
	}
	/*for(map<long long,int>::iterator itr=perfectNum.begin();itr!=perfectNum.end();itr++){
		cout<<itr->first<<endl;
	}*/
}
int main(){
	freopen("1180.txt","r",stdin);
	//freopen("1180out.txt","w",stdout);
	GEN_PERFECT_NUM();
	int test;
	scanf("%d",&test);
	while(test--){
		scanf("%lld",&n);
		n=pow(2,n-1)*(pow(2,n)-1);
		if(perfectNum.find(n)!=perfectNum.end()){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
		getchar();
	}
}
