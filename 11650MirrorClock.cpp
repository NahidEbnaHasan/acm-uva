#include<stdio.h>
#include<stdlib.h>


int main(){
	freopen("in.txt","r+",stdin);
	int t,h,m;
	char s[6],hr[3],mn[3];
	scanf("%i",&t);
	while(t--){
		scanf("%s",s);
		hr[0]=s[0];
		hr[1]=s[1];
		hr[2]=NULL;
		mn[0]=s[3];
		mn[1]=s[4];
		mn[2]=NULL;
		h=atoi(hr);
		m=atoi(mn);
		if(m==0){
			h=12-h;
			if(h==0){
				//h=12;
				printf("12:00\n",h);
			}else{
				if(h<=9){
					printf("0%i:00\n",h);
				}else{
					printf("%i:00\n",h);
				}
			}
		}else{
			if(h==12){
				//h=0;
				//h=12-(h+1);
				m=60-m;
				if(m<=9){
					printf("11:0%i\n",m);
				}else{
					printf("11:%i\n",m);
				}
			}else{
				h=12-(h+1);
				m=60-m;
				if(h==0){
					//h=12;
					if(m<=9){
						printf("12:0%i\n",m);
					}else{
						printf("12:%i\n",m);
					}
				}else{
					if(h<=9 && m>9){
						printf("0%i:%i\n",h,m);
					}else if(h>9 && m<=9){
						printf("%i:0%i\n",h,m);
					}else if(h<=9 && m<=9){
						printf("0%i:0%i\n",h,m);
					}else{
						printf("%i:%i\n",h,m);
					}
				}
			}
		}
	}
	return 0;
}