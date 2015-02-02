#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <utility>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int H, W;
char field[101][101];

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

void BFS(char ch, int x, int y){
	queue<pair<int,int> > q;
	map<pair<int,int>, bool> mark;
	pair<int, int> p, p1;
	//p = make_pair<int, int>(r, c);
	p.first = x;
	p.second = y;
	q.push(p);
	mark[p] = true;

	while(!q.empty()){
		p = q.front();
		for(int i = 0; i < 4; i++){
			p1 = process_pair(p, i);
			if(p1.first >= 0 && p1.first < H && p1.second >= 0 && p1.second < W){
				if(field[p1.first][p1.second] == ch){
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
}

int main() {
	freopen("10336.in","r",stdin);
	freopen("10336.out","w",stdout);
	char ch;
	int tCases;
	//vector<char> field[10];
	//field[0].push_back('.');
	//field[0].push_back('*');
	//cout<<field[0][0]<<" "<<field[0][1]<<endl;
	//std::cout << "Hello, world!" << std::endl;
	scanf("%d",&tCases);
	for(int loop = 0; loop < tCases; loop++){
		map<char, int> lang;
		map<int, string> sortedLang;
		scanf("%d %d",&H, &W);
		for(int i = 0; i < H; i++){
			getchar();
			for(int j = 0; j < W; j++){
				scanf("%c",&ch);
				field[i][j] = ch;
				lang[ch] = 0;
			}
		}
		for(map<char, int>::iterator itr = lang.begin(); itr != lang.end(); itr++){
			ch = itr->first;
			int rank = 0;
			for(int i = 0; i < H; i++){
				for(int j = 0; j < W; j++){
					if(field[i][j] == ch){
						field[i][j] = '.';
						BFS(ch, i, j);
						rank++;
					}
				}
			}
			itr->second = rank;
			sortedLang[rank] += ch;
		}
		printf("World #%d\n", loop+1);
		for(map<int, string>::reverse_iterator itr = sortedLang.rbegin(); itr != sortedLang.rend(); itr++){
			sort(itr->second.begin(), itr->second.end());
			for(int i = 0; i < itr->second.size(); i++){
				printf("%c: %d\n", itr->second[i], itr->first);
			}
		}
	}
	return 0;
}
