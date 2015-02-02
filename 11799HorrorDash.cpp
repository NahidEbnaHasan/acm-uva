/* 
 * File:   11799HorrorDash.cpp
 * Author: Imam Ibn Hasan
 *
 * Created on June 12, 2013, 9:12 AM
 */

#include<iostream>
#include <cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
    freopen("in.txt","r+",stdin);
    int t,n,c,tmpC;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        c=0;
        for(int j=0;j<n;j++){
            scanf("%d",&tmpC);
            c=max(c,tmpC);
        }
        printf("Case %d: %d\n",i+1,c);
    }
    return 0;
}