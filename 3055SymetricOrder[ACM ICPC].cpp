#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	int n,cxP1,cxP2,set=1;
	char s[100],pair1[100][100],pair2[100][100];
	while(scanf("%d",&n)==1 && n){
		cxP1=0;
		cxP2=0;
		for(int i=0;i<n;i++){
			if((i+1)%2!=0){
				scanf("%s",&pair1[cxP1++]);
				//cxP1++;
			}else{
				scanf("%s",&pair2[cxP2++]);
				//cxP2++;
			}
		}
		printf("SET %d\n",set++);
		for(int i=0;i<cxP1;i++){
			printf("%s\n",pair1[i]);
		}
		for(int i=cxP2-1;i>=0;i--){
			printf("%s\n",pair2[i]);
		}
	}
}