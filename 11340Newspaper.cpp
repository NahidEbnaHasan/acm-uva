#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
using namespace std;

int main(){
	freopen("11340.txt","r",stdin);
	int i,j,k;
	int t,noCHars,val,noLines,len,total;
	char ch,lines[10010];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&noCHars);
		getchar();
		map<char,int> m;
		for(i=0;i<noCHars;i++){
			scanf("%c %d",&ch,&val);
			m[ch]=val;
			getchar();
		}
		scanf("%d",&noLines);
		getchar();
		total=0;
		for(i=0;i<noLines;i++){
			gets(lines);
			len=strlen(lines);
			for(j=0;j<len;j++){
				if(m.find(lines[j])!=m.end()){
					total+=m[lines[j]];
				}
			}
		}
		//cout<<total<<endl;
		printf("%.2f$\n",(double)(total/100.00));
	}
}