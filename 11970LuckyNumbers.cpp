#include<iostream>
#include<cstdio>
#include<cmath>
#define MAX 1000000000
#define MAX2 50000

int sqNum[MAX2];
void GenSquareNum(int l,int u){
	for(int i=l;sqNum[i-1]<u;i++){
		sqNum[i]=i*i;
		//printf("%d %d\n",i,sqNum[i]);
	}
}

int main(){
	freopen("test.txt","r+",stdin);
	GenSquareNum(1,MAX);
	int t,a,c,n,i_val,luckyNum[MAX2];
	double d_val;
	scanf("%d",&t);
	for(int loop=0;loop<t;loop++){
		scanf("%d",&n);
		c=0;
		printf("Case %d: ",loop+1);
		for(int i=1;sqNum[i]<=n;i++){
			a=n-sqNum[i];
			d_val=(double)a/sqrt(sqNum[i]);
			if(d_val==0){
				break;
			}
			i_val=d_val;
			if(i_val==d_val){
				//printf("%d ",a);
				luckyNum[c++]=a;
			}
		}
		for(int i=c-1;i>=0;i--){
			if(i==0){
				printf("%d\n",luckyNum[i]);
			}else{
				printf("%d ",luckyNum[i]);
			}
		}
	}
	return 0;
}

/*int main(){
	freopen("test.txt","r+",stdin);
	int t,n,i_val;
	double a,d_val;
	scanf("%d",&t);
	for(int loop=0;loop<t;loop++){
		scanf("%d",&n);
		printf("Case %d: ",loop+1);
		for(int i=1;i<n-1;i++){
			a=n-i;
			d_val=i/sqrt(a);
			i_val=d_val;
			if(i_val==d_val){
				printf("%d ",i);
			}
		}
		printf("%d\n",n-1);
	}
}*/

