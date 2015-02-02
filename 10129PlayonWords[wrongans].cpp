//#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	freopen("in.txt","r+",stdin);
	char c,s[1005];
	bool ok;
	//string s;
	int t,n,len;
	scanf("%i",&t);
	//cin>>t;
	while(t--){
		scanf("%i",&n);
		//cin>>n;
		//cin.get();
		getchar();
		c=' ';
		ok=false;
		while(n--){
			scanf("%s",&s);
			//cin>>s;
			len=strlen(s);
			if(c==' '){
				c=s[len-1];
			}else{
				if(c==s[0]){
					ok=true;
					//cout<<"Ordering is possible."<<endl;
				}else{
					ok=false;
					break;
					//cout<<"The door cannot be opened."<<endl;
				}
				c=s[len-1];
			}
		}
		if(ok){
			//cout<<"Ordering is possible."<<endl;
			printf("Ordering is possible.\n");
		}else{
			printf("The door cannot be opened.\n");
			//cout<<"The door cannot be opened."<<endl;
		}
	}
	return 0;
}