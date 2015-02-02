//programmer: Imam Ibn Hasan
//1.30.2013

#include<iostream>
#include<queue>
using namespace std;

int main(){
	long long l,l1,h,v,s;
	queue<long long> q;
	while(cin>>l>>h){
		if(l==0 && h==0){
			break;
		}else{
			if(l>h){
				l=l+h;
				h=l-h;
				l=l-h;
			}
			if(l<(h/2)){
				l1=h/2;
			}else{
				l1=l;
			}
			s=0;
			for(long long i=l1;i<=h;i++){
				long long n=i,j=0;
				if(n==1){
					j=3;
				}else{
					while(n!=1){
						if(n%2==0){
							n=n/2;
						}else{
							n=3*n+1;
						}
						j++;
					}
				}
				if(j>s){
					s=j;
					while(!q.empty()){
						q.pop();
					}
					q.push(i);
				}else if(j==s){
					q.push(i);
				}
			}
		}
		cout<<"Between "<<l<<" and "<<h<<", "<<q.front()<<" generates the longest sequence of "<<s<<" values."<<endl;
	}
}