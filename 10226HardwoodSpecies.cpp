#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
#include<list>
using namespace std;

/*int main(){
	freopen("in.txt","r+",stdin);
	int t,c,total,d[10005];
	string s,ss;
	list<string> specList;
	cin>>t;
	cin.get();
	cin.get();
	while(t--){
		total=0;
		while(getline(cin,s) && s[0]){
			specList.push_back(s);
			total++;
		}
		specList.sort();
		memset(d,0,sizeof(d));
		c=0;
		ss=" ";
		list<string>::iterator iter=specList.begin();
		while(iter!=specList.end()){
			if(*iter!=ss){
				ss=*iter;
				d[c++]++;
			}else{
				d[c-1]++;
			}
			iter++;
		}
		c=0;
		specList.unique();
		list<string>::iterator iter2=specList.begin();
		while(iter2!=specList.end()){
			cout<<*iter2<<" ";
			printf("%.4lf\n",(d[c++]*100.00)/total);
			iter2++;
		}
		printf("\n");
		specList.clear();
	}
}*/

/*int main(){
	freopen("in2.txt","r+",stdin);
	int i,j;
	int t,c,total,d[10005],d2,temp2;
	char s[35],tmps[35];
	bool done;
	char specList[10005][35];
	scanf("%d",&t);
	getchar();
	getchar();
	while(t--){
		c=0;
		total=0;
		memset(d,0,sizeof(d));
		while(gets(s) && s[0]){
			done=false;
			for(i=0;i<c;i++){
				if(strcmp(specList[i],s)==0){
					done=true;
					d[i]++;
					break;
				}else if(strcmp(specList[i],s)==1){
					d2=1;
					for(j=i;j<c;j++){
						//tmps=specList[j];
						strcpy(tmps,specList[j]);
						//specList[j]=s;
						strcpy(specList[j],s);
						//s=tmps;
						strcpy(s,tmps);

						temp2=d[j];
						d[j]=d2;
						d2=temp2;
					}
					//specList[j]=s;
					strcpy(specList[j],s);
					d[j]=d2;
					c++;
					done=true;
					break;
				}
			}
			if(!done){
				//specList[c]=s;
				strcpy(specList[c],s);
				d[c]++;
				c++;
			}
			total++;
		}

		for(i=0;i<c;i++){
			printf("%s ",specList[i]);
			printf("%.4lf\n",(d[i]*100.00)/total);
		}
		printf("\n");
	}
	return 0;
}*/

#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main(){
	freopen("10226.txt","r+",stdin);
	int t;
	scanf("%d",&t);
	string s;
	getchar();
	getchar();
	bool newline=false;
	while(t--){
		if(newline){
			printf("\n");
		}else{
			newline = true;
		}
		map<string,double> M;
		vector<string> V;
		int total=0;
		while(getline(cin,s) && s[0]){
			total++;
			if(!M.count(s))
			{
				V.push_back(s);
				M[s]=0;
			}
			M[s]++;
		}
		sort(V.begin(),V.end());
		
		for(int i=0;i<V.size();i++)
		{
			cout<<V[i]<<" ";
			printf("%.4f\n",(M[V[i]]*100)/total);
		}
	}
	return 0;
}