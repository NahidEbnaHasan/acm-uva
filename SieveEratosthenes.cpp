/* 
 * File:   SieveEratosthenes.cpp
 * Author: Imam Ibn Hasan
 *
 * Created on June 10, 2013, 6:09 PM
 */
#include<iostream>
#include <cstdlib>
#include<cstring>
#include <cmath>
#include<time.h>
#define MAX 100000000
using namespace std;

bool primeFlag[MAX];


void SieveEratosthenes(int L,int U){
    int i,j,k,sq;
	sq=sqrt(U);
    memset(primeFlag, true, sizeof(primeFlag));
    primeFlag[0]=false;
    primeFlag[1]=false;
    for(i=2;i<sq;i++){
        if(primeFlag[i]){
            for(j=i;(k=j*i)<U;j++){
				if(primeFlag[k]){
					primeFlag[k]=false;
				}
            }
        }
    }
}
int main() {
	time_t start,end;
	time(&start);
    SieveEratosthenes(0,MAX);
	time(&end);
	cout<<"Executes in "<<difftime(end,start)<<"s"<<endl;
    return 0;
}

