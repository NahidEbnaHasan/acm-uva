#include<stdio.h>
#include<string.h>
int main(){
    freopen("in.txt","r+",stdin);
    char alpha[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S',
    'T','U','V','W','X','Y','Z',};
    int val[26]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
    int len;
    char s[50];
    while(scanf("%s",s)==1){
        len=strlen(s);
        for(int i=0;i<len;i++){
            if(s[i]>='A' && s[i]<='Z'){
                for(int j=0;j<26;j++){
                    if(s[i]==alpha[j]){
                        printf("%i",val[j]);
                    }
                }
            }else{
                printf("%c",s[i]);
            }
        }
        printf("\n");
    }
}
