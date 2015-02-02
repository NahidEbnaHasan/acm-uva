#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

int CheckOne(char* s){
	int wl=0;
	char one[]={"one"};
	for(int i=0;i<3;i++){
		if(one[i]!=s[i]){
			wl++;
		}
	}
	return wl;
}

/*int CheckTwo(char* s){
	int wl=0;
	char two[]={"two"};
	for(int i=0;i<3;i++){
		if(two[i]!=s[i]){
			wl++;
		}
	}
	return wl;
}*/

int main(){
	freopen("in.txt","r+",stdin);
	int t,len,wlfOne,wlfTwo;
	scanf("%d",&t);
	while(t--){
		char s[6]={NULL};
		scanf("%s",&s);
		len=strlen(s);
		if(len==5){
			printf("3\n");
		}else{
			wlfOne=CheckOne(s);
			//wlfTwo=CheckTwo(s);
			if(wlfOne==1 || wlfOne==0){
				printf("1\n");
			}else{
				printf("2\n");
			}
		}
	}
	return 0;
}