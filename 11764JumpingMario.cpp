#include<iostream>
using namespace std;

int main(){
	freopen("in.txt","r+",stdin);
	int t,nOfWall,hOfWall1,hOfWall2,hJump,lJump;
	cin>>t;
	for(int loop=0;loop<t;loop++){
		cin>>nOfWall;
		hJump=0;
		lJump=0;
		for(int i=0;i<nOfWall;i++){
			if(i==0){
				cin>>hOfWall1;
			}else{
				cin>>hOfWall2;
				if(hOfWall2>hOfWall1){
					hJump++;
					hOfWall1=hOfWall2;
				}else if(hOfWall2<hOfWall1){
					lJump++;
					hOfWall1=hOfWall2;
				}else{
					continue;
				}
			}
		}
		cout<<"Case "<<loop+1<<": "<<hJump<<" "<<lJump<<endl;
	}
}