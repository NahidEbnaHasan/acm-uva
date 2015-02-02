#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

//int sLen;
//string s;

int main(){
	freopen("in2.txt","r",stdin);
	int sLen;
	string s;
	int sen1,sen2;
	bool wf;
	while(cin>>s){
		wf=true;
		sLen=s.length();
		sen1=0;
		sen2=0;
		for(int i=sLen-1;i>=0;i--){
			if(s[i]>='p' && s[i]<='z'){
				//wf=true;
				sen1++;
			}else if(s[i]=='N'){
				if(sen1!=1){
					if(sen2!=1){
						wf=false;
						break;
					}else{
						sen2=1;
					}
				}else{
					sen1=1;
					if(sen2==1){
						sen2=0;
					}else{
						sen2++;
					}
				}
			}else if(s[i]=='C' || s[i]=='D' || s[i]=='E' || s[i]=='I'){
				if(sen1!=2){
					if(sen2!=2){
						wf=false;
						break;
					}else{
						sen2=1;
					}
				}else{
					sen1=1;
					if(sen2==2){
						sen2=0;
					}else{
						sen2++;
					}
				}
			}else{
				wf=false;
				break;
			}
		}
		if(wf){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}

// CpNIpCpq yes