#include<iostream>
#include<algorithm>
using namespace std;

int integers[10001];
int main(){
	int n,max=0,count=0;
	while(cin>>n){
		integers[count++]=n;
		if(n>max){
			max=n;
		}else{
			sort(integers,integers+count);
		}
		if(count==1){
			cout<<n<<endl;
		}else if(count%2==0){
			cout<<(integers[(count/2)-1]+integers[count/2])/2<<endl;
		}else{
			cout<<integers[count/2]<<endl;
		}
	}
	return 0;
}