/* 
 * File:   10789PrimeFrequency.cpp
 * Author: Imam Ibn Hasan
 *
 * Created on June 11, 2013, 1:42 AM
 */

#include<iostream>
#include <cstdlib>
#include<cmath>
#include<cstring>
#include<cstdio>
#define MAX 2005
using namespace std;

bool primeFlag[MAX];


void SieveEratosthenes(int L,int U){
    int i,j,k;
    k=sqrt(U);
    memset(primeFlag, true, sizeof(primeFlag));
    primeFlag[0]=false;
    primeFlag[1]=false;
    for(i=2;i<k;i++){
        if(primeFlag[i]){
            for(j=2;(j*i)<U;j++){
                primeFlag[j*i]=false;
            }
        }
    }
}
int main() {
    freopen("in.txt","r+",stdin);
    SieveEratosthenes(0,MAX);
    bool isEmpty;
    char s[MAX];
    char charz[]={'0','1','2','3','4','5','6','7','8','9',
    'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
    'O','P','Q','R','S','T','U','V','W','X','Y','Z',
    'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
    'o','p','q','r','s','t','u','v','w','x','y','z'};
    int val[62]={0};
    int t,len,i,j,k;
    scanf("%d",&t);
    for(int loop=0;loop<t;loop++){
        scanf("%s",&s);
        isEmpty=true;
        len=strlen(s);
        memset(val,0,sizeof(val));
        for(i=0;i<len;i++){
            for(j=0;j<62;j++){
                if(s[i]==charz[j]){
                    val[j]++;
                    break;
                }
            }
        }
        printf("Case %d: ",loop+1);
        for(i=0;i<62;i++){
            if(primeFlag[val[i]]){
                printf("%c",charz[i]);
                isEmpty=false;
            }
        }
        if(isEmpty){
            printf("empty");
        }
        printf("\n");
    }
    return 0;
}

