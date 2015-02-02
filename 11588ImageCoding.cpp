#include<iostream>
#include<cstdio>
#include<map>

using namespace std;

int main(){
	freopen("11588.txt","r",stdin);
	int i,j,k;
	char ch;
	int test,r,c,m,n,imp,maxPix,total,maxPixSum,size;
	scanf("%d",&test);
	for(int loop=0;loop<test;loop++){
		scanf("%d %d %d %d",&r,&c,&m,&n);
		getchar();
		map<char,int> chars;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				scanf("%c",&ch);
				chars[ch]++;
			}
			getchar();
		}
		maxPix=0;
		maxPixSum=0;
		imp=0;
		total=r*c;
		size=0;
		for(map<char,int>::iterator itr=chars.begin();itr!=chars.end();itr++){
			//cout<<(*itr).first<<(*itr).second<<endl;
			if(itr->second>maxPix){
				maxPix=itr->second;
				maxPixSum=maxPix;
				//imp=1;
			}else if(itr->second==maxPix){
				//maxPix+=itr->second;
				//imp++;
				maxPixSum+=maxPix;
			}
		}
		size=(maxPixSum*m)+((total-maxPixSum)*n);
		printf("Case %d: %d\n",loop+1,size);
	}
	return 0;
}