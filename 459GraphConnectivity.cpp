#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<map>
#include<queue>
#include<vector>
using namespace std;

map<char, int> alpha;
map<int, bool> color1;
int color2[26];

void mark_alpha(){
	char c = 'A';
	for(int i = 0; i < 26; i++){
		alpha[c++] = i;
	}
}

void BFS(vector<int> graph[1000], int src){
	queue<int> q;
	q.push(src);
	color1[src] = true;
	color2[src] = 1;
	while(!q.empty()){
		int u = q.front();
		for(vector<int>::iterator itr = graph[u].begin(); itr != graph[u].end(); itr++){
			int v = *itr;
			if(!color1[v]){
				q.push(v);
				color1[v] = true;
				color2[v] = 1;
			}
		}
		q.pop();
	}
}

int main(){
	freopen("459.in", "r", stdin);
	freopen("459.out", "w", stdout);
	mark_alpha();
	int tCase;
	bool newLine = false;
	char c, s[3];
	scanf("%d", &tCase);
	//getchar();
	gets(s);
	getchar();
	while (tCase--){
		//gets(s);
		//scanf("%s", s);
		//getchar();
		scanf("%c", &c);
		getchar();
		memset(color2,0,sizeof(color2));
		vector<int> graph[1000];
		while(gets(s) && s[0]){
			//printf("%s", s);
			color1[alpha[s[0]]] = false;
			color1[alpha[s[1]]] = false;
			graph[alpha[s[0]]].push_back(alpha[s[1]]);
			graph[alpha[s[1]]].push_back(alpha[s[0]]);
		}
		int subGraph = 0;
		for(map<int, bool>::iterator itr = color1.begin(); itr != color1.end(); itr++){
			if(!itr->second){
				BFS(graph, itr->first);
				subGraph++;
			}
		}
		int len = alpha[c];
		for(int i = 0; i < len + 1; i++){
			if(color2[i] == 0){
				subGraph++;
			}
		}
		color1.clear();
		if(newLine) printf("\n");
		printf("%d\n", subGraph);
		newLine = true;
	}
}