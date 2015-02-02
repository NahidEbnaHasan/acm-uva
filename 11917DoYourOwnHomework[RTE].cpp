#include<iostream>
#include<cstdio>
#include<string>
#include<map>
using namespace std;

int main(){
	freopen("11917.txt","r",stdin);
	int i,j,k,t,n,m,cx,sum,day,avg,loop;
	string s;
	scanf("%d",&t);
	for(loop=0;loop<t;loop++){
		map<string,int> sub;
		cx=0;
		sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			cin>>s;
			scanf("%d",&m);
			sum+=m;
			sub[s]=m;
			cx++;
		}
		scanf("%d",&day);
		cin>>s;
		if(sub.find(s)==sub.end()){
			printf("Case %d: Do your own homework!\n",loop+1);
		}else{
			sum-=sub[s];
			avg=sum/(cx-1);
			if(avg>day+5 || sub[s]>day+5){
				printf("Case %d: Do your own homework!\n",loop+1);
			}else if(avg>day || sub[s]>day){
				printf("Case %d: Late\n",loop+1);
			}else{
				printf("Case %d: Yesss\n",loop+1);
			}
		}
	}
	return 0;
}