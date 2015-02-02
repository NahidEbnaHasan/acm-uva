#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

int main(){
	int i,j,k;
	char *ptr;
	char s1[5000],s2[5000];
	bool AisEmpty,BisEmpty;
	int setA[1000],setB[1000];
	while(cin.getline(s1,sizeof(s1))){
		cin.getline(s2,sizeof(s2));
		i=0;
		j=0;
		AisEmpty=true;
		BisEmpty=true;
		ptr=strtok(s1," \t\n");
		while(ptr){
			setA[i++]=atoi(ptr);
			ptr=strtok(NULL," \t\n");
		}
		ptr=strtok(s2," \t\n");
		while(ptr){
			setB[j++]=atoi(ptr);
			ptr=strtok(NULL," \t\n");
		}
		k=0;
		for(int a=0;a<i;a++){
			for(int b=0;b<j;b++){
				if(setA[a]==setB[b]){
					setA[a]=0;
					setB[b]=0;
					k++;
				}
			}
		}
		for(int a=0;a<i;a++){
			if(setA[a]!=0)
				AisEmpty=false;
		}
		for(int b=0;b<j;b++){
			if(setB[b]!=0)
				BisEmpty=false;
		}

		if(AisEmpty&&BisEmpty){
			cout<<"A equals B"<<endl;
		}else if(!AisEmpty&&!BisEmpty&&k){
			cout<<"I'm confused!"<<endl;
		}else if(!AisEmpty&&!BisEmpty){
			cout<<"A and B are disjoint"<<endl;
		}else if(AisEmpty&&!BisEmpty){
			cout<<"A is a proper subset of B"<<endl;
		}else if(!AisEmpty&&BisEmpty){
			cout<<"B is a proper subset of A"<<endl;
		}
	}
	return 0;
}