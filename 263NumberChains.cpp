/*#include<iostream>  //accepted in 0.832 sec
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;

string AscendingOrder(string s){
	sort(s.begin(),s.end());
	return s;
}
string DescendingOrder(string s){
	return string(s.rbegin(),s.rend());
}

string IntToString(int n){
	stringstream ss;
	ss<<n;
	return ss.str();
}

int main(){
	string s;
	int subs[1000];
	bool found;
	int num1,num2,resSub,count,chainLen;
	while(cin>>s){
		if(s=="0"){
			return 0;
		}else{
			cout<<"Original number was "<<s<<endl;
			count=0;
			subs[count++]=atoi(s.c_str());
			chainLen=0;
			found=false;
			while(!found){
				s=AscendingOrder(s);
				num2=atoi(s.c_str());
				s=DescendingOrder(s);
				num1=atoi(s.c_str());
				resSub=num1-num2;
				cout<<num1<<" - "<<num2<<" = "<<resSub<<endl;
				chainLen++;
				s=IntToString(resSub);
				for(int i=0;i<count;i++){
					if(subs[i]==resSub){
						found=true;
						break;
					}
				}
				if(!found){
					subs[count++]=resSub;
				}
			}
			cout<<"Chain length "<<chainLen<<endl<<endl;
		}
	}
}*/

#include<iostream>     //accepted in 0.600 sec
#include<string>
#include<algorithm>
using namespace std;

string AscendingOrder(string s){
	sort(s.begin(),s.end());
	return s;
}
string DescendingOrder(string s){
	return string(s.rbegin(),s.rend());
}

string IntToString(int n){
	char arr[11];
	int i=0;
	if(n==0){
		arr[i++]='0';
	}else{
		while(n>0){
			arr[i++]=(n%10)+48;
			n/=10;
		}
	}
	arr[i++]=NULL;
	string s(arr);
	return s;
}

int StrToInteger(string s){
	int Int=0;
	for(int i=0;i<s.length();i++){
		Int=Int*10+(s[i]-48);
	}
	return Int;
}

int main(){
	string s;
	int subs[1000];
	int num1,num2,resSub,count,chainLen;
	bool numFound;
	while(cin>>s){
		if(s=="0"){
			return 0;
		}else{
			cout<<"Original number was "<<s<<endl;
			numFound=false;
			count=0;
			subs[count++]=StrToInteger(s);
			chainLen=0;
			while(!numFound){
				s=AscendingOrder(s);
				num2=StrToInteger(s);
				s=DescendingOrder(s);
				num1=StrToInteger(s);
				resSub=num1-num2;
				cout<<num1<<" - "<<num2<<" = "<<resSub<<endl;
				chainLen++;
				s=IntToString(resSub);
				for(int i=0;i<count;i++){
					if(subs[i]==resSub){
						numFound=true;
						break;
					}
				}
				if(!numFound){
					subs[count++]=resSub;
				}
			}
			cout<<"Chain length "<<chainLen<<endl<<endl;
		}
	}
}






/*#include<stdio.h> //accepted in 0.132 sec
#include<string.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main(){
	char n[11];
	int subs[1000];
	bool found;
	int fNum,sNum,sub,count,chainLen;
	while(scanf("%s",&n)){
		if(strcmp(n,"0")==0){
			return 0;
		}else{
			printf("Original number was %s\n",n);
			count=0;
			chainLen=0;
			subs[count++]=atoi(n);
			found=false;
			while(!found){
				sort(n,n+strlen(n));
				fNum=atoi(n);
				reverse(n,n+strlen(n));
				sNum=atoi(n);
				sub=sNum-fNum;
				printf("%i - %i = %i\n",sNum,fNum,sub);
				chainLen++;
				sprintf(n,"%i",sub);
				for(int i=0;i<count;i++){
					if(subs[i]==sub){
						found=true;
						break;
					}
				}
				if(!found){
					subs[count++]=sub;
				}
			}
			printf("Chain length %d\n\n", chainLen);
		}
	}
}*/



/*#include<map>      //accepted in 0.168 sec
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main(){
	char n[11];
	int fNum,sNum,sub,count,chainLen;
	while(scanf("%s",&n)){
		if(strcmp(n,"0")==0){
			return 0;
		}else{
			printf("Original number was %s\n",n);
			count=0;
			chainLen=0;
			map<int,bool> m;
			sub=atoi(n);
			m[atoi(n)]=false;
			while(!m[sub]){
				m[sub]=true;
				sort(n,n+strlen(n));
				fNum=atoi(n);
				reverse(n,n+strlen(n));
				sNum=atoi(n);
				sub=sNum-fNum;
				printf("%i - %i = %i\n",sNum,fNum,sub);
				chainLen++;
				sprintf(n,"%i",sub);
			}
			printf("Chain length %d\n\n", chainLen);
		}
	}
}*/