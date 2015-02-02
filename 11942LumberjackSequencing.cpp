/* 
 * File:   11942LumberjackSequencing.cpp
 * Author: Imam Ibn Hasan
 *
 * Created on June 12, 2013, 10:11 AM
 */

#include <iostream>
#include <cstdlib>
#include<cstdio>
//#include<algorithm>

using namespace std;

int main() {
    freopen("in.txt","r+",stdin);
    int t,n,beardlen,tmp;
    bool a,d,ord;
    scanf("%d",&t);
    printf("Lumberjacks:\n");
    for(int i=0;i<t;i++){
        beardlen=0;
        a=false;
        d=false;
        ord=true;
        for(int j=0;j<10;j++){
            scanf("%d",&tmp);
            if(j==0){
                beardlen=tmp;
            }else{
                if(tmp>beardlen){
                    a=true;
                }else{
                    d=true;
                }
                if(a && d){
                    ord=false;
                    //break;
                }
                beardlen=tmp;
            }
        }
        if(ord){
            printf("Ordered\n");
        }else{
            printf("Unordered\n");
        }
    }
    return 0;
}
