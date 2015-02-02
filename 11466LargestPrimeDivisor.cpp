/* 
 * File:   11466LargestPrimeDivisor.cpp
 * Author: Imam Ibn Hasan
 *
 * Created on May 6, 2013, 11:30 AM
 */
#include<iostream>
#include<cstring>
#include<cmath>
#include <stdio.h>
#define MAX 10000000

using namespace std;

/*
 * 
 */
long long count;
bool primeFlag[MAX];
long long primeNum[1000000];

void Sieve(long long L, long long U) {
    long long i, j, k;
    memset(primeFlag, true, sizeof (primeFlag));
    for (i = 0; i <= sqrt(U); i++) {
        if (primeFlag[i]) {
            if (i == 0 || i == 1) {
                primeFlag[i] = false;
            } else {
                k = 0;
                for (j = (i * i); j < U; j = (i * i) + k * i) {
                    if (!primeFlag[j]) {
                        k++;
                        continue;
                    } else {
                        primeFlag[j] = false;
                    }
                    k++;
                }
            }
        }
    }
}

void GenPrimeNum() {
    long long i, j;
    j = 0;
    for (i = 0; i < MAX; i++) {
        if (primeFlag[i]) {
            primeNum[j++] = i;
        }
    }
    count = j;
}

bool isPrime(long long n) {
    long long i, j, k;
    k = sqrt(n);
    if (n == 1) {
        return false;
    } else {
        for (i = 0; i < count; i++) {
            if (primeNum[i] > k) {
                break;
            }
            if (n % primeNum[i] == 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    freopen("in.txt", "r+", stdin);
    Sieve(0, MAX);
    GenPrimeNum();
    long long n, i, j, divCount, LPD;
    while (cin >> n && n) {
        if (n < 0) {
            n *= (-1);
        }
        LPD = 0;
        divCount = 0;
        for (i = 0; i < count;) {
            if (primeNum[i] >= n || n == 1) {
                break;
            }
            if (n % primeNum[i] == 0) {
                n = n / primeNum[i];
                if (LPD != primeNum[i]) {
                    divCount++;
                }
                if (isPrime(n)) {
                    LPD = n;
                    if (n != primeNum[i]) {
                        divCount++;
                    }
                    break;
                } else {
                    LPD = primeNum[i];
                }
                i = 0;
            } else {
                i++;
            }
        }
        if (divCount > 1) {
            cout << LPD << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    //return 0;
}

