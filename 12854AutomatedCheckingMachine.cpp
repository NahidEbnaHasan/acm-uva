#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;

char* de_blank(char* in ){
	char out[5];
	for(int i = 0, j = 0; i < 9; i++){
		if(in[i] != ' '){
			out[j++] = in[i];
		}
	}
	return out;
}

int bin_to_deci(char * bin){
	int deci = 0;
	int digit[2] = {0, 1};
	for(int i = 0, j = 4; i < 9; i++){
		if(bin[i] != ' '){
			//int t = (int) pow(2, j);
			//int t = bin[i] - 48;
			deci += (bin[i] - 48) * (int) pow(2, j--);
		}
	}
	return deci;
}

int main(){
	freopen("12854.in","r",stdin);
	freopen("12854.out","w",stdout);
	char s[10];
	int n1, n2;
	while(gets(s)){
		//n1 = atoi(de_blank(s));
		n1 = bin_to_deci(s);
		gets(s);
		//n2 = atoi(de_blank(s));
		n2 = bin_to_deci(s);
		//int t = n1 ^ n2;
		if((n1 ^ n2) == 31){
			printf("Y\n");
		}else{
			printf("N\n");
		}
	}
	return 0;
}