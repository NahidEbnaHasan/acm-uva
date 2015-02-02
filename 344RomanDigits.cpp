#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<string>
using namespace std;

char roman[101][30]={"0","i","ii","iii","iv","v","vi","vii","viii","ix"};
map<int,string> MAP;

void BUILDROMAN(){
	MAP[1]="x";
	MAP[2]="xx";
	MAP[3]="xxx";
	MAP[4]="xl";
	MAP[5]="l";
	MAP[6]="lx";
	MAP[7]="lxx";
	MAP[8]="lxxx";
	MAP[9]="xc";
	MAP[10]="c";
	for(int i=10;i<101;i++){
		int a,b;
		a=i/10;
		b=i%10;
		strcpy(roman[i],MAP[a].c_str());
		if(b!=0){
			strcat(roman[i],roman[b]);
		}
	}
}

int main(){
	freopen("344.in","r",stdin);
	BUILDROMAN();
	int n;
	while(scanf("%d",&n)==1 && n){
		map<char,int> MAP2;
		for(int i=1;i<=n;i++){
			for(int j=0;roman[i][j]!='\0';j++){
				MAP2[roman[i][j]]++;
			}
		}
		printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,MAP2['i'],MAP2['v'],MAP2['x'],MAP2['l'],MAP2['c']);
	}
}