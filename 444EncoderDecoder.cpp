#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

int main(){
	freopen("444in.txt","r",stdin);
	int i,j,k;
	int len,num;
	char input[1005];
	char digit2[3],digit3[4];
	while(gets(input)){
		len=strlen(input);
		for(i=len-1;i>=0;){
			if(input[i]>='0' && input[i]<='9'){
				if(input[i]=='1'){
					for(j=0;j<3;j++){
						digit3[j]=input[i--];
					}
					digit3[3]='\0';
					//cout<<atoi(digit3)-48;
					printf("%c",atoi(digit3));
				}else{
					digit2[0]=input[i--];
					digit2[1]=input[i--];
					digit2[2]='\0';
					//cout<<(char)atoi(digit2);
					printf("%c",atoi(digit2));
				}
			}else{
				num=input[i--];
				while(num>0){
					//cout<<num%10;
					printf("%d",num%10);
					num/=10;
				}
			}
		}
		//cout<<endl;
		printf("\n");
	}
	return 0;
}