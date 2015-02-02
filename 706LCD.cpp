#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int digits[10][7]={{1,1,1,1,1,1,0},{0,1,1,0,0,0,0},{1,1,0,1,1,0,1},{1,1,1,1,0,0,1},{0,1,1,0,0,1,1},{1,0,1,1,0,1,1},{1,0,1,1,1,1,1},{1,1,1,0,0,0,0},{1,1,1,1,1,1,1},{1,1,1,1,0,1,1}};

char seg7[30][15];
char display[40][200];

void Set_Segment(int s){
	int row=(2*s)+3,col=s+2;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if((i==0 && j==0) || (i==0 && j==col-1) || (i==row/2 && j==col-1) || (i==row-1 && j==col-1) || (i==row-1 && j==0) || (i==row/2 && j==0)){
			}else{
				if(i==0){
					seg7[i][j]='0';
				}else if(j==col-1 && i<row/2){
					seg7[i][j]='1';
				}else if(j==col-1 && i>row/2){
					seg7[i][j]='2';
				}else if(i==row-1){
					seg7[i][j]='3';
				}else if(j==0 && i>row/2){
					seg7[i][j]='4';
				}else if(j==0 && i<row/2){
					seg7[i][j]='5';
				}else if(i==row/2){
					seg7[i][j]='6';
				}
			}
			//printf("%c",seg7[i][j]);
		}
		//printf("\n");
	}
}

void Set_Display(int s,int digit,int pos){
	//cout<<"digit: "<<digit<<endl;
	int row=(2*s)+3, col=s+2;
	for(int i=0;i<row;i++){
		for(int j=0,k=pos;j<col;j++,k++){
			if(seg7[i][j]=='0'){
				if(digits[digit][seg7[i][j]-48]==1){
					display[i][k]='-';
				}
			}else if(seg7[i][j]=='1'){
				if(digits[digit][seg7[i][j]-48]==1){
					display[i][k]='|';
				}
			}else if(seg7[i][j]=='2'){
				if(digits[digit][seg7[i][j]-48]==1){
					display[i][k]='|';
				}
			}else if(seg7[i][j]=='3'){
				if(digits[digit][seg7[i][j]-48]==1){
					display[i][k]='-';
				}
			}else if(seg7[i][j]=='4'){
				if(digits[digit][seg7[i][j]-48]==1){
					display[i][k]='|';
				}
			}else if(seg7[i][j]=='5'){
				if(digits[digit][seg7[i][j]-48]==1){
					display[i][k]='|';
				}
			}else if(seg7[i][j]=='6'){
				if(digits[digit][seg7[i][j]-48]==1){
					display[i][k]='-';
				}
			}
		}
	}
}

void Print_Display(int s,int len){
	int row=(2*s)+3, col=(len*(s+2))+(len-1);
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(display[i][j]=='-' || display[i][j]=='|'){
				printf("%c", display[i][j]);
			}else{
				printf("%c",display[i][j]);
			}
		}
		printf("\n");
	}
}

int main(){
	freopen("706LCD.in","r",stdin);
	freopen("706LCD.out","w",stdout);
	int s,len,pos;
	char n[15];
	while(scanf("%d",&s)==1){
		if(s==0) break;
		scanf("%s",&n);
		memset(seg7,' ',sizeof(seg7));
		Set_Segment(s);
		memset(display,' ',sizeof(display));
		len=strlen(n);
		pos=0;
		for(int i=0;i<len;i++){
			Set_Display(s,n[i]-48,pos);
			pos+=(s+3);
		}
		//disCol=len*(s+2)+len-1;
		Print_Display(s,len);
		printf("\n");
	}
}
