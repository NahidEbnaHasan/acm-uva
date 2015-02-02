#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
	freopen("in.txt","r+",stdin);
	int t,len;
	string s;
	//string ingrds="MARGIT";
	int ingVal[6];
	cin>>t;
	cin.get();
	while(t--){
		getline(cin,s);
		//cin>>s;
		len=s.length();
		memset(ingVal,0,sizeof(ingVal));
		for(int i=0;i<len;i++){
			if(s[i]=='M'){
				ingVal[0]++;
			}else if(s[i]=='A'){
				ingVal[1]++;
			}else if(s[i]=='R'){
				ingVal[2]++;
			}else if(s[i]=='G'){
				ingVal[3]++;
			}else if(s[i]=='I'){
				ingVal[4]++;
			}else if(s[i]=='T'){
				ingVal[5]++;
			}else{
				continue;
			}
		}
		if(ingVal[0]<1 || ingVal[1]<3 || ingVal[2]<2 || ingVal[3]<1 || ingVal[4]<1 || ingVal[5]<1){
			cout<<"0"<<endl;
		}else{
			int j=0;
			while(ingVal[0]>=1 && ingVal[1]>=3 && ingVal[2]>=2 && ingVal[3]>=1 && ingVal[4]>=1 && ingVal[5]>=1){
				ingVal[0]--;
				ingVal[1]-=3;
				ingVal[2]-=2;
				ingVal[3]--;
				ingVal[4]--;
				ingVal[5]--;
				j++;
			}
			cout<<j<<endl;
		}
	}
}