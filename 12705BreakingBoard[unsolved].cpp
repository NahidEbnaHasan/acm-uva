#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<map>
using namespace std;

int main(){
	freopen("12705.txt","r",stdin);
	int i,j,cx,sum;
	int t,pos[]={2,3,3,4,4,4,5,5,5,5,6,6,6,6,6,7,7,7,7,7,7,8,8,8,8,8,9,9,9,9,10,10,10,11,11,12};
	char s[110],chars[40];
	int charCx[40];
	bool f;
	scanf("%d",&t);
	getchar();
	while(t--){
		gets(s);
		memset(charCx,0,sizeof(charCx));
		cx=0;
		sum=0;
		for(i=0;s[i]!=NULL;i++){
			if(s[i]!=' '){
				f=false;
				for(j=0;j<cx;j++){
					if(s[i]==chars[j]){
						charCx[j]++;
						f=true;
						break;
					}
				}
				if(!f){
					chars[cx]=s[i];
					charCx[cx]++;
					cx++;
				}
			}
		}
		sort(charCx,charCx+cx);
		for(i=cx-1,j=0;i>=0;i--,j++){
			sum+=(charCx[i]*pos[j]);
		}

		printf("%d\n",sum);
	}
}