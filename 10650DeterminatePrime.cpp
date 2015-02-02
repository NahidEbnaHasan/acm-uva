#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#define MAX 32050
using namespace std;

bool primeFlag[MAX];
void SieveEratosthenes(int L,int U){
    int i,j,k;
    memset(primeFlag, true, sizeof(primeFlag));
    primeFlag[0]=false;
    primeFlag[1]=false;
    k=sqrt(U);
    for(i=2;i<k;i++){
        if(primeFlag[i]){
            for(j=2;(j*i)<U;j++){
                primeFlag[j*i]=false;
            }
        }
    }
}

int dis[MAX]={0};
void PrimeDistance(){
	int tmp;
	for(int i=0;i<MAX;i++){
		if(i==2){
			tmp=2;
		}else{
			if(primeFlag[i]){
				dis[tmp]=i-tmp;
				tmp=i;
			}
		}
	}
}

int disPrime[670];

void FindDiterminatePrime(){
	int a,b,d,cx,cx2,arr[20];;
	d=0;
	cx=0;
	cx2=1;
	disPrime[0]=-1;
	for(int i=0;i<MAX;i++){
		if(dis[i]>0){
			if(dis[i]==d){
				arr[cx++]=i;
				d=dis[i];
			}else{
				if(cx>1){
					arr[cx++]=i;
					for(int j=0;j<cx;j++){
						disPrime[cx2++]=arr[j];
					}
					disPrime[cx2++]=-1;
				}
				cx=0;
				arr[cx++]=i;
				d=dis[i];
			}
		}
	}
	disPrime[cx2++]=-1;
}

int main(){
	//freopen("in2.txt","r",stdin);
	SieveEratosthenes(0,MAX);
	PrimeDistance();
	FindDiterminatePrime();
	int a,b,c,beg,end;
	while(scanf("%d %d",&a,&b)==2){
		if(a==0 && b==0){
			return 0;
		}else{
			if(a>b){
				int tmp=a;
				a=b;
				b=tmp;
			}
			c=0;
			for(int i=0;;){
				beg=i+1;
				if(disPrime[beg]==-1){
					break;
				}
				for(int j=beg;disPrime[j]!=-1;j++){
					c=j;
				}
				end=c;
				if(disPrime[beg]>=a && disPrime[end]<=b){
					for(int k=beg;k<=end;k++){
						if(k==end){
							printf("%d\n",disPrime[k]);
						}else{
							printf("%d ",disPrime[k]);
						}
					}
				}
				i=end+1;
			}
		}
	}
	return 0;
}

//critical input
/*
250 268
252 270
255 269
250 269
251 270
251 269
250 270
0 0 
*/
//out put 251 257 263 269 4 last 4 input