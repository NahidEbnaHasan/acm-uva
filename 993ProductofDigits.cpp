#include<iostream>
#include<cstdio>
#include<cmath>
#include<map>
using namespace std;

typedef long long ll;

int main(){
	freopen("993in.txt","r",stdin);
	freopen("993out.txt","w",stdout);
	ll i,j;
	bool flag;
	ll test,num,cx,digits[50],tmp,tmp2,minNum;
	scanf("%lld",&test);
	while(test--){
		scanf("%lld",&num);
		if(num==0 || num==1){
			printf("%lld\n",num);
		}else{
			map<ll,ll> num2,num3;
			cx=0;
			for(i=2;i<=(ll)sqrt(num);i++){
				while(num%i==0){
					digits[cx++]=i;
					num/=i;
				}
			}
			if(num>1) digits[cx++]=num;
			//cx=0;
			flag=true;
			tmp=tmp2=1;
			for(i=0;i<cx;i++){
				if(digits[i]>7){
					flag=false;
					break;
				}else{
					if(digits[i]>3){
						num2[digits[i]]++;
					}else{
						if(tmp*digits[i]<10){
							tmp*=digits[i];
						}else{
							num2[tmp]++;
							tmp=digits[i];
						}
					}
				}
			}

			if(flag){
				num2[tmp]++;
				tmp2=0;
				for(map<ll,ll>::iterator itr=num2.begin();itr!=num2.end();itr++){
					for(i=0;i<itr->second;i++){
						tmp2=tmp2*10+itr->first;
					}
				}
				tmp=1;
				for(i=cx-1;i>=0;i--){
					if(digits[i]>3){
						num3[digits[i]]++;
					}else{
						if(tmp*digits[i]<10){
							tmp*=digits[i];
						}else{
							num3[tmp]++;
							tmp=digits[i];
						}
					}
				}
				num3[tmp]++;
				tmp=0;
				for(map<ll,ll>::iterator itr=num3.begin();itr!=num3.end();itr++){
					for(i=0;i<itr->second;i++){
						tmp=tmp*10+itr->first;
					}
				}
				minNum=min(tmp,tmp2);
				printf("%lld\n",minNum);
			}else{
				printf("-1\n");
			}
		}
	}
}