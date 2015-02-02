#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;

class BlackBook{
private:
	string title,fName,lName,sAddrs,dept,hPone,wPhone,cMail;
public:
	BlackBook(void){}
	BlackBook(string tl,string fn,string ln,string sA,string dp, string hp,string wp,string cm){
		title=tl;
		fName=fn;
		lName=ln;
		sAddrs=sA;
		dept=dp;
		hPone=hp;
		wPhone=wp;
		cMail=cm;
	}
	void setTitle(string tl){
		title=tl;
	}
	void setFName(string fn){
		fName=fn;
	}
	void setLName(string ln){
		lName=ln;
	}
	void setSAddrs(string sA){
		sAddrs=sA;
	}
	void setDept(string dp){
		dept=dp;
	}
	void setHPone(string hp){
		hPone=hp;
	}
	void setWPhone(string wp){
		wPhone=wp;
	}
	void setCMail(string cm){
		cMail=cm;
	}

	string getTitle(){
		return title;
	}
	string getFName(){
		return fName;
	}
	string getLName(){
		return lName;
	}
	string getSAddrs(){
		return sAddrs;
	}
	string getDept(){
		return dept;
	}
	string getHPone(){
		return hPone;
	}
	string getWPhone(){
		return wPhone;
	}
	string getCMail(){
		return cMail;
	}
	~BlackBook(void){}
};

int main(){
	freopen("in2.txt","r",stdin);
	char s1[1000],*ptr;
	int tCase,cx=0;
	BlackBook bb[4000];
	string s0,names[4000];
	scanf("%d",&tCase);
	getchar();
	while(tCase--){
		getline(cin,s0);
		while(gets(s1) && s1[0]){
			bb[cx].setDept(s0);
			ptr=strtok(s1,",");
			bb[cx].setTitle(ptr);
			ptr=strtok(NULL,",");
			bb[cx].setFName(ptr);
			ptr=strtok(NULL,",");
			bb[cx].setLName(ptr);
			names[cx]=ptr;
			ptr=strtok(NULL,",");
			bb[cx].setSAddrs(ptr);
			ptr=strtok(NULL,",");
			bb[cx].setHPone(ptr);
			ptr=strtok(NULL,",");
			bb[cx].setWPhone(ptr);
			ptr=strtok(NULL,",");
			bb[cx].setCMail(ptr);
			ptr=strtok(NULL,",");
			cx++;
		}
	}
	//BlackBook tmp;
	/*for(int i=0;i<cx-1;i++){
		for(int j=i;j<cx;j++){
			if(bb[i].getLName()>bb[j].getLName()){
				BlackBook tmp(bb[i].getTitle(),bb[i].getFName(),bb[i].getLName(),bb[i].getSAddrs(),bb[i].getDept(),bb[i].getHPone(),bb[i].getWPhone(),bb[i].getCMail());
				bb[i].setTitle(bb[j].getTitle());
				bb[i].setFName(bb[j].getFName());
				bb[i].setLName(bb[j].getLName());
				bb[i].setSAddrs(bb[j].getSAddrs());
				bb[i].setDept(bb[j].getDept());
				bb[i].setHPone(bb[j].getHPone());
				bb[i].setWPhone(bb[j].getWPhone());
				bb[i].setCMail(bb[j].getCMail());

				bb[j].setTitle(tmp.getTitle());
				bb[j].setFName(tmp.getFName());
				bb[j].setLName(tmp.getLName());
				bb[j].setSAddrs(tmp.getSAddrs());
				bb[j].setDept(tmp.getDept());
				bb[j].setHPone(tmp.getHPone());
				bb[j].setWPhone(tmp.getWPhone());
				bb[j].setCMail(tmp.getCMail());
			}
		}
	}*/
	string tmpS;
	int map[4000],tmp;
	for(int i=0;i<cx;i++){
		map[i]=i;
	}
	for(int i=0;i<cx-1;i++){
		for(int j=i;j<cx;j++){
			if(names[i]>names[j]){
				tmp=map[i];
				map[i]=map[j];
				map[j]=tmp;
				tmpS=names[i];
				names[i]=names[j];
				names[j]=tmpS;
			}
		}
	}
	/*for(int i=0;i<cx;i++){
		cout<<map[i]<<endl;
	}*/
	for(int i=0;i<cx;i++){
		printf("----------------------------------------\n");
		cout<<bb[map[i]].getTitle()<<" "<<bb[map[i]].getFName()<<" "<<bb[map[i]].getLName()<<endl;
		cout<<bb[map[i]].getSAddrs()<<endl;
		cout<<"Department: "<<bb[map[i]].getDept()<<endl;
		cout<<"Home Phone: "<<bb[map[i]].getHPone()<<endl;
		cout<<"Work Phone: "<<bb[map[i]].getWPhone()<<endl;
		cout<<"Campus Box: "<<bb[map[i]].getCMail()<<endl;
	}
	/*for(int i=0;i<cx;i++){
		printf("----------------------------------------\n");
		cout<<bb[i].getTitle()<<" "<<bb[i].getFName()<<" "<<bb[i].getLName()<<endl;
		cout<<bb[i].getSAddrs()<<endl;
		cout<<"Department: "<<bb[i].getDept()<<endl;
		cout<<"Home Phone: "<<bb[i].getHPone()<<endl;
		cout<<"Work Phone: "<<bb[i].getWPhone()<<endl;
		cout<<"Campus Box: "<<bb[i].getCMail()<<endl;
	}*/
	return 0;
}