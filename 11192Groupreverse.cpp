#include<iostream>
#include<string>
using namespace std;

int main(){
	int g;
	int len,j=0;
	string s;
	char s2[99];
	int cut,cut1,cut2;
	int remLen,workLen;

	while(cin>>g){
		if(g==0)break;
		cin>>s;
		len=s.size();
		if(len<g){
			cout<<s;
		}else{
			remLen=len%g;
			workLen=len-remLen;
			cut=workLen/g;
			cut2=cut;
			while(cut<=workLen){
				cut1=cut-1;
				for(int i=j;i<cut;i++){
					s2[cut1]=s[i];
					cut1--;
					j++;
				}
				if(cut==workLen && remLen!=0){
				
					cut = cut+remLen;
					int k=remLen+j;
					for(int i=j;i<=k;i++){
					
						s2[i]=s[i];
						j++;
					}
				}
				cut=cut+cut2;
			}

			cut1=0;
			cut2=0;
			j=0;
		}
		for(int i=0;i<len;i++){
		
			cout<<s2[i];
		}
		cout<<endl;
	}
	return 0;
}