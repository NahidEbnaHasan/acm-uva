#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	int i,j,loop=1;
	int a,b,c,d;
	int n,m,grid[13][13],sum[13];
	while(scanf("%d",&n)==1 && n){
		memset(sum,0,sizeof(sum));
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&grid[i][j]);
			}
		}
		printf("Case %d: ",loop++);
		if(n%2!=0){
			m=n;
			for(i=0;i<n/2+1;i++){
				if(i==n/2){
					sum[i]=grid[n/2][n/2];
				}else{
					for(a=i;a<m;a++){
						sum[i]+=grid[i][a];
					}
					for(b=i+1;b<m;b++){
						sum[i]+=grid[b][m-1];
					}
					for(c=m-2;c>=i;c--){
						sum[i]+=grid[m-1][c];
					}
					for(d=m-2;d>=i+1;d--){
						sum[i]+=grid[d][i];
					}
					m--;
				}
			}
			for(i=0;i<n/2+1;i++){
				if(i==n/2){
					printf("%d\n",sum[i]);
				}else{
					printf("%d ",sum[i]);
				}
			}
		}else{
			m=n;
			for(i=0;i<n/2;i++){
				for(a=i;a<m;a++){
					sum[i]+=grid[i][a];
				}
				for(b=i+1;b<m;b++){
					sum[i]+=grid[b][m-1];
				}
				for(c=m-2;c>=i;c--){
					sum[i]+=grid[m-1][c];
				}
				for(d=m-2;d>=i+1;d--){
					sum[i]+=grid[d][i];
				}
				m--;
			}
			for(i=0;i<n/2;i++){
				if(i==(n/2)-1){
					printf("%d\n",sum[i]);
				}else{
					printf("%d ",sum[i]);
				}
			}
		}
		
	}
}