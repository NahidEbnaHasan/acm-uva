#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	string s;
	while(cin>>s){
		if(s=="#"){
			return 0;
		}else{
			//sort(s.begin(),s.end());
			//do{
				//if(s==s2){
					if(next_permutation(s.begin(),s.end())){
						cout<<s<<endl;
					}else{
						cout<<"No Successor"<<endl;
					}
				}
			//}while(next_permutation(s.begin(),s.end()));
		//}
	}
}

/*int main(){
	freopen("in2.txt","r",stdin);
	int sLen;
	char id[60],temp[60];
	while(scanf("%s",&id)==1){
		if(strcmp(id,"#")==0){
			return 0;
		}else{
			strcpy(temp,id);
			sLen=strlen(id);
			//sort(id,id+sLen);
			if(next_permutation(id,id+sLen)){
				printf("%s\n",id);
			}else{
				printf("No Successor\n");
			}
		}
	}
}*/