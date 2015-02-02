#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <utility>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int R, C;
int field[1001][1001];

pair<int, int> process_pair(pair<int, int> p, int i){
	if(i == 0){
		p.second--;
	}else if(i == 1){
		p.first--;
	}else if(i == 2){
		p.second++;
	}else{
		p.first++;
	}
	return p;
}

int BFS(int sx, int sy, int dx, int dy){
	//bool destFound = false;
	queue<pair<int,int> > q;
	bool color[1000001] = {0};
	int pathCost[1000001] = {0};
	//map<pair<int,int>, pair<int, int> > mark;
	//map<pair<int, int>, int> pathCost;
	pair<int, int> p1, p2, p3, src, dest, temp;
	//p3.first = 2147483647;
	//p3.second = 2147483647;
	src.first = sx;
	src.second = sy;
	dest.first = dx;
	dest.second = dy;

	p1 = src;
	q.push(p1);
	//mark[p1] = p3;

	while(!q.empty()){
		p1 = q.front();
		int u = field[p1.first][p1.second];
		for(int i = 0; i < 4; i++){
			p2 = process_pair(p1, i);
			if(p2.first >= 0 && p2.first < R && p2.second >= 0 && p2.second < C){
				int v = field[p2.first][p2.second];
				if(v != 2147483647){
					if(!color[v]){
						q.push(p2);
						//mark[p2] = p1;
						color[v] = 1;
						pathCost[v] = pathCost[u] + 1;
						//field[p1.first][p1.second] = '.';
						if(p2 == dest){
							//destFound = true;
							//break;
							return pathCost[v];
						}
					}
				}
			}
		}
		//if(destFound) break;
		q.pop();
	}

	/*int minPath = 0;
	temp = dest;
	do{
		temp = mark[temp];
		minPath++;
	}while(temp != src);
	return minPath;*/
}

int main() {
	//freopen("10653.in","r",stdin);
	//freopen("10653.out","w",stdout);
	int N, n, r, c, sx, sy, dx, dy;
	while(scanf("%d %d",&R, &C) == 2 && R && C){
		for(int i = 0, k = 0; i < R; i++){
			//getchar();
			for(int j = 0; j < C; j++){
				field[i][j] = k++;
			}
		}
		scanf("%d", &N);
		for(int i = 0; i < N; i++){
			scanf("%d %d", &r, &n);
			for(int j = 0; j < n; j++){
				scanf("%d", &c);
				field[r][c] = 2147483647;
			}
		}
		scanf("%d %d", &sx, &sy);
		scanf("%d %d", &dx, &dy);
		printf("%d\n", BFS(sx, sy, dx, dy));
	}
	return 0;
}

//1000 1000
//0 
//0 0 
//999 999 
//0 0

//output
//1998