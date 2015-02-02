#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

int GCD(int a,int b){
	if(a%b==0)
		return b;
	else
		return GCD(b,a%b);
}

int main(){
	freopen("in2.txt","r",stdin);
	int n,m[110],cx,maxGcd;
	char *ptr,line[100000];
	scanf("%d",&n);
	getchar();
	while(n--){
		cx=0;
		maxGcd=0;
		gets(line);
		ptr=strtok(line," ");
		while(ptr){
			m[cx++]=atoi(ptr);
			ptr=strtok(NULL," ");
		}
		for(int i=0;i<cx-1;i++){
			for(int j=0;j<cx;j++){
				if(i!=j){
					maxGcd=max(maxGcd,GCD(m[i],m[j]));
				}
			}
		}
		printf("%d\n",maxGcd);
	}
	return 0;
}


/*
critical input
1
10 20 30 40   
*/