#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	char asciiChar[95]={' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/',
		'0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@',
		'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
		'[','\\',']','^','_','\`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~'};
	bool newLine=false;
	string s;
	while(getline(cin,s)){
		bool flag[95]={false};
		int freq[95]={0};
		int arr[95]={0};
		int len,count;
		count=0;
		len=s.length();
		for(int i=0;i<len;i++){
			for(int j=0;j<94;j++){
				if(s[i]==asciiChar[j]){
					if(!flag[j]){
						flag[j]=true;
						count++;
					}
					freq[j]++;
					arr[j]++;
					break;
				}
			}
		}
		int *arr2=new int[count];
		int j=0;
		for(int i=0;i<94;i++){
			if(arr[i]>0){
				arr2[j++]=arr[i];
			}
		}
		sort(arr2,arr2+count);
		if(newLine){
			cout<<endl;
		}
		for(int i=0;i<count;i++){
			for(int j=94;j>=0;j--){
				if(arr2[i]==freq[j] && flag[j]){
					cout<<(int)asciiChar[j]<<" "<<freq[j]<<endl;
					flag[j]=false;
					break;
				}
			}
		}
		if(!newLine){
			newLine=true;
		}
	}

}