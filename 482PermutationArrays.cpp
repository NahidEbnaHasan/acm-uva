#include<iostream>
#include<cstdio>
#include<string>
#include<cstdlib>
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	int t,iCx,vCx;
	bool newLine=false;
	string s1,s2[10000],s3[10000],s4[10000];
	scanf("%d",&t);
	cin.get();
	while(t--){
		if(newLine){
			cout<<endl;
		}
		iCx=0;
		while(cin>>s1){
			s2[iCx++]=s1;
			if(cin.get()=='\n')
				break;
		}
		vCx=0;
		while(cin>>s1){
			s3[vCx++]=s1;
			if(cin.get()=='\n')
				break;
		}
		for(int i=0;i<iCx;i++){
			s4[(atoi(s2[i].c_str()))-1]=s3[i];
			s3[i]="";
		}
		for(int j=0;j<iCx;j++){
			cout<<s4[j]<<endl;
			s4[j]="";
		}
		newLine=true;
	}
	return 0;
}

/*int main(){
	freopen("in2.txt","r",stdin);
	int t,cx;
	double n,in[100000],perArr[10000];
	scanf("%d",&t);
	while(t--){
		cx=0;
		while(scanf("%lf",&n)==1){
			in[cx++]=n;
		}
		cx/=2;
		for(int i=0;i<cx;i++){
			perArr[(int) (in[i]-1)]=in[cx+i];
		}
		for(int j=0;j<cx;j++){
			printf("%f\n",perArr[j]);
		}
	}
	return 0;
}*/


/*int main(){
	freopen("in2.txt","r",stdin);
	char c;
	bool begF,endF;
	int t,n,cx,beg,end,len,indx[100000];
	string s1,s2,s3[10000];
	scanf("%d",&t);
	while(t--){
		cx=0;
		while(scanf("%d",&n)==1){
			indx[cx++]=n;
			if(getchar()=='\n')
				break;
		}
		getline(cin,s1);
		len=s1.length();
		cx=0;
		beg=0;
		end=0;
		begF=false;
		endF=false;
		for(int i=0;i<len;i++){
			if(s1[i]==' '){
				if(begF){
					if(!endF){
						endF=true;
						end=i-beg;
					}
				}
			}else{
				if(!begF){
					begF=true;
					beg=i;
				}
			}
			if(begF && endF){
				s2=s1.substr(beg,end);
				s3[indx[cx++]-1]=s2;
				begF=false;
				endF=false;
			}
		}
		if(beg){
			if(!endF){
				endF=true;
				end=s1.length()-beg;
			}
		}
		if(begF && endF){
			s2=s1.substr(beg,end);
			s3[indx[cx++]-1]=s2;
			begF=false;
			endF=false;
		}

		for(int i=0;i<cx;i++){
			cout<<s3[i]<<endl;
		}
		printf("\n");
	}
	return 0;
}*/


