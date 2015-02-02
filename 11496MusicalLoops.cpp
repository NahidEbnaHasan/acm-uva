#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	int i,j,k;
	bool initUp,up,down;
	int n,mag[20000],cxPeak;
	while(scanf("%d",&n)==1 && n){
		cxPeak=0;
		initUp=false;
		up=false;
		down=false;
		for(i=0;i<n;i++){
			scanf("%d",&mag[i]);
			if(i==1){
				if(mag[i]>mag[i-1]){
					initUp=true;
					up=true;
					//cxPeak++;
				}else{
					initUp=false;
					up=false;
					//cxPeak++;
				}
			}else if(i>1){
				if(mag[i]>mag[i-1] && up){
					up=true;
				}else if(mag[i]>mag[i-1] && !up){
					cxPeak++;
					up=true;
				}else if(mag[i]<mag[i-1] && up){
					cxPeak++;
					up=false;
				}else if(mag[i]<mag[i-1] && !up){
					up=false;
				}
			}
		}
		mag[i]=mag[0];

		/*if(mag[i]>mag[i-1] && up){
			up=true;
		}else */if(mag[i]>mag[i-1] && !up){
			cxPeak++;
			up=true;
		}else if(mag[i]<mag[i-1] && up){
			cxPeak++;
			up=false;
		}/*else if(mag[i]<mag[i-1] && !up){
			up=false;
		}*/

		

		/*if(mag[i]>mag[i-1] && initUp){
			up=true;
		}else */if(mag[i]>mag[i-1] && !initUp){
			cxPeak++;
			up=true;
		}else if(mag[i]<mag[i-1] && initUp){
			cxPeak++;
			up=false;
		}/*else if(mag[i]<mag[i-1] && !initUp){
			up=false;
		}*/
		printf("%d\n",cxPeak);
	}
	return 0;
}


/*
critical I/O
4
1 10 9 8
6
1 2 3 4 5 4
0
*/