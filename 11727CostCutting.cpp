/* 
 * File:   11727CostCutting.cpp
 * Author: Imam Ibn Hasan
 *
 * Created on June 12, 2013, 9:35 AM
 */

#include <iostream>
#include <cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
    freopen("in.txt","r+",stdin);
    int t,n,c[3];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&c[j]);
        }
        sort(c,c+3);
        printf("Case %d: %d\n",i+1,c[1]);
    }
    return 0;
}

