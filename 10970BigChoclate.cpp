/*#include<iostream>
using namespace std;

int main(){
	int m,n;
	while(cin>>m>>n){
		cout<<(m*n)-1<<endl;
	}
	return 0;
}*/

#include<stdio.h>

int main(){
	int m,n;
	while(scanf("%i %i",&m,&n)==2){
		printf("%i\n",(m*n)-1);
	}
	return 0;
}
