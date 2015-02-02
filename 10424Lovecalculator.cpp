
#include<iostream>
#include<string>
using namespace std;

int get1(string s);
int get2(int tn);
float getLove(float a,float b);

int main(){

	string s1,s2;
	float ls1,ls2;

	while(getline(cin,s1) && getline(cin,s2)){

		ls1=(float)get2(get1(s1));
		ls2=(float)get2(get1(s2));
		cout.precision(2);
		cout<<fixed<<getLove(ls1,ls2)<<" %"<<endl;
	}
	return 0;
}

int get1(string s){
	int n=0,ver=0;
	for(int i=0;i<s.size();i++){

		if(s[i]>='a'&&s[i]<='z'){
			n=s[i]-96;
			ver=ver+n;
		}
		if(s[i]>='A'&&s[i]<='Z'){
			n=s[i]-64;
			ver=ver+n;
		}else{
			continue;
		}
	}
	return ver;
}

int get2(int tn){
	int ls;
	if(tn>9&&tn%9==0){
		ls=9;
	}
	else if(tn>9&&tn%9!=0){
		ls=tn%9;
	}
	else{
		ls=tn;
	}
	return ls;
}

float getLove(float a,float b){
	float love;
	if(a>b)
		love=(float)((b*100)/a);
	else
		love=(float)((a*100)/b);

	return love;
}