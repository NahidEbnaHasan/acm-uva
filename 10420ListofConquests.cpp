#include<iostream>
#include<string>
using namespace std;

string country[200]={" "};

void SortArray(string s,int c){
	int i,j;
	bool ok=false;
	string tmpStr1,tmpStr2;
	for(i=0;i<c;i++){
		if(s<country[i]){
			ok=true;
			break;
		}
	}
	if(ok){
		for(j=i;j<c+1;j++){
			tmpStr1=country[j];
			country[j]=s;
			s=tmpStr1;
		}
	}else{
		country[c++]=s;
	}
}

int main(){
	//freopen("in.txt","r+",stdin);
	bool found;
	int love[200]={0};
	int t,pos1,pos2,count,mark;
	string s,country2[200]={" "};
	cin>>t;
	cin.get();
	count=0;
	while(t--){
		getline(cin,s);
		pos1=0;
		pos2=s.find_first_of(" ");
		s=s.substr(pos1,pos2);
		if(country[0]==" "){
			country[0]=s;
			country2[0]=s;
			love[0]++;
			count++;
		}else{
			found=false;
			for(int i=0;i<count;i++){
				if(country2[i]==s){
					found=true;
					mark=i;
					break;
				}
			}
			if(!found){
				country2[count]=s;
				love[count]++;
				SortArray(s,count);
				count++;
			}else{
				love[mark]++;
			}
		}
	}
	for(int i=0;i<count;i++){
		for(int j=0;j<count;j++){
			if(country[i]==country2[j]){
				cout<<country[i]<<" "<<love[j]<<endl;
			}
		}
	}
}