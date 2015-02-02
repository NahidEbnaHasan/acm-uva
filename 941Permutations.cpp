#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

typedef long long ll;
ll i,j,k;
ll fact[21]={0};
void GEN_FACTO(){
	fact[2]=2;
	for(i=3;i<21;i++){
		fact[i]=fact[i-1]*i;
	}
}
int main(){
	freopen("941.in","r",stdin);
	freopen("941.out","w",stdout);
	/*string chrs="abcd";
	cout<<chrs.c_str()<<endl;
	while(next_permutation(chrs.begin(),chrs.end())){
	cout<<chrs.c_str()<<endl;
	}*/
	GEN_FACTO();
	ll t,n,len;
	bool flag[25];
	char s1[21],s2[21];
	scanf("%lld",&t);
	getchar();
	ll f,left,pos,cx1,cx2;
	while(t--){
		gets(s1);
		scanf("%lld",&n);
		getchar();
		len=strlen(s1);
		if(len==1){
			printf("%s\n",s1);
		}else{
			sort(s1,s1+len);
			n++;
			cx1=0;
			memset(flag,false,sizeof(flag));
			for(i=len-1;i>0;i--){
				f=fact[i];
				if(f==0){
					if(n==1){
						for(j=0;j<len;j++){
							if(!flag[j]){
								s2[cx1++]=s1[j];
							}
						}
					}else{
						cx2=0;
						for(j=0;j<len;j++){
							if(!flag[j]){
								if(cx2==1){
									s2[cx1++]=s1[j];
									s2[cx1++]=s1[left];
								}else{
									left=j;
									cx2++;
								}
							}
						}
					}
				}else{
					pos=ceil((double)n/f);
					cx2=0;
					for(j=0;j<len;j++){
						if(!flag[j]){
							if((pos-1)==cx2){
								s2[cx1++]=s1[j];
								flag[j]=true;
								break;
							}else{
								cx2++;
							}
						}
					}
					n=n-((f*pos)-f);
				}
			}
			s2[len]=NULL;
			printf("%s\n",s2);
		}
	}
}