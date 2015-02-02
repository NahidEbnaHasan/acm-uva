#include<stdio.h>
#include<string.h>

int main(){
	freopen("in.txt","r+",stdin);
	int a,b,i,match,pos[15]={0};
	char c;
	double x,y,x1,y1,x2,y2,rec[15][4];
	i=0;
	memset(rec,0.0,sizeof(rec));
	while(scanf("%c",&c) && c!='*'){
		scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
		rec[i][0]=x1;
		rec[i][1]=y1;
		rec[i][2]=x2;
		rec[i][3]=y2;
		i++;
		getchar();
	}
	b=1;
	while(scanf("%lf %lf",&x,&y) && (x!=9999.9 && y!=9999.9)){
		a=0;
		match=0;
		for(int j=0;j<i;j++){
			if(x>rec[j][0] && y<rec[j][1] && x<rec[j][2] && y>rec[j][3]){
				match++;
				pos[a++]=j+1;
			}
		}
		if(match>0){
			for(int k=0;k<a;k++){
				printf("Point %i is contained in figure %i\n",b,pos[k]);
			}
		}else{
			printf("Point %i is not contained in any figure\n",b);
		}
		b++;
	}
}