#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	bool flag[110],newline=false;
	int tCase,n,m,swap1[110],swap2[110],tmp;
	string s[110],tmpS;
	scanf("%d",&tCase);
	while(tCase--){
		if(newline)printf("\n");
		memset(swap1,0,sizeof(swap1));
		memset(swap2,0,sizeof(swap2));
		memset(flag,false,sizeof(flag));
		scanf("%d %d",&n,&m);
		for(int i=0;i<m;i++){
			cin>>s[i];
		}
		for(int loop=0;loop<m;loop++){
			for(int i=0;i<n-1;i++){
				for(int j=i;j<n;j++){
					if(s[loop][i]>s[loop][j]){
						swap1[loop]++;
						swap2[loop]++;
					}
				}
			}
		}
		sort(swap2,swap2+m);
		/*for(int i=0;i<m;i++){
			cout<<swap1[i]<<" "<<swap2[i]<<endl;
		}*/
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				if(swap2[i]==swap1[j] && !flag[j]){
					cout<<s[j]<<endl;
					flag[j]=true;
					break;
				}
			}
		}
		newline=true;
	}
	return 0;
}

/*
Critical I/O
10

7 5
CTGAGCC
GCCACGG
TATGCGT
ATCTCGT
GGCTGTT

7 2
GTAATCG
AGGATAG

5 5
AGATC
TATGT
AACTC
TCCTC
AGCGC

1 3
C
T
T

6 1
ATTCCT

6 3
CCAAGC
TTATGA
AACCCC

8 7
GACGTGTG
AGGCTCCA
AGTGAGGA
GTTTCAGT
ATGTAAAA
GCCAAAAA
CAGCGTTC

3 9
GAC
TAC
CGG
TGG
TTT
CTT
CAA
AAG
TGA

5 8
TAATC
TTACA
GGCCA
*/