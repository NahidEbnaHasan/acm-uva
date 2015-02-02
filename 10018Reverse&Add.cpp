#include<iostream>
#include<new>
#include<queue>
#include<stack>
using namespace std;

bool isPalindrome(unsigned long int num){
	stack<int> s;
	int len,len2;;
	while(num>=1){
		s.push(num%10);
		num/=10;
	}
	int *arr = new int[s.size()];
	len=s.size();
	for(int i=0;i<len;i++){
		arr[i]=s.top();
		s.pop();
	}
	len2=len-1;
	for(int i=0;i<len/2;i++){
		if(arr[i] !=arr[len2--]){
			return false;
		}else{
			continue;
		}
	}
	return true;

}
unsigned long int RevNum(unsigned long int num){
	int len;
	unsigned long int revNum=1;
	queue<int> q;
	while(num>=1){
		q.push(num%10);
		num/=10;
	}
	len=q.size();
	for(int i=0;i<len;i++){
		if(i==0){
			revNum=q.front();
			q.pop();
		}
		else{
			revNum=(revNum*10)+q.front();
			q.pop();
		}
	}
	return revNum;
}

int main(){
	unsigned long int n,num1,num2,num3,iter;
	cin>>n;
	while(n--){
		cin>>num1;
		if(isPalindrome(num1)){
			cout<<"0 "<<num1<<endl;
		}else{
			num2=RevNum(num1);
			num3=num1+num2;
			iter=1;
			while(!isPalindrome(num3)){
				iter++;
				num1=num3;
				num2=RevNum(num1);
				num3=num1+num2;
			}
			cout<<iter<<" "<<num3<<endl;
		}		
	}
}
