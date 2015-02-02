#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
	freopen("in.txt","r+",stdin);
	string s;
	int t,n,p,c,d,len,ins[110];
	scanf("%i",&t);
	//cin>>t;
	while(t--){
		scanf("%i",&n);
		getchar();
		//cin>>n;
		p=0;
		c=0;
		while(n--){
			getline(cin,s);
			if(s=="RIGHT"){
				p++;
				ins[c++]=1;
			}else if(s=="LEFT"){
				p--;
				ins[c++]=-1;
			}else{
				len=s.length();
				s=s.substr(7,len);
				d=atoi(s.c_str());
				p+=ins[d-1];
				ins[c++]=ins[d-1];
			}
		}
		printf("%i\n",p);
	}
	return 0;
}