#include<iostream>
using namespace std;

int main(){
	int t,n,k,p,ans;
        cin>>t;
        for(int loop=0;loop<t;loop++){
            
			cin>>n>>k>>p;

            if((k+p)>n){
                ans = (k+p)-n;
				while(ans>n){
					ans-=n;
				}
            }else if((k+p)<n){
                ans = k+p;
            }else{
                ans = n;
            }
            cout<<"Case "<<(loop+1)<<": "<<ans<<endl;
        }
}