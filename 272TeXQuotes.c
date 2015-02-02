//acm TeX Quotes 272
//programmer: Imam Ibn Hasan
//compiler visual c v 9
//5-14-2012 7.21 pm

#include<stdio.h>
#include<string.h>

int main(){
	char s[500000];
	int i,count=0;

	while(gets(s)){
		for(i=0;s[i]!='\0';i++){
			if(s[i]=='"'&& count%2==0){
				printf("``");
				count++;
				continue;
			}else if(s[i]=='"'&& count%2!=0){
				printf("''");
				count++;
				continue;
			}else{
				putchar(s[i]);
			}
		}
		printf("\n");
	}
	return 0;
}