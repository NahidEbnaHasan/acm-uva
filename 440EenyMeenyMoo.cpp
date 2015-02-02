#include<iostream>
#include<cstdio>
#include<list>
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	int i,j,n,m;
	bool mFound;
	list<int> r;
	while(scanf("%d",&n)==1 && n){
		m=0;
		mFound=false;
		do{
			for(i=1;i<n;i++){
				r.push_back(i+1);
			}
			m++;
			j=0;
			for(list<int>::iterator itr2,itr1=r.begin();;){
				if(itr1==r.end()){
					itr1=r.begin();
				}
				j++;
				if(j==m){
					if(*itr1==2){
						if(r.size()==1){
							mFound=true;
						}
						break;
					}
					itr2=itr1++;
					r.remove(*itr2);
					j=0;
				}else{
					itr1++;
				}
			}
			r.clear();
		}while(!mFound);
		printf("%d\n",m);
	}
}