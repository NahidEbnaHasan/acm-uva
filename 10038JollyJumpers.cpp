#include<iostream>
#include<cmath>
using namespace std;

int main(){
	freopen("10038in.txt","r",stdin);
	int n,k,num[3001],diff[3000];
	bool jolly=false,ok=false;
	while(cin>>n){
	
		for(int i=0;i<n;i++){
			cin>>num[i];
		}
		if(n==1){
			jolly=true;
		}else{
			for(int i=0;i<n-1;i++){
				int a=num[i];
				int b=num[i+1];
				int absDif=abs(a-b);

				if(absDif==0 || absDif>n || absDif==n){
					jolly=false;
					break;
				}else{
					if(i==0){
						diff[0]=absDif;
						jolly=true;
					}else{
						k=i;
						for(int j=0;j<k;j++){
							if(absDif==diff[j]){
								ok=false;
								break;
							}else{
								ok=true;
							}
						}
						if(ok==true){
							diff[k]=absDif;
							jolly=true;
						}else{
							jolly=false;
							break;
						}
					}
				}
			}
		}

		if(jolly){
			cout<<"Jolly"<<endl;
		}else{
			cout<<"Not jolly"<<endl;
		}
	}
	return 0;
}