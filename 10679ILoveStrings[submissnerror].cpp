#include<iostream>
#include<string>
#include<string.h>
#include<stdio.h>
using namespace std;

/*int main(){
    freopen("in.txt","r+",stdin);
    int t,q;
    size_t st;
    string s1,s2;
    cin>>t;
    cin.get();
    while(t--){
        cin>>s1;
        cin>>q;
        cin.get();
        while(q--){
            cin>>s2;
            st=s1.find(s2);
            if(st==string::npos){
                cout<<"n"<<endl;
            }else{
                cout<<"y"<<endl;
            }
        }
    }
    return 0;
}*/

int main(){
	freopen("in2.txt","r+",stdin);
	int i,j,k;
	bool f1,f2;
	int t,q,len1,len2,tmpLen,lastIndx;
	char s1[100001], s2[1001];
	scanf("%d",&t);
	getchar();
	while(t--){
		//scanf("%s",s1);
		gets(s1);
		len1=strlen(s1);
		scanf("%d",&q);
		getchar();
		while(q--){
			//scanf("%s",s2);
			gets(s2);
			len2=strlen(s2);
			f1=false;
			for(i=0;i<(len1-len2)+1;i++){
				if(s1[i]==s2[0]){
					lastIndx=i+(len2-1);
					tmpLen=len2-1;
					f2=true;
					if(len2%2==0){
						for(j=i,k=i;j<len2/2;j++){
							if(s1[j]!=s2[k++] || s1[lastIndx--]!=s2[tmpLen--]){
								f2=false;
								break;
							}
						}
					}else{
						for(j=i,k=i;j<len2/2+1;j++){
							if(s1[j]!=s2[k++] || s1[lastIndx--]!=s2[tmpLen--]){
								f2=false;
								break;
							}
						}
					}
				}
				if(f2){
					f1=true;
					break;
				}
			}
			if(f1){
				printf("y\n");
			}else{
				printf("n\n");
			}
		}
	}
}
