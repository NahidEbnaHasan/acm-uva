/* 
 * File:   12527DifferentDigits.cpp
 * Author: Imam Ibn Hasan
 *
 * Created on June 13, 2013, 2:08 PM
 */

#include <cstdlib>
#include<iostream>
#include<cstdio>
using namespace std;

/*
 * 
 */
int a[5001]={0};
bool isNonRepeted(int n){
	int i=0,b[5]={0};
    while(n>0){
        b[i]=n%10;
        if(i!=0 && b[i]==b[i-1]){
            return false;
        }
        n/=10;
		i++;
    }
    for(int j=0;j<i;j++){
        for(int k=0;k<i;k++){
            if(j!=k && b[j]==b[k]){
                return false;
            }
        }
    }
    return true;
}
void GenNonRepeatedDgt(){
    a[0]=0;
    a[1]=1;
    for(int i=2;i<5001;i++){
        if(isNonRepeted(i)){
            a[i]=a[i-1]+1;
        }else{
            a[i]=a[i-1];
        }
    }
}
int main(int argc, char** argv) {
    //freopen("in.txt","r+",stdin);
    GenNonRepeatedDgt();
    int n,m;
    while(scanf("%d %d",&n,&m)==2){
        if(n==m && a[n-1]<a[n]){
            //1
            printf("1\n");
        }else if(n!=m && a[n-1]<a[n]){
            //a[m]-a[n]+1
            printf("%d\n",a[m]-a[n]+1);
        }else{
            //a[m]-a[n]
            printf("%d\n",a[m]-a[n]);
        }
    }
    return 0;
}

