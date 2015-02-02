#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int main(){
	
	int a,n,q,mChimp;
	typedef vector<int> IntVector;
	typedef IntVector::iterator IntVectorIt;
	scanf("%d",&n);
	IntVector fChimp(n);
    IntVectorIt BEG, END,LOW,UP;

	for(a=0;a<n;a++){
		scanf("%d",&fChimp[a]);
	}
	BEG=fChimp.begin();
	END=fChimp.end();

	scanf("%d",&q);
	for(int a=0;a<q;a++){
		scanf("%d",&mChimp);
		LOW=lower_bound(BEG,END,mChimp);
		UP=upper_bound(BEG,END,mChimp);

		if(LOW-BEG<=0){
			printf("X ");
		}else{
			printf("%d ",fChimp[LOW-BEG-1]);
		}
		if(UP-BEG==n){
			printf("X\n");
		}else{
			printf("%d\n",fChimp[UP-BEG]);
		}
	}
	return 0;
}