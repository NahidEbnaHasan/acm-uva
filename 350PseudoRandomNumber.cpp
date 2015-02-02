#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
	freopen("350.in","r",stdin);
	freopen("350.out","w",stdout);
	int Z,I,M,L,seed,newRand,test=1,cycle;
	bool flag[10000];
	while(scanf("%d %d %d %d",&Z,&I,&M,&L)==4){
	    memset(flag,0,sizeof(flag));
	    if(Z==0 && I==0 && M==0 && L==0) return 0;
	    flag[L]=1;
		seed=L;
	    for(cycle=1;;cycle++){
	        newRand=(Z*L+I)%M;
            if(!flag[newRand]){
                flag[newRand]=1;
                L=newRand;
            }else{
				if(newRand==seed){
					printf("Case %d: %d\n",test++,cycle);
				}else{
					printf("Case %d: %d\n",test++,cycle-1);
				}
                break;
            }
	    }
	}
}
