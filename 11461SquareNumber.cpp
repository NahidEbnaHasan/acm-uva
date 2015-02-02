/* 
 * File:   11461SquareNumber.cpp
 * Author: Imam Ibn Hasan
 *
 * Created on May 6, 2013, 7:20 AM
 */
#include<cstring>
#include<iostream>
#include <cstdlib>
#include<cmath>
#define MAX 100000
using namespace std;

/*
 * 
 */
int sqrNum[316];
//bool squareNum[MAX];

void GenSquareNumber(int L, int U) {
    int i, j;
    //memset(squareNum,false,sizeof(squareNum));
    for (i = 0, j = 0; i < sqrt(U); i++) {
        if (i > 0) {
            sqrNum[j++] = i*i;
        }
    }
    /*for(int loop=0;loop<floor(sqrt(MAX));loop++){
        cout<<sqrNum[loop]<<endl;
    }*/
}

int main() {
    GenSquareNumber(0, MAX);
    int l, u, c;
    while (cin >> l >> u) {
        if (l ==0 && u == 0) {
            return 0;
        } else {
            c = 0;
            for (int i = 0; i < floor(sqrt(MAX)); i++) {
                if (sqrNum[i] >= l && sqrNum[i] <= u) {
                    c++;
                }
            }
            cout << c << endl;
        }
    }
    //return 0;
}

