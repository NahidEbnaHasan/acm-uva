#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	int t;
	int l,w,h;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d %d",&l,&w,&h);
		if(l<=20 && w<=20 && h<=20){
			printf("Case %d: good\n",i+1);
		}else{
			printf("Case %d: bad\n",i+1);
		}
	}
	return 0;
}