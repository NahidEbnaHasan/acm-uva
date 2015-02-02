#include<iostream>
#include<cstdio>
using namespace std;

int A,B,C,map[2];

void print(int val){
	if(A==val){
		printf("A\n");
	}else if(B==val){
		printf("B\n");
	}else{
		printf("C\n");
	}
}

int main(){
	freopen("12646.txt","r",stdin);
	while(scanf("%d %d %d",&A,&B,&C)==3){
		map[0]=0;
		map[1]=0;
		map[A]++;
		map[B]++;
		map[C]++;
		if(map[0]==0 || map[1]==0){
			printf("*\n");
		}else if(map[0]>map[1]){
			print(1);
		}else{
			print(0);
		}
	}
	return 0;
}