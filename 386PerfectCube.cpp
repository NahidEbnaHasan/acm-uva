#include<iostream>
#include<cstdio>
#include<algorithm>
#define MAX 201
using namespace std;

int cubes[MAX];
void GenCubes(){
	cubes[0]=0;
	cubes[1]=1;
	for(int i=2;i<MAX;i++){
		cubes[i]=i*i*i;
	}
}

int main(){
	freopen("out.txt","w+",stdout);
	GenCubes();
	int a,triple[3]={0};
	for(int i=6;i<MAX;i++){
		for(int j=2;j<i;j++){
			for(int k=j;k<i;k++){
				for(int l=k;l<i;l++){
					if(cubes[i]==(cubes[j]+cubes[k]+cubes[l])){
						printf("Cube = %d, Triple = (%d,%d,%d)\n",i,j,k,l);
					}
				}
			}
		}
	}
	return 0;
}