#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
	freopen("644.in","r",stdin);
	freopen("644.out","w",stdout);
	int index = 0, set = 1;
	string s,codes[10];
	while(cin>>s){
		if(s == "9"){
			bool flag, immeDeco = true;
			for(int i=0;i<index-1;i++){
				for(int j=i+1;j<index;j++){
					flag = true;
					int lenI = codes[i].length();
					int lenJ = codes[j].length();
					int minLen = min(lenI,lenJ);
					for(int k=0;k<minLen;k++){
						if(codes[i][k] != codes[j][k]){
							flag = false;
							break;
						}
					}
					if(flag){
						immeDeco = false;
						break;
					}
				}
				if(!immeDeco) break;
			}
			if(immeDeco){
				cout<<"Set "<<set++<<" is immediately decodable"<<endl;
			}else{
				cout<<"Set "<<set++<<" is not immediately decodable"<<endl;
			}
			index = 0;
		}else{
			codes[index++] = s;
		}
	}
	return 0;
}