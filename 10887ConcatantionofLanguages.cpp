#include<iostream>
#include<list>
#include<string>
using namespace std;

//list<string> sl,sl2,sl3;

int main(){
	freopen("10887.txt","r+",stdin);
	string s,s2,s3[2000],s4[2000];
	list<string> sl,sl2,sl3;
	int t,m,n,c1,c2;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>m>>n;
		cin.get();
		for(int j=0;j<m;j++){
			//cin>>s;
			getline(cin,s);
			sl.push_back(s);
		}
		for(int j=0;j<n;j++){
			//cin>>s;
			getline(cin,s);
			sl2.push_back(s);
		}
		sl.sort();
		sl2.sort();
		sl.unique();
		sl2.unique();
		c1=0;
		while(!sl.empty()){
			s3[c1++]=sl.front();
			sl.pop_front();
		}

		c2=0;
		while(!sl2.empty()){
			s4[c2++]=sl2.front();
			sl2.pop_front();
		}
		
		for(int i=0;i<c1;i++){
			for(int j=0;j<c2;j++){
				sl3.push_back(s3[i]+s4[j]);
			}
		}
		sl3.sort();
		sl3.unique();
		cout<<"Case "<<i+1<<": "<<sl3.size()<<endl;
		sl.clear();
		sl2.clear();
		sl3.clear();
	}
	return 0;
}