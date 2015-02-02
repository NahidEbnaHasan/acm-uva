#include<iostream>
#include<cstdio>
using namespace std;

int square[1000];
void GenSquareVal(){
	for(int i=0;i<1000;i++){
		square[i]=i*i;
	}
}

int main(){
	freopen("test.txt","r+",stdin);
	GenSquareVal();
	int cx;
	long long a,b,c,d,l;
	while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&l)==5){
		if(a==0 && b==0 && c==0 && d==0 && l==0){
			return 0;
		}else{
			cx=0;
			for(int i=0;i<=l;i++){
				if((a*square[i]+b*i+c)%d==0){
					cx++;
				}
			}
			printf("%d\n",cx);
		}
	}
}