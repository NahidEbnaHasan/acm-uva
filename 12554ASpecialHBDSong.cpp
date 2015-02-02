#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main(){
	freopen("12554.txt","r",stdin);
	int n,m;
	int i,j,k;
	char people[110][110];
	char song[][10]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",people[i]);
	}
	if(n%16==0){
		m=n/16;
	}else{
		m=(n/16)+1;
	}
	k=0;
	for(i=0;i<m;i++){
		for(j=0;j<16;j++){
			if(k==n){
				k=0;
			}
			printf("%s: %s\n",people[k],song[j]);
			k++;
		}
	}
	return 0;
}