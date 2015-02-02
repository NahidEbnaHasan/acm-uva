#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){
	freopen("10810.txt","r",stdin);
	int n;
	int *a,swpCx;
	while(scanf("%d",&n)==1 && n){
		a = new int[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int tmp;
		swpCx=0;
		for(int i=0;i<n-1;i++){
			for(int j=i;j<n;j++){
				if(a[i]>a[j]){
					tmp=a[j];
					a[j]=a[i];
					a[i]=tmp;
					swpCx++;
				}
			}
		}
		mer
		/*for(int i=0;i<n;i++){
			printf("%d",a[i]);
		}*/
		printf("%d\n",swpCx);
	}
}