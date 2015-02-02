#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<map>
using namespace std;

int main(){
	freopen("11233.in","r",stdin);
	int reg,que,len;
	char in[30],cpy1[30],cpy2[30],*token;
	map<string,string> regular;
	scanf("%d %d",&reg,&que);
	getchar();
	while(reg--){
		gets(in);
		token=strtok(in,"\t ");
		strcpy(cpy1,token);
		token=strtok(NULL,"\t ");
		strcpy(cpy2,token);
		regular[cpy1]=cpy2;
	}
	memset(in,NULL,sizeof(in));
	while(que--){
		gets(in);
		if(regular.find(in)!=regular.end()){
			cout<<regular[in]<<endl;
		}else{
			len=strlen(in);
			if(in[len-1]=='y'){
				if(in[len-2]!='a' && in[len-2]!='e' && in[len-2]!='i' && in[len-2]!='o' && in[len-2]!='u'){
					in[len-1]=NULL;
					printf("%sies\n",in);
				}else{
					printf("%ss\n",in);
				}
			}else if(in[len-1]=='h'){
				if(in[len-2]=='c' || in[len-2]=='s'){
					in[len]='e';
					in[len+1]='s';
					in[len+2]=NULL;
					printf("%s\n",in);
				}else{
					in[len]='s';
					in[len+1]=NULL;
					printf("%s\n",in);
				}
			}else if(in[len-1]=='o' || in[len-1]=='s' || in[len-1]=='x'){
				printf("%ses\n",in);
			}else{
				in[len]='s';
				in[len+1]=NULL;
				printf("%s\n",in);
			}
		}
	}
	return 0;
}