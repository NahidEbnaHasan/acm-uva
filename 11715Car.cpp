#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int i=0,choice;
	double s,u,v,a,t;
	while(cin>>choice){
		if(choice==0){
			return 0;
		}else if(choice==1){
			cin>>u>>v>>t;
			a=(v-u)/t;
			s=u*t+(.5)*a*pow(t,2);
			cout<<"Case "<<++i<<": ";
			cout.precision(3);
			cout<<fixed<<s<<" "<<a<<endl;
		}else if(choice==2){
			cin>>u>>v>>a;
			t=(v-u)/a;
			s=u*t+(.5)*a*pow(t,2);
			cout<<"Case "<<++i<<": ";
			cout.precision(3);
			cout<<fixed<<s<<" "<<t<<endl;
		}else if(choice==3){
			cin>>u>>a>>s;
			v=sqrt(pow(u,2)+(2*a*s));
			t=(v-u)/a;
			cout<<"Case "<<++i<<": ";
			cout.precision(3);
			cout<<fixed<<v<<" "<<t<<endl;
		}else{
			cin>>v>>a>>s;
			u=sqrt(pow(v,2)-(2*a*s));
			t=(v-u)/a;
			cout<<"Case "<<++i<<": ";
			cout.precision(3);
			cout<<fixed<<u<<" "<<t<<endl;
		}
	}
	return 0;
}