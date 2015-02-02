#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
//#include<map>
using namespace std;

int fibTab[200]={0};
void GenFibTable(){
	fibTab[0]=1;
	fibTab[1]=2;
	for(int i=2;i<45;i++){
		fibTab[i]=fibTab[i-2]+fibTab[i-1];
	}
}

int main(){
	freopen("test.txt","r+",stdin);
	//freopen("out.txt","r+",stdout);
	GenFibTable();
	string s;
	//map<int,int> fibPos;
	bool fibFound;
	char outStr[110];
	int c,t,n,maxPos,fibs[110];
	scanf("%d",&t);
	while(t--){
		memset(outStr,NULL,sizeof(outStr));
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&fibs[i]);
		}
		getchar();
		getline(cin,s);

		c=0;
		maxPos=0;
		for(int i=0;i<n;){
			fibFound=false;
			if(s[c]>='A' && s[c]<='Z'){
				for(int j=0;j<45;j++){
					if(fibs[i]==fibTab[j]){
						outStr[j]=s[c];
						maxPos=max(maxPos,j);
						fibFound=true;
						i++;
						break;
					}
				}
				if(!fibFound){
					i++;
				}
			}else{
				c++;
			}
			if(fibFound){
				c++;
			}
		}
		if(maxPos==0 && outStr[0]==NULL){
			printf("\n");
		}else{
			for(int i=0;i<maxPos+1;i++){
				if(outStr[i]!=NULL){
					//outStr[i]=' ';
					printf("%c",outStr[i]);
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
}