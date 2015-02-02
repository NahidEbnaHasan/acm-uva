#include<iostream>
#include<cstring>
using namespace std;

char *sort(char arr[500]);

int main(){
	char c,s[500],alpha[500];
	int len,freq=0,maxFreq=0,top=1;
	while(cin.getline(s,sizeof(s))){
		len=strlen(s);
		freq=0;
		maxFreq=0;
		top=1;
		alpha[top]='\0';
		for(int i=0;i<len;i++){
			if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
				c=s[i];
				s[i]=' ';
				freq=1;
				for(int j=0;j<len;j++){
					if(c==s[j]){ 
						freq=freq+1;
						s[j]=' ';
					}else
						continue;
				}
				if(freq>maxFreq){
					maxFreq=freq;
					for(int k=1;alpha[k]!='\0';k++){
						alpha[k]='\0';
					}
					alpha[0]=c;
					top=1;
				}else if(freq==maxFreq){
					maxFreq=freq;
					alpha[top++]=c;
					alpha[top]='\0';
				}else
					continue;
			}else
				continue;
		}
		sort(alpha);
		for(int l=0;alpha[l]!='\0';l++){
			cout<<alpha[l];
		}
		cout<<" "<<maxFreq<<endl;
	}
	return 0;
}

char *sort(char arr[500]){
	int i,j;
	char key;
	for(j=1;arr[j]!='\0';j++){
		key=arr[j];
		i=j-1;
		while(i>=0&&arr[i]>key){
			arr[i+1]=arr[i];
			i=i-1;
		}
		arr[i+1]=key;
	}
	return arr;
}