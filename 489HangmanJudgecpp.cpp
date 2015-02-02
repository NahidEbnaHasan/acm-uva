#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
using namespace std;

int main(){
	freopen("489.in","r",stdin);
	freopen("489.out","w",stdout);
	bool s,t;
	int i,len,size;
	int round,solved,tried;
	char soln[1000],guess[1000];
	while(scanf("%d",&round)==1 && round>0){
		getchar();
		gets(soln);
		gets(guess);
		map<char,bool> solnMap,guessMap;
		for(i=0;soln[i]!='\0';i++){
			if(soln[i]!=' '){
			solnMap[soln[i]]=false;
			}
		}
		s=t=false;
		solved=0;
		tried=0;
		size=solnMap.size();
		for(i=0;guess[i]!='\0';i++){
			if(soln[i]!=' '){
				if(solnMap.find(guess[i])!=solnMap.end()){
					//solnMap[guess[i]]=true;
					if(!solnMap[guess[i]]){
						solnMap[guess[i]]=true;
						solved++;
						if(solved==size){
							s=true;
							break;
						}
					}
				}else{
					if(guessMap.find(guess[i])==guessMap.end()){
						guessMap[guess[i]]=true;
						tried++;
						if(tried==7){
							t=true;
							break;
						}
					}
				}
			}
		}
		printf("Round %d\n",round);
		if(s){
			printf("You win.\n");
		}else if(t){
			printf("You lose.\n");
		}else{
			printf("You chickened out.\n");
		}
	}
}