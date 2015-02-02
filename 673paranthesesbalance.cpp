/*
paranthesis balance acm 673
programmer: imam ibn hasan
compiler: visual studio version 9.0
date: 31-10-2011
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int t,tos;
	char c,s[200],stack[200];
	scanf("%d",&t);
	getchar();
	while(t--){
		gets(s);
		tos=0;
		stack[tos]=NULL;
		for(int i=0;i<strlen(s);i++){
		
			if(s[i]=='('||s[i]=='['){		
				stack[tos++]=s[i];
				stack[tos]=NULL;
			}else if(s[0]==')'||s[0]==']'||stack[0]==')'||stack[0]==']'){
				stack[0]=')';
				break;
			}else if(s[i]==')'){
				if(stack[0]==NULL){
					stack[0]=')';
					continue;
				}
				c=stack[--tos];
				if(c=='('){
					stack[tos]=NULL;
					continue;
				}else if(c=='['){
					break;
				}else{
					continue;
				}
			}else if(s[i]==']'){
				if(stack[0]==NULL){
					stack[0]=']';
					continue;
				}
				c=stack[--tos];
				if(c=='['){
					stack[tos]=NULL;
					continue;
				}else if(c=='('){
					break;
				}else{
					continue;
				}
			}else{
				continue;
			}
		}
		if(stack[0]==NULL){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}