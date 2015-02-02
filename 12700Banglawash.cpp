#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int main(){
	freopen("12700.txt","r",stdin);
	int i,j,k;
	int t,n,loop;
	char matches[15];
	scanf("%d",&t);
	for(loop=0;loop<t;loop++){
		map<char,int> m;
		scanf("%d",&n);
		getchar();
		gets(matches);
		for(i=0;i<n;i++){
			m[matches[i]]++;
		}
		printf("Case %d: ",loop+1);
		if(m['A']==n){
			printf("ABANDONED\n");
		}else if(m['B'] == m['W']){
			printf("DRAW %d %d\n",m['B'],m['T']);
		}else if(m['B']>0 && m['W']==0 && m['T']==0){
			printf("BANGLAWASH\n");
		}else if(m['W']>0 && m['B']==0 && m['T']==0){
			printf("WHITEWASH\n");
		}else if(m['B']>m['W']){
			printf("BANGLADESH %d - %d\n",m['B'],m['W']);
		}else if(m['B']<m['W']){
			printf("WWW %d - %d\n",m['W'],m['B']);
		}
	}
	return 0;
}