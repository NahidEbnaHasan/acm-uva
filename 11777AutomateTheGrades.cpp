#include<iostream>
#include<algorithm>
using namespace std;

int getMaxQuiz(int q1,int q2,int q3){
	int quizes[3]={q1,q2,q3};
	sort(quizes,quizes+3);
	return quizes[1]+quizes[2];
}

int main(){
	int t,t1,t2,f,a,q1,q2,q3,total;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>t1>>t2>>f>>a>>q1>>q2>>q3;
		total=t1+t2+f+a+(getMaxQuiz(q1,q2,q3)/2);
		//cout<<total<<endl;
		if(total>=90){
			cout<<"Case "<<i+1<<": A"<<endl;
		}else if(total>=80 && total<90){
			cout<<"Case "<<i+1<<": B"<<endl;
		}else if(total>=70 && total<80){
			cout<<"Case "<<i+1<<": C"<<endl;
		}else if(total>=60 && total<70){
			cout<<"Case "<<i+1<<": D"<<endl;
		}else{
			cout<<"Case "<<i+1<<": F"<<endl;
		}
	}
}