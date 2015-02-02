#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<map>
using namespace std;


int main(){
	freopen("in2.txt","r",stdin);
	bool f;
	int b1,b2,i,j,k,l,cx,cx2,n;
	int len;
	map<char,int> alpha,numb;
	for(i=0;i<6;i++){
		alpha['A'+i]=10+i;
		numb[10+i]='A'+i;
	}
	char s1[20],s2[100],s3[100];
	unsigned long long deci,p;
	while(scanf("%d",&b1)==1){
		scanf("%d",&b2);
		scanf("%s",&s1);
		len=strlen(s1);
		deci=0;
		p=len-1;
		f=true;
		for(j=0;j<len;j++){
			if(s1[j]>='A' && s1[j]<='Z'){
				if(alpha[s1[j]]>=b1){
					f=false;
					break;
				}
			}else if(s1[j]-48>=b1){
				f=false;
				break;
			}
		}
		if(!f){
			printf("%s is an illegal base %d number\n",s1,b1);
		}else{
			for(k=0;k<len;k++){
				if(s1[k]>='A' && s1[k]<='Z'){
					deci+=alpha[s1[k]]*pow(b1,p--);
				}else{
					deci+=(s1[k]-48)*pow(b1,p--);
				}
			}
			if(deci==0){
				s3[0]='0';
				s3[1]=NULL;
				printf("%s base %d = %s base %d\n",s1,b1,s3,b2);
			}else{
				cx=0;
				while(deci>0){
					n=deci%b2;
					if(n>=10 && n<=15){
						s2[cx++]=numb[n];
					}else{
						s2[cx++]=n+48;
					}
					deci=deci/b2;
				}
				cx2=0;
				for(int l=cx-1;l>=0;l--){
					s3[cx2++]=s2[l];
				}
				s3[cx2++]=NULL;
				printf("%s base %d = %s base %d\n",s1,b1,s3,b2);
			}
		}
	}
	return 0;
}