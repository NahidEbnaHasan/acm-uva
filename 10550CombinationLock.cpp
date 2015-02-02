#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("10550.txt","r",stdin);
	int initPos,pos1,pos2,pos3,totalAng;
	while(scanf("%d %d %d %d",&initPos,&pos1,&pos2,&pos3)==4){
		if(!initPos && !pos1 && !pos2 && !pos3){
			return 0;
		}else{
			totalAng=0;
			totalAng+=720;
			if(initPos!=pos1){
				if(initPos<pos1){
					totalAng+=(initPos+(40-pos1))*9;
				}else{
					//totalAng+=(360-((initPos+(40-pos1))*9));
					totalAng+=(initPos-pos1)*9;
				}
			}
			totalAng+=360;
			if(pos1!=pos2){
				if(pos1<pos2){
					//totalAng+=(360-((pos1+(40-pos2))*9));
					totalAng+=(pos2-pos1)*9;
				}else{
					totalAng+=((40-pos1)+pos2)*9;
				}
			}
			if(pos2!=pos3){
				if(pos2<pos3){
					totalAng+=(pos2+(40-pos3))*9;
				}else{
					//totalAng+=(360-(((40-pos2)+pos3)*9));
					totalAng+=(pos2-pos3)*9;
				}
			}
			//cout<<totalAng<<endl;
			printf("%d\n",totalAng);
		}
	}
}