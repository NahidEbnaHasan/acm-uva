#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	freopen("in.txt","r+",stdin);
	int n,len1,len2;
	char s1[25],s2[25],vowl[5]={'a','e','i','o','u'};
	bool ok;
	//scanf("%i",&n);
	scanf_s("%i",&n);
	//n*=2;
	while(n--){
		scanf("%s",s1);
		scanf("%s",s2);
		len1=strlen(s1);
		len2=strlen(s2);
		ok=false;
		if(len1==len2){
			for(int i=0;i<len1;i++){
				if(s1[i]!=s2[i]){
					int a=0,b=0;
					for(int j=0;j<5;j++){
						if(s1[i]==vowl[j]){
							a=1;
							break;
						}
					}
					for(int j=0;j<5;j++){
						if(s2[i]==vowl[j]){
							b=1;
							break;
						}
					}
					if((a==0 && b==0) || a!=b){
						ok=false;
						break;
					}else{
						ok=true;
						//continue;
					}
				}else{
					ok=true;
				}
			}
		}
		if(ok){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
}