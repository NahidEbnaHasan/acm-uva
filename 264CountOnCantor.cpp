#include<iostream>
#include<cstdio>
#define MAX 10000000
using namespace std;

int a[5000]={0},cx=0;

void GenSum(){
	a[0]=1;
	int j=2;
	for(int i=1;a[i-1]<=MAX;i++){
		a[i]=a[i-1]+(j++);
		//cx++;
	}
	//cout<<cx<<endl;
}

int main(){
	freopen("264.txt","r",stdin);
	GenSum();
	int n,last;
	int i,j,k,l,loop;
	cx=0;
	while(scanf("%d",&n)==1){
		for(i=0;;i++){
			if(a[i]==n || a[i]>n) break;
		}
		last=a[i];
		i++;
		if(i%2==0){
			j=i;
			k=1;
			l=last-n;
			j-=l;
			k+=l;
			//cout<<j<<" "<<k<<endl;
			//if(loop==cx-2)printf("TERM %d IS %d/%d",n[loop],j,k);
			//else printf("TERM %d IS %d/%d\n",n[loop],j,k);
			printf("TERM %d IS %d/%d\n",n,j,k);
		}else{
			j=1;
			k=i;
			l=last-n;
			j+=l;
			k-=l;
			//cout<<j<<" "<<k<<endl;
			//if(loop==cx-2)printf("TERM %d IS %d/%d",n[loop],j,k);
			//else printf("TERM %d IS %d/%d\n",n[loop],j,k);
			printf("TERM %d IS %d/%d\n",n,j,k);
		}
	}
}