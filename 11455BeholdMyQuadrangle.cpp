#include<stdio.h>
#include<algorithm>

int main(){
	freopen("in.txt", "r+", stdin);
	int t;
	int s,arm[4];
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d %d",&arm[0],&arm[1],&arm[2],&arm[3]);
		std::sort(arm,arm+4);
		s=arm[0]+arm[1]+arm[2];
		if(arm[0]==arm[1] && arm[1]==arm[2] && arm[2]==arm[3]){
			printf("square\n");
		}else if((arm[0]==arm[1] && arm[2]==arm[3]) || (arm[0]==arm[2] && arm[1]==arm[3]) || (arm[0]==arm[3] && arm[1]==arm[2])){
			printf("rectangle\n");
		}else if(s>=arm[3]){
			printf("quadrangle\n");
		}else{
			printf("banana\n");
		}
	}
}