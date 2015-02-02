#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;

int main(){
	freopen("551.in","r",stdin);
	freopen("551.out","w",stdout);
	int i,j,cx;
	char in[3010];
	bool flag;
	while(scanf("%s",in)==1){
		cx=0;
		flag=true;
		stack<char> s;
		for(i=0;in[i]!='\0';i++){
			if(in[i]=='{' || in[i]=='[' || in[i]=='<'){
				s.push(in[i]);
				cx++;
			}else if(in[i]=='('){
				if(in[i+1]=='*'){
					s.push('(');
					s.push('*');
					i++;
					cx++;
				}else{
					s.push('(');
					cx++;
				}
			}else if(in[i]=='}'){
				cx++;
				if(!s.empty() && s.top()=='{'){
					s.pop();
				}else{
					flag=false;
					break;
				}
			}else if(in[i]==']'){
				cx++;
				if(!s.empty() && s.top()=='['){
					s.pop();
				}else{
					flag=false;
					break;
				}
			}else if(in[i]=='>'){
				cx++;
				if(!s.empty() && s.top()=='<'){
					s.pop();
				}else{
					flag=false;
					break;
				}
			}else if(in[i]==')'){
				cx++;
				if(!s.empty() && s.top()=='('){
					s.pop();
				}else{
					flag=false;
					break;
				}
			}else if(in[i]=='*'){
				if(in[i+1]==')'){
					if(!s.empty() && s.top()=='*'){
						s.pop();
						if(!s.empty() && s.top()=='('){
							s.pop();
							cx++;
							i++;
						}
					}else{
						cx++;
						flag=false;
						break;
					}
				}else{
					cx++;
				}
			}else{
				cx++;
			}
		}
		if(!flag){
			printf("NO %d\n",cx);
		}else if(!s.empty()){
			printf("NO %d\n",++cx);
		}else{
			printf("YES\n");
		}
	}
}