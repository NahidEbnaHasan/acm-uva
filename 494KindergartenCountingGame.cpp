#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	int count;
	bool seqBeg,seqFin;
	while(getline(cin,s)){
		seqBeg=false;
		seqFin=true;
		count=0;
		for(int i=0;i<s.size();i++){
			if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
				if(seqBeg==false && seqFin==true){
					seqBeg=true;
					seqFin=false;
				}else if(i==(s.size()-1) && seqBeg==true && seqFin==false){
					seqBeg=false;
					seqFin=true;
					count++;
				}//else if(seqBeg==true && seqFin==false){
					//nothing;
				//}
			}else{
				seqFin=true;
				if(seqBeg==true && seqFin==true){
					count++;
					seqBeg=false;
				}
			}
		}
		cout<<count<<endl;
	}
}