#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("10911.in","r",stdin);
	char s[25];
	int i,j,k;
	bool flag[10];
	pair<int,int> p[10];
	int n,x,y,prev,loop=1;
	double dis,minDis,sumMinDis;
	while(scanf("%d",&n)==1 && n){
		for(i=0;i<n*2;i++){
			scanf("%s",&s);
			scanf("%d %d",&p[i].first,&p[i].second);
			//p[i].first=x;
			//p[i].second=y;
		}
		for(i=0;i<(n*2)-1;i++){
			for(j=i;j<(n*2);j++){
				//if(i!=j){
				if((p[i].first+p[i].second)>(p[j].first+p[j].second)){
					pair<int,int> temp=p[i];
					p[i]=p[j];
					p[j]=temp;
				}
				//}
			}
		}
		for(i=0;i<(n*2);i++){
			cout<<p[i].first<<" "<<p[i].second<<endl;
		}
		sumMinDis=0;
		for(i=0,j=1,k=0;k<n;i+=2,j=i+1,k++){
			cout<<i<<" "<<j<<endl;
			sumMinDis+=sqrt(((p[i].first-p[j].first)*(p[i].first-p[j].first))+((p[i].second-p[j].second)*(p[i].second-p[j].second)));
		}
		printf("%lf\n",sumMinDis);
		/*memset(flag,false,sizeof(flag));
		prev=9;
		sumMinDis=0;
		for(i=0;i<(n*2)-1;i++){
			if(!flag[i]){
				flag[i]=true;
				minDis=DBL_MAX;
				for(j=i+1;j<n*2;j++){
					if(!flag[j]){
						dis=sqrt(((p[i].first-p[j].first)*(p[i].first-p[j].first))+((p[i].second-p[j].second)*(p[i].second-p[j].second)));
						if(dis<minDis){
							minDis=dis;
							flag[prev]=false;
							prev=j;
							flag[prev]=true;
						}
					}
				}
				sumMinDis+=minDis;
			}
		}
		printf("Case %d: %lf\n",loop++,sumMinDis);*/
	}
}