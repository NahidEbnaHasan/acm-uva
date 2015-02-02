//programmer: Imam Ibn Hasan
//date:11.1.2013
//compiler:Vs 2012

#include<iostream>
using namespace std;

int main(){
	int t,f,farmers, animals, env_frnd,budgt;
	cin>>t;
	while(t--){
		cin>>f;
		budgt=0;
		while(f--){
			cin>>farmers>>animals>>env_frnd;
			budgt+=farmers*env_frnd;
		}
		cout<<budgt<<endl;
	}
	return 0;
}