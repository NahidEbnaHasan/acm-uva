//Imam Ibn Hasan
//1.27.2013

#include<iostream>
using namespace std;

int main(){
	int c;
	cin>>c;
	while(c--){
		float avg;
		int n,sumofGrade=0,abvAvg=0;
		int grade[1001];
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>grade[i];
			sumofGrade+=grade[i];
		}
		avg=sumofGrade/n;
		for(int i=0;i<n;i++){
			if(grade[i]>avg)
				abvAvg++;
		}
		cout.precision(3);
		cout<<fixed<<(float)(abvAvg*100)/n<<"%"<<endl;
	}
}