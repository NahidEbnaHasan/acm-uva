#include <iostream>
#include <string>
using namespace std;

size_t j,k,l,len,integer,temp;
string s,s1;
string s2[29]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven",
	"twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty",
	"thirty","forty","fifty","sixty","seventy","eighty","ninety"};
int num[29]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,30,40,50,60,70,80,90};

void buildInteger(string s){
	if(s=="negative"){
		cout<<"-";
	}else if(s=="hundred"){
		temp*=100;
	}else if(s=="thousand"){	
		integer+=(temp*1000);
		temp=0;
	}else if(s=="million"){
		integer+=(temp*1000000);
		temp=0;
	}else{
		for(int k=0;k<29;k++){	
			if(s==s2[k]){
				temp+=num[k];
				break;
			}
		}
	}
}

int main() 
{
	while(getline(cin,s)){
		if(!s.empty()){
			j=0;
			len=s.size();
			temp=0;
			integer=0;
			for(int i=0;i<len;){
				k=s.find_first_of(' ',i);
				if(k==string::npos){
					//s1=s.substr(j,len);
					//cout<<s1<<endl;
					//buildInteger(s1);
					buildInteger(s.substr(j,len));
					i=len;	
				}else{
					//s1=s.substr(j,k-i);
					//cout<<s1<<endl;
					//buildInteger(s1);
					buildInteger(s.substr(j,k-i));
					i=k+1;
					j=k+1;
				}
			}
			integer+=temp;
			cout<<integer<<endl;
		}
	}
	return 0; 
}

/*int main() 
{
	while(gets(s3)){
		//getchar();
		if(s3!=""){
			j=0;
			len=s.size();
			temp=0;
			integer=0;
			t=strtok(s3," \t");
			while(t){
				sq.push(t);
				t=strtok(NULL," \t");
			}
			while(!sq.empty()){
				buildInteger(sq.front());
				sq.pop();
			}
			integer+=temp;
			cout<<integer<<endl;
		}
	}
	return 0; 
}*/
