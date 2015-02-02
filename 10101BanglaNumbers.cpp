/* 
 * File:   10101BanglaNumbers.cpp
 * Author: Imam Ibn Hasan
 *
 * Created on May 6, 2013, 10:34 AM
 */
#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>
#include <stdio.h>
#include<iomanip>

using namespace std;

string IntToString(int i){
    stringstream ss;
    ss<<i;
    return ss.str();
}
string SwapString(string s){
    int len=s.length();
    if(len==1){
        return s;
    }else{
        char c;
        c=s[0];
        s[0]=s[1];
        s[1]=c;
        return s;
    }
}

int main() {
    //freopen("10101.txt","r+",stdin);
    string s,s2[25],s3,s4[20];
    int a,b,c,len,dIndx,kutiPos[2];
    bool kutiOver,zero;
    b=0;
    while(cin>>s){
        len=s.length();
        s=string(s.rbegin(),s.rend());
        dIndx=0;
        c=0;
        kutiOver=false;
        for(int i=0;i<len;i++){
            if(dIndx==2){
                s2[c++]="shata";
                s2[c++]=s[i];
            }else if(dIndx==3){
                s2[c++]="hajar";
                s2[c++]=s[i];
            }else if(dIndx==5){
                s2[c++]="lakh";
                s2[c++]=s[i];
            }else if(dIndx==7){
                s2[c++]="kuti";
                s2[c++]=s[i];
                kutiOver=true;
            }else{
                s2[c++]=s[i];
            }
            if((i==8 || i==14) && kutiOver){
                dIndx=2;
                kutiOver=false;
            }else{
                dIndx++;
            }
        }
		len=c;
		c=0;
		for(int i=0;i<len;i++){
			if(s2[i]=="shata" || s2[i]=="hajar" || s2[i]=="lakh" || s2[i]=="kuti"){
				s3=SwapString(s3);
                a=atoi(s3.c_str());
				s4[c++]=IntToString(a);
				s4[c++]=s2[i];
				s3.clear();
			}else{
				s3=s3+s2[i];
			}
		}
		s3=SwapString(s3);
        a=atoi(s3.c_str());
		s4[c++]=IntToString(a);
		s3.clear();

		len=c;
		kutiOver=false;
		zero=true;
		c=0;
		for(int i=0;i<len;i++){
			if(i==0 && s4[i]=="0"){
				s4[i].clear();
			}else if(s4[i]=="kuti"){
				kutiPos[c++]=i;
				kutiOver=true;
			}else if(s4[i]=="0"){
				s4[i]="";
				s4[i-1]="";
			}else{
				if(kutiOver){
					if(s4[i]!="shata" && s4[i]!="hajar" && s4[i]!="lakh"){
						if(s4[i]!="0"){
							for(int j=0;j<c;j++){
								s4[kutiPos[j]]="kuti";
								zero=false;
							}
						}
					}
				}else{
					if(s4[i]!="shata" && s4[i]!="hajar" && s4[i]!="lakh"){
						if(s4[i]!="0"){
							zero=false;
						}
					}
				}
			}
		}
		if(zero){
			len=1;
			s4[0]="0";
		}
		c=0;
        for(int i=len-1;i>=0;i--){
            if(s4[i]==""){
                continue;
            }else{
                s2[c++]=s4[i];
            }
        }
		len=c;
		cout<<setw(4)<<++b<<". ";
		for(int i=0;i<len;i++){
            if(i==len-1){
                cout<<s2[i]<<endl;
            }else{
                cout<<s2[i]<<" ";
            }
        }
    }
    return 0;
}
