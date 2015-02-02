#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int cx,days[3655],mapDays[1000];
bool flag[3655],weekEnds[3655];

void MapWeekEnds(){
	memset(weekEnds,false,sizeof(weekEnds));
	for(int i=7;i<3655;i+=7){
		weekEnds[i-1]=true;
		weekEnds[i]=true;
	}
}

int FindHartalDays(int HartalParam,int totaldays){
	int i=1,tmp,sum=0;
	tmp=HartalParam*i++;
	while(tmp<=totaldays){
		if(!weekEnds[tmp] && !flag[tmp]){
			sum++;
			flag[tmp]=true;
			mapDays[cx++]=tmp;
		}
		tmp=HartalParam*i++;
	}
	return sum;
}

int main(){
	freopen("in2.txt","r",stdin);
	MapWeekEnds();
	memset(flag,false,sizeof(flag));
	int tCase,n,nParty,hParam,nHarDays;
	scanf("%d",&tCase);
	while(tCase--){
		scanf("%d",&n);
		scanf("%d",&nParty);
		nHarDays=0;
		cx=0;
		while(nParty--){
			scanf("%d",&hParam);
			nHarDays+=FindHartalDays(hParam,n);
		}
		for(int j=0;j<cx;j++){
			flag[mapDays[j]]=false;
		}
		printf("%d\n",nHarDays);
	}
}