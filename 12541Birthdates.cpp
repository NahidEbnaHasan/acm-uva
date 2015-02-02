#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	freopen("in.txt","r+",stdin);
	int t,d,m,y,d2,m2,y2,age[110],temp[110];
	int d1=3,m1=6,y1=2013; //todays date
	string s[110];
	cin>>t;
	for(int loop=0;loop<t;loop++){
		cin>>s[loop];
		cin>>d2>>m2>>y2;

		if(d1<d2){
			d1+=30;
			d=d1-d2;
			m2++;
		}else{
			d=d1-d2;
		}

		if(m1<m2){
			m1+=12;
			m=m1-m2;
			y2++;
		}else{
			m=m1-m2;
		}

		y=y1-y2;
		y=(y*365)+(m*30)+d;
		age[loop]=y;
		temp[loop]=y;
	}
	sort(temp,temp+t);
	for(int i=0;i<t;i++){
		if(temp[0]==age[i]){
			cout<<s[i]<<endl;
			break;
		}
	}
	for(int j=0;j<t;j++){
		if(temp[t-1]==age[j]){
			cout<<s[j]<<endl;
			break;
		}
	}
}