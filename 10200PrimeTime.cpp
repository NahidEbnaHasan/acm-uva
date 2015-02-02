/* 
 * File:   10200PrimeTime.cpp
 * Author: Imam Ibn Hasan
 *
 * Created on June 10, 2013, 6:09 PM
 */
#include<iostream>
#include <cstdlib>
#include<cstring>
#include <cmath>
#include<cstdio>
#define MAX 10000000

using namespace std;

/*
 * 
 */
bool primeFlag[MAX];
int count;
long long prime[1000000];
int map[10001];

void SieveEratosthenes(int L,int U){
    int i,j,k;
    memset(primeFlag, true, sizeof(primeFlag));
    primeFlag[0]=false;
    primeFlag[1]=false;
    k=sqrt(U);
    for(i=2;i<k;i++){
        if(primeFlag[i]){
            for(j=2;(j*i)<U;j++){
                primeFlag[j*i]=false;
            }
        }
    }
}
void GenPrime(){
    count=1;
    prime[0]=2;
    for(int i=3;i<MAX;i+=2){
        if(primeFlag[i]){
            prime[count++]=i;
        }
    }
}
bool IsPrime(long long n){
    int m=sqrt(n);
    if(n>prime[count-1]){
        for(int i=0;prime[i]<m;i++){
            if(n%prime[i]==0){
                return false;
            }
        }
        return true;
    }else{
        if(primeFlag[n]){
            return true;
        }else{
            return false;
        }
    }
}
void Map(){
    long long i,j;
    memset(map,0,sizeof(map));
    map[0]=1;
    for(i=1;i<10001;i++){
        j=(i*i)+i+41;
        if(IsPrime(j)){
            map[i]=map[i-1]+1;
        }else{
            map[i]=map[i-1];
        }
    }
}
int main() {
    freopen("in.txt","r+",stdin);
    SieveEratosthenes(0,MAX);
    GenPrime();
    Map();
    //cout<<"----"<<endl;
    int a,b;
    double c;
    while(scanf("%d %d",&a,&b)==2){
        if(a==b && map[a-1]<map[a]){
            c=100.00/((b-a)+1);
        }else if(a!=b && map[a-1]<map[a]){
            c=(((map[b]-map[a])+1)*100.00)/((b-a)+1);
        }else{
            c=((map[b]-map[a])*100.00)/((b-a)+1);
        }
        printf("%.2lf\n",c+1e-7);
    }
    return 0;
}

