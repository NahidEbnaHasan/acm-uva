#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    freopen("in.txt","r+",stdin);
    int i,n,ones;
    while(scanf("%d",&n)==1){
        i=0;
        ones=0;
        do{
            ones=((ones*10)+1)%n;
            i++;
        }while(ones!=0);
        printf("%d\n",i);
    }
    return 0;
}