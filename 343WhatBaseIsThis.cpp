#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<map>
using namespace std;


int main(){
	freopen("in2.txt","r",stdin);
	bool f,found;
	int i,j,k,l;
	int len1,len2;
	map<char,int> alpha;
	for(int i=0;i<26;i++){
		alpha['A'+i]=10+i;
	}
	char s1[20],s2[20];
	unsigned long long num1,num2,p;
	while(scanf("%s",&s1)==1){
		scanf("%s",&s2);
		len1=strlen(s1);
		len2=strlen(s2);
		for(i=2;i<37;i++){
			num1=0;
			p=len1-1;
			f=true;
			found=false;
			for(k=0;k<len1;k++){
				if(s1[k]>='A' && s1[k]<='Z'){
					if(alpha[s1[k]]>=i){
						f=false;
						break;
					}
				}else if(s1[k]-48>=i){
					f=false;
					break;
				}
			}
			if(f){
				for(k=0;k<len1;k++){
					if(s1[k]>='A' && s1[k]<='Z'){
						num1+=alpha[s1[k]]*pow(i,p--);
					}else{
						num1+=(s1[k]-48)*pow(i,p--);
					}
				}
				for(j=2;j<37;j++){
					num2=0;
					p=len2-1;
					f=true;
					for(k=0;k<len2;k++){
						if(s2[k]>='A' && s2[k]<='Z'){
							if(alpha[s2[k]]>=j){
								f=false;
								break;
							}
						}else if(s2[k]-48>=j){
							f=false;
							break;
						}
					}
					if(f){
						for(k=0;k<len2;k++){
							if(s2[k]>='A' && s2[k]<='Z'){
								num2+=alpha[s2[k]]*pow(j,p--);
							}else{
								num2+=(s2[k]-48)*pow(j,p--);
							}
						}
						if(num2==num1){
							found=true;
							printf("%s (base %d) = %s (base %d)\n",s1,i,s2,j);
							break;
						}
					}
				}
			}
			if(found)break;
		}
		if(!found){
			printf("%s is not equal to %s in any base 2..36\n",s1,s2);
		}
	}
}