/*#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("10368.txt","r",stdin);
	int n1,n2,cx,mini,maxi;
	while(scanf("%d %d",&n1,&n2)==2 && n1 || n2){
		cx=0;
		while(n1 && n2){
			if(n1<n2){
				if(n2%n1==0){
					n2=0;
				}else if(n1*2<=n2){
					n2-=(n1*2);
				}else{
					n2-=n1;
				}
				cx++;
			}else if(n1>n2){
				if(n1%n2==0){
					n1=0;
				}else if(n2*2<=n1){
					n1-=(n2*2);
				}else{
					n1-=n2;
				}
				cx++;
			}else{
				cx++;
				break;
			}
		}
		if(cx%2!=0){
			cout<<"stan"<<endl;
		}else{
			cout<<"olie"<<endl;
		}
	}
}*/

#include <stdio.h>
#include <map>

using namespace std;

map<pair<int, int>, int> m;

int f(int a, int b)
{
        int t;

        if (a > b)
                t = a, a = b, b = t;

        if (a == 0)
                return 1;

        if (m.count(pair<int,int>(a, b)) > 0)
                return m[pair<int,int>(a, b)];

        if ((b % a) == 0) {
                m[pair<int,int>(a, b)] = 1;
                return 1;
        }

        t = b / a;
        t = b - ((t > 2) ? (t - 2) : 1) * a;

        for (; t >= 0; t -= a)
                if (f(a, t) == 0) {
                        m[pair<int,int>(a, b)] = 1;
                        return 1;
                }

        m[pair<int,int>(a, b)] = 0;
        return 0;
}

int main()
{
	freopen("10368.txt","r",stdin);
        int a, b;

        while (scanf("%d %d", &a, &b) == 2 && (a != 0 || b != 0)) {
                m.clear();
                printf(f(a, b) ? "Stan wins\n" : "Ollie wins\n");
        }

        return 0;
}