/* 
 * File:   11579TriangleTrouble.cpp
 * Author: Imam Ibn Hasan
 *
 * Created on June 11, 2013, 5:38 PM
 */
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstdio>
#include<cmath>
#define MAX 10005
using namespace std;

int main() {
    freopen("in.txt","r+",stdin);
    //bool triFrmd;
    int i,t,nOSides;
    double s,area,tmpA,sides[MAX]={0.0};
    scanf("%d",&t);
    while(t--){
        scanf("%d",&nOSides);
        for(i=0;i<nOSides;i++){
            scanf("%lf",&sides[i]);
        }
        sort(sides,sides+nOSides);
        //triFrmd=false;
        area=0;
        for(i=nOSides-1;i>=2;i--){
            s=(sides[i-2]+sides[i-1]+sides[i])/2;
            if(s>sides[i]){
                tmpA=sqrt(s*(s-sides[i-2])*(s-sides[i-1])*(s-sides[i]));
                //area=sqrt(s*(s-sides[i-2])*(s-sides[i-1])*(s-sides[i]));
                area=max(area,tmpA);
                //printf("%0.2lf\n",area);
                //triFrmd=true;
                //break;
                /*if(tmpA>area){
                    area=tmpA;
                }*/
            }
        }
        //if(!triFrmd){
            //printf("0.00\n");
        //}/*else{
            printf("%0.2lf\n",area);
        //}*/
    }
    return 0;
}

