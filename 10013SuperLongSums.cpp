#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;

/*int main(){
	//freopen("10013.txt","r+",stdin);
	int t,m,n,o,d1,d2;
	char res[1000010];
	cin>>t;
	while(t--){
		memset(res,NULL,sizeof(res));
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>d1>>d2;
			n=d1+d2;
			if(n<=9){
				res[i]=n+48;
			}else{
				int j=i,carry=0;
				do{
					n+=carry;
					res[j]=(n%10)+48;
					carry=n/10;
					j--;
					o=(res[j]-48)+carry;
					n=res[j]-48;

				}while(o>9);
				if(j>=0){
					res[j]=o+48;
				}
			}
		}
		for(int i=0;i<m;i++){
			cout<<res[i];
		}
		if(t==0){
			cout<<endl;
		}else{
			cout<<endl<<endl;
		}
	}
	return 0;
}*/

int main(){
	freopen("in.txt","r+",stdin);
	int t,m,n,carry;
	string s1(1000000,' ');
	string s2(1000000,' ');
	cin>>t;
	while(t--){
		cin>>m;
		string s3(m,' ');
		for(int i=0;i<m;i++) cin>>s2[i]>>s1[i];
		carry=0;
		for(int i=m-1;i>=0;i--){
			n=(s1[i]-48)+(s2[i]-48)+carry;
			s3[i]=(n%10)+48;
			carry=n/10;
		}
		if(t!=0){
			cout<<s3<<endl<<endl;
		}else{
			cout<<s3<<endl;
		}
	}
}