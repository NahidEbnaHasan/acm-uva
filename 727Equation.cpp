#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<stack>
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	stack<char> stc;
	bool newLine=false;
	int tCase,cx,cxE1,cxE2,cxT;
	char c,exp[1000],exp2[1000],tmp[100];
	scanf("%d",&tCase);
	getchar();
	cx=0;
	while(tCase--){
		if(newLine)printf("\n");
		if(cx++==0){
			getchar();
		}
		cxE2=0;
		memset(exp2,NULL,sizeof(exp2));
		exp2[cxE2++]='(';
		while(scanf("%c",&c)==1 && c!='\n'){
			getchar();
			exp2[cxE2++]=c;
		}
		exp2[cxE2++]=')';
		cxE2=0;
		cxE1=0;
		do{
			//getchar();
			if(exp2[cxE2]=='('){
				stc.push(exp2[cxE2]);
				cxE2++;
			}else if(exp2[cxE2]=='+' || exp2[cxE2]=='-'){
				while(stc.top()!='('){
					exp[cxE1++]=stc.top();
					stc.pop();
				}
				stc.push(exp2[cxE2]);
				cxE2++;
			}else if(exp2[cxE2]=='*' || exp2[cxE2]=='/'){
				cxT=0;
				while(stc.top()!='('){
					if(stc.top()=='*' || stc.top()=='/'){
						exp[cxE1++]=stc.top();
						stc.pop();
					}else{
						tmp[cxT++]=stc.top();
						stc.pop();
					}
				}
				for(int i=cxT-1;i>=0;i--){
					stc.push(tmp[i]);
				}
				stc.push(exp2[cxE2]);
				cxE2++;
			}else if(exp2[cxE2]==')'){
				while(stc.top()!='('){
					exp[cxE1++]=stc.top();
					stc.pop();
				}
				stc.pop();
				cxE2++;
			}else{
				exp[cxE1++]=exp2[cxE2];
				cxE2++;
			}
		}while(!stc.empty());
		for(int i=0;i<cxE1;i++){
			printf("%c",exp[i]);
		}
		printf("\n");
		newLine=true;
	}
	return 0;
}