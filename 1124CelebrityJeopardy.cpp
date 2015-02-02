#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("1124.txt","r",stdin);
	char input[100000];
	while(gets(input) &&input[0]){
		printf("%s\n",input);
	}
	return 0;
}