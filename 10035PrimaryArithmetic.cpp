#include<iostream>
#include<cmath>
#include<queue>
using namespace std;

int main(){
	long long n1,n2;
	int carry,len,carrCount=0;
	queue<long long> q1,q2;
	while(cin>>n1>>n2){
		if(n1==0 && n2==0){
			break;
		}else{
			while(n1>=10){
				q1.push(n1%10);
				n1=n1/10;
			}
			q1.push(n1);
			while(n2>=10){
				q2.push(n2%10);
				n2=n2/10;
			}
			q2.push(n2);

			if(q1.size()>q2.size()){
				len=q1.size()-q2.size();
				while(len--){
					q2.push(0);
				}
			}else{
				len=q2.size()-q1.size();
				while(len--){
					q1.push(0);
				}
			}
			// processing
			carry=0;
			carrCount=0;
			while(!q1.empty()){
				int sum=(q1.front()+q2.front())+carry;
				if(sum>=10){
					carrCount++;
					carry=sum/10;
					q1.pop();
					q2.pop();
				}else{
					q1.pop();
					q2.pop();
					carry=0;
				}
			}
			if(carrCount==0){
				cout<<"No carry operation."<<endl;
			}else if(carrCount==1){
				cout<<"1 carry operation."<<endl;
			}else{
				cout<<carrCount<<" carry operations."<<endl;
			}
		}
	}
}