#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;


int main(){
	freopen("12641in.txt","r",stdin);
	int t;
	int i,len,cx;
	bool f;
	char input1[200],input2[200],copy[200],*token,dict[500][100],dictSorted[500][100];
	cin>>t;
	getchar();
	while(t--){
		gets(input1);
		token=strtok(input1," ");
		cx=0;
		while(token){
			strcpy(dict[cx],token);
			strcpy(copy,token);
			sort(copy,copy+strlen(copy));
			strcpy(dictSorted[cx],copy);
			cx++;
			token=strtok(NULL," ");
		}
		gets(input2);
		token=strtok(input2," ");
		while(token){
			strcpy(copy,token);
			len=strlen(copy);
			sort(copy,copy+len);
			f=false;
			for(i=0;i<cx;i++){
				if(strcmp(dictSorted[i],copy)==0 && (token[0]==dict[i][0] && token[len-1]==dict[i][len-1])){
					cout<<dict[i];
					f=true;
					break;
				}
			}
			if(!f) cout<<token;
			token=strtok(NULL," ");
			if(token!=NULL){
				printf(" ");
			}else{
				printf("\n");
			}
		}
	}
	return 0;
}