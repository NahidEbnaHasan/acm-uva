#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<map>
using namespace std;

map<char, double> wChemSym;

void map_chemical_weight(){
	wChemSym['C'] = 12.01;
	wChemSym['H'] = 1.008;
	wChemSym['O'] = 16.00;
	wChemSym['N'] = 14.01;
}

int main(){
	//freopen("1586.in", "r", stdin);
	//freopen("1586.out", "w", stdout);
	int t;
	char s[90];
	scanf("%d", &t);
	map_chemical_weight();
	while(t--){
		scanf("%s", &s);
		int len = strlen(s);
		double res = 0.0;
		char tempC,n[3] = {'\0'};
		n[0] = '1';
		for(int i = 0, j = 0; i < len; i++){
			if((s[i] == 'C' || s[i] == 'H' || s[i] == 'O' || s[i] == 'N') && i == 0){
				tempC = s[i];
			}else if((s[i] == 'C' || s[i] == 'H' || s[i] == 'O' || s[i] == 'N') && i != 0){
				res += wChemSym[tempC] * atof(n);
				n[0] = '1';
				n[1] = '\0';
				n[2] = '\0';
				tempC = s[i];
				j = 0;
			}else{
				n[j++] = s[i];
			}
		}
		res += wChemSym[tempC] * atof(n);
		printf("%.3lf\n", res);
	}
	return 0;
}