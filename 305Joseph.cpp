#include<iostream>
#include<cstdio>
#include<list>
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	int k;
	int cir[]={2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881};
	while(scanf("%d",&k) && k){
		printf("%d\n",cir[k-1]);
	}
	return 0;
}

/*int main(){
	freopen("in2.txt","r",stdin);
	int i,j,k,m;
	bool mFound;
	list<int> cir1,cir2;
	while(scanf("%d",&k)==1 && k){
		for(i=0;i<k*2;i++){
			cir1.push_back(i+1);
		}
		m=0;
		mFound=false;
		do{
			cir2=cir1;
			m++;
			j=0;
			for(list<int>::iterator itr2,itr1=cir2.begin();;){
				if(itr1==cir2.end()){
					itr1=cir2.begin();
				}
				j++;
				if(j==m){
					if(*itr1<=k){
						if(cir2.size()==k){
							mFound=true;
						}
						break;
					}else{
						itr2=itr1++;
						cir2.remove(*itr2);
						j=0;
					}
				}else{
					itr1++;
				}
			}
			//r.clear();
		}while(!mFound);
		cir1.clear();
		printf("%d\n",m);
	}
}*/

/*int main(){                            //Time limit exeecded :@
	freopen("in2.txt","r",stdin);
	int i,j,k,n,m,o;
	bool mFound,flag[30];
	while(scanf("%d",&k)==1 && k){
		n=k*2;
		m=0;
		mFound=false;
		do{
			memset(flag,false,sizeof(flag));
			m++;
			j=0;
			o=0;
			for(int i=1;;){
				if(!flag[i]){
					j++;
					if(j==m){
						if(i<=k){
							if(o==k){
								mFound=true;
							}
							break;
						}else{
							flag[i++]=true;
							o++;
							j=0;
						}
					}else{
						i++;
					}
				}else{
					i++;
				}
				if(i>n){
					i=1;
				}
			}
		}while(!mFound);
		printf("%d\n",m);
	}
}*/