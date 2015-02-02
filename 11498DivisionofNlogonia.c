/* 
 * File:   11498DivisionofNlogonia.c
 * Author: Imam Ibn Hasan
 *
 * Created on June 10, 2013, 11:57 AM
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
int main() {
    freopen("in.txt","r+",stdin);
    int t;
    int divX,divY;
    int x,y;
    while(scanf("%d",&t)==1 && t){
        scanf("%d %d",&divX,&divY);
        while(t--){
            scanf("%d %d",&x,&y);
            if((x==divX && y==divY) || (x<divX && y==divY) || (x==divX && y>divY) || (x>divX && y==divY) || (x==divX && y<divY)){
                printf("divisa\n");
            }else if(x<divX && y>divY){
                printf("NO\n");
            }else if(x>divX && y>divY){
                printf("NE\n");
            }else if(x>divX && y<divY){
                printf("SE\n");
            }else{
                printf("SO\n");
            }
        }
    }
    return (EXIT_SUCCESS);
}

