#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#define MAX 1000001

using namespace std;

bool primeFlag[MAX];
int mapJmp[MAX];

void SieveEratosthenes(int L,int U){
    int i,j,k;
	k=(int)sqrt(U);
    memset(primeFlag, true, sizeof(primeFlag));
    primeFlag[0]=false;
    primeFlag[1]=false;
    for(i=2;i<k;i++){
        if(primeFlag[i]){
            for(j=2;(j*i)<U;j++){
                primeFlag[j*i]=false;
            }
        }
    }
}

void MapJump(){
	int indx,tmp;
	memset(mapJmp,0,sizeof(mapJmp));
	for(int a=0;a<MAX;a++){
		if(primeFlag[a]){
			if(a==2){
				indx=a;
			}else{
				mapJmp[indx]=a-indx;
				//tmp=mapJmp[indx];
				indx=a;
				//maxjmp=max(maxjmp,tmp);
			}
		}
	}
	//cout<<maxjmp<<endl;
}

int main(){
	freopen("in.txt","r+",stdin);
	SieveEratosthenes(0,MAX);
	MapJump();
	int t,l,u,prime,indx,maxjmp,maxJmpIndx,maxJmpTmp,jmpCmp[120]={0};
	scanf("%d",&t);
	while(t--){
		
		scanf("%d %d",&l,&u);
		prime=0;
		for(int i=l;i<=u;i++){
			if(mapJmp[i]>0){
				prime++;
				if(prime==1){
					indx=i;
				}else if(prime==2){
					jmpCmp[mapJmp[indx]]++;
					//printf("here\n");
					//cout<<mapJmp[indx]<<endl;
					indx=i;
					prime=1;
				}
				//cout<<mapJmp[i]<<endl;
			} 
		}
		maxjmp=0;
		maxJmpTmp=0;
		for(int j=0;j<120;j++){
			if(jmpCmp[j]==maxjmp){
				maxjmp=0;
			}else if(jmpCmp[j]>maxjmp && jmpCmp[j]>maxJmpTmp){
				maxjmp=jmpCmp[j];
				maxJmpIndx=j;
				maxJmpTmp=maxjmp;
			}
			//cout<<jmpCmp[j]<<endl;
		}
		if(maxjmp==0){
			printf("No jumping champion\n");
		}else{
			printf("The jumping champion is %d\n",maxJmpIndx);
		}
		memset(jmpCmp,0,sizeof(jmpCmp));
	}
}