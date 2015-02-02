#include<cmath>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
using namespace std;

int main(){
    //freopen("in.txt","r+",stdin);
    int a,b,c,p,p2;
    string s,s2,names[11];
    int netGainLoss[11];
	bool newline=false;
    while(scanf("%d",&p)==1){
		if(newline) printf("\n");
        //memset(names,0,sizeof(names));
        memset(netGainLoss,0,sizeof(netGainLoss));
        for(int i=0;i<p;i++){
            cin>>names[i];
        }

        for(int i=0;i<p;i++){
            c=0;
			cin>>s;
            scanf("%d %d",&a,&p2);
			b=a;
			if(p2!=0){
				if(b%p2==0){
					b=b/p2;
				}else{
					c=b%p2;
					b=(b-c)/p2;
				}
				for(int j=0;j<p2;j++){
					cin>>s2;
					for(int k=0;k<p;k++){
						if(s2==names[k]){
							netGainLoss[k]+=b;
							break;
						}
					}
				}
				for(int l=0;l<p;l++){
					if(s==names[l]){
						netGainLoss[l]+=(c-a);
						break;
					}
				}
			}
            /*for(int l=0;l<p;l++){
                if(s==names[l]){
                    netGainLoss[l]+=(c-a);
					break;
                }
            }*/
        }
		for(int i=0;i<p;i++){
			cout<<names[i]<<" "<<netGainLoss[i]<<endl;
		}
		newline=true;
    }
}