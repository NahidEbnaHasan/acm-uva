#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
	freopen("in.txt","r+",stdin);
	int t,c,r,maxR,relPrio[11];
	string s,wPages[11];
	scanf("%i",&t);
	for(int loop=0;loop<t;loop++){
		maxR=0;
		c=0;
		for(int i=0;i<10;i++){
			cin>>s>>r;
			wPages[i]=s;
			if(r>maxR){
				memset(relPrio,0,sizeof(relPrio));
				c=1;
				relPrio[c-1]=i;
				maxR=r;
			}else if(r==maxR){
				relPrio[c++]=i;
			}
		}
		printf("Case #%i:\n",loop+1);
		for(int j=0;j<c;j++){
			//printf("%s\n",wPages[relPrio[j]]);
			cout<<wPages[relPrio[j]]<<endl;
		}
	}
}