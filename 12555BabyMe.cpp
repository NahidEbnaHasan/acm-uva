#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>
using namespace std;

int main(){
	freopen("in2.txt","r+",stdin);
	int t,a,b,len;
	char s[10];
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		b=0;
		scanf("%d",&a);
		scanf("%s",&s);
		len=strlen(s);
		for(int i=0;i<len;i++){
			if(isdigit(s[i])){
				b=s[i]-48;
				break;
			}
		}
		printf("Case %d: %g\n",i,a*0.5+b*0.05);
		//cout<<"Case "<<i<<": "<<a*0.5+b*0.05<<endl;
	}
	return 0;
}