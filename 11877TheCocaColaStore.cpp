#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	//freopen("in.txt","r",stdin);
	int emptBotle,fulBotle,tmp;
	while(scanf("%d",&emptBotle)==1 &&emptBotle){
		fulBotle=0;
		while(emptBotle!=1){
			tmp=emptBotle/3;
			fulBotle+=tmp;
			emptBotle=emptBotle%3;
			emptBotle+=tmp;
			if(emptBotle==2){
				fulBotle++;
				break;
			}
		}
		printf("%d\n",fulBotle);
	}
}