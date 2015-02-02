#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	freopen("400in.txt","r",stdin);
	freopen("400out.txt","w",stdout);
	int i,j,k,l,m;
	int n,len,maxLen;
	string input;
	while(scanf("%d",&n)==1){
		int maxLen=0;
		vector<string> v;
		for(i=0;i<n;i++){
			cin>>input;
			len=input.size();
			maxLen=max(len,maxLen);
			v.push_back(input);
		}
		sort(v.begin(),v.end());

		int col=60/maxLen;
		for(int i=col;;i--){
			if((maxLen*i)+((i-1)*2)<=60){
				col=i;
				break;
			}
		}
		int row=ceil((double)n/col);
		for(i=n;i<(row*col);i++){
			v.push_back("");
		}
		for(i=0;i<60;i++){
			printf("-");
		}
		printf("\n");
		l=0;
		for(i=0;i<row;i++){
			for(k=i,j=0;j<col;j++){
				len=v[k].size();
				if(j==(col-1)){
					//printf("%s",v[k]);
					if(len>0){
						cout<<v[k];
						for(m=0;m<(maxLen-len);m++){
							printf(" ");
						}
					}
				}else{
					//printf("%s",v[k]);
					cout<<v[k];
					for(m=0;m<((maxLen+2)-len);m++){
						printf(" ");
					}
				}
				//cout<<v[k]<<" ";
				k+=row;
				//l++;
				//if(l==n)break;
			}
			//if(l==n)break;
			printf("\n");
		}
		//printf("\n");
	}
}