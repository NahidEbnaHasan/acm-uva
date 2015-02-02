#include <iostream>
#include <cstdio>
#include <string>
#include <map>
#include <vector>
#include <queue>
using namespace std;

void BUILD_BFS(vector<int> graph[50], map<std::string, int> wh1, map<int, std::string> wh2, int src, int dest, int cost){
	queue<int> nodes;
	map<int, int> mark;

	nodes.push(src);
	mark[src] = 2147483647;
	while (!nodes.empty()) {
		int vtx = nodes.front();
		for (vector<int>::iterator itr = graph[vtx].begin(); itr != graph[vtx].end(); itr++) {
			if (mark.find(*itr) == mark.end()) {
				nodes.push(*itr);
				mark[*itr] = vtx;
			}
		}
		nodes.pop();
	}

	if(mark.find(dest) == mark.end()){
		printf("NO SHIPMENT POSSIBLE\n");
	}else{
		int temp = dest;
		int pathLen = 0;
        do{
            temp = mark[temp];
            pathLen++;
        }while(src != temp);
		printf("$%d\n", pathLen*cost*100);
	}
}

int main(){
	//freopen("383.in", "r", stdin);
    //freopen("762.out","w",stdout);
	printf("SHIPPING ROUTES OUTPUT\n");
	int tCase;
	scanf("%d", &tCase);
	for(int ds = 0; ds < tCase; ds++){
		map<std::string, int> wh1;
		map<int, std::string> wh2;
		vector<int> graph[50];
		int m, n, p;
		string whs, legs, leg1, leg2;
		scanf("%d %d %d", &m, &n, &p);
		getchar();
		getline(cin, whs);
		string wh;
		for(int i = 0, j = 0, k = 0; i < m; i++){
			wh = whs.substr(j, 2);
			wh1[wh] = k;
			wh2[k++] = wh;
			j += 3;
		}
		for(int i = 0; i < n; i++){
			//getchar();
			getline(cin, legs);
			leg1 = legs.substr(0, 2);
			leg2 = legs.substr(3, 2);
			graph[wh1[leg1]].push_back(wh1[leg2]);
			graph[wh1[leg2]].push_back(wh1[leg1]);
		}
		printf("\nDATA SET  %d\n\n", ds + 1);
		while(p--){
			int cost;
			string s, src, dest;
			scanf("%d ", &cost);
			getline(cin, s);
			src = s.substr(0, 2);
			dest = s.substr(3, 5);
			BUILD_BFS(graph, wh1, wh2, wh1[src], wh1[dest], cost);
		}
	}
	printf("\nEND OF OUTPUT\n");
}