#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <utility>
#include <map>
using namespace std;

int r, c;
char field[101][101];

pair<int, int> process_pair(pair<int, int> p, int i){
	if(i == 0){
		p.first--; p.second--;
	}else if(i == 1){
		p.first--;
	}else if(i == 2){
		p.first--; p.second++;
	}else if(i == 3){
		p.second++;
	}else if(i == 4){
		p.first++; p.second++;
	}else if(i == 5){
		p.first++;
	}else  if(i == 6){
		p.first++; p.second--;
	}else{
		p.second--;
	}
	return p;
}

int BFS(int x, int y){
	int adj = 0;
	queue<pair<int,int> > q;
	map<pair<int,int>, bool> mark;
	pair<int, int> p, p1, p2;
	//p = make_pair<int, int>(r, c);
	p.first = x;
	p.second = y;
	q.push(p);
	mark[p] = true;

	while(!q.empty()){
		p = q.front();
		for(int i = 0; i < 8; i++){
			p1 = process_pair(p, i);
			if(p1.first >= 0 && p1.first < r && p1.second >= 0 && p1.second < c){
				if(field[p1.first][p1.second] == '*'){
					adj++;
					if(mark.find(p1) == mark.end()){
						q.push(p1);
						mark[p1] = true;
						field[p1.first][p1.second] = '.';
					}
				}
			}
		}
		q.pop();
	}
	if(adj){
		return 0;
	}
	return 1;
}

int main() {
	freopen("11244.in","r",stdin);
	freopen("11244.out","w",stdout);
	char ch;
	int stars;
	//vector<char> field[10];
	//field[0].push_back('.');
	//field[0].push_back('*');
	//cout<<field[0][0]<<" "<<field[0][1]<<endl;
	//std::cout << "Hello, world!" << std::endl;
	while(scanf("%d %d",&r, &c) == 2 && r && c){
		for(int i = 0; i < r; i++){
			getchar();
			for(int j = 0; j < c; j++){
				scanf("%c",&ch);
				field[i][j] = ch;
			}
		}
		stars = 0;
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				if(field[i][j] == '*'){
					field[i][j] = '.';
					if(BFS(i, j)){
						stars++;
					}
					
				}
			}
		}
		printf("%d\n",stars);
	}
	return 0;
}
