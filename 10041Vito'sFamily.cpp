#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	int t;
	int relNum,strtNum,median,minDis;
	int *streets;
	cin>>t;
	while(t--){
		cin>>relNum;
		streets=new int[relNum];
		for(int i=0;i<relNum;i++){
			cin>>strtNum;
			streets[i]=strtNum;
		}
		sort(streets,streets+relNum);
		if(relNum%2==0){
			median=(streets[(relNum/2)-1]+streets[(relNum/2)])/2;
		}else{
			median=streets[(relNum/2)];
		}
		minDis=0;
		for(int i=0;i<relNum;i++){
			minDis+=abs(median-streets[i]);
		}
		cout<<minDis<<endl;
	}
}