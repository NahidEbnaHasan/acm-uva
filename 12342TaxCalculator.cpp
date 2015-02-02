#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

int amount[] = {180000, 300000, 400000, 300000, 2147483647};
double rate[] = {0.00, 0.10, 0.15, 0.20, 0.25};

int calculate_tax(int value){
	int pos, restFlag = 0;
	double tax = 0.00;
	if(value <= amount[0]){
		return 0;
	}else{
		for(int j = 0; j < 4 ; j++){
			value -= amount[j];
			//cout<<value<<endl;
			//getchar();
			tax += ((double)(rate[j] * amount[j]));
			if(value <= amount[j+1]){
				//cout<<tax<<endl;
				//getchar();
				pos = j+1;
				restFlag = 1;
				break;
			}
		}
		if(restFlag){
			tax += ((double)(rate[pos] * value));
		}
		if(tax > 0 && tax <= 2000){
			return 2000;
		}else{
			return ceil(tax);
		}
	}
}

int main(){
	//freopen("12342.in","r",stdin);
	//freopen("12342.out","w",stdout);
	int t, k;
	scanf("%d", &t);
	for(int i = 0; i < t ; i++){
		scanf("%d", &k);
		printf("Case %d: %d\n", i+1, calculate_tax(k));
	}
	return 0;
}