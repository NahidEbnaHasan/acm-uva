//programmer:Imam Ibn Hasan
//date:6.1.2013
//compiler:vs 2012

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t,n,maxDis;
	//int *cost;
	int cost[20001];
	cin>>t;
	while(t--){
		cin>>n;
		//cost = new int[n];
		for(int i=0;i<n;i++){
			cin>>cost[i];
		}
		maxDis=0;
		sort(cost,cost+n);
		for(int i=n-3;i>=0;i-=3){
			maxDis+=cost[i];
		}
		cout<<maxDis<<endl;
	}
	return 0;
}