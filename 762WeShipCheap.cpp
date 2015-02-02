#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<vector>
#include<queue>
#include<map>

using namespace std;

//vector<int> graph[1000];
//map<std::string, int> cts1;
//map<int, std::string> cts2;

void BFS(vector<int> graph[1000], map<std::string, int> cts1, map<int, std::string> cts2, string src, string dest) {
    queue<int> nodes;
    map<int, int> mark;
    //vector<int> path;
	int path[1000];

	if(cts1.find(src) != cts1.end()){
		nodes.push(cts1[src]);
		//path.push_back(cts1[src]);
		mark[cts1[src]] = 2147483647;
		while (!nodes.empty()) {
			int vtx = nodes.front();
			for (vector<int>::iterator itr = graph[vtx].begin(); itr != graph[vtx].end(); itr++) {
				if (mark.find(*itr) == mark.end()) {
					nodes.push(*itr);
					//path.push_back(*itr);
					mark[*itr] = vtx;

					//if (*itr == cts1[dest]) break;
				}
				//cout<<*itr;
			}
			nodes.pop();
		}
	}
    if (cts1.find(src) == cts1.end() || cts1.find(dest) == cts1.end() || mark.find(cts1[dest]) == mark.end()) {
        printf("No route\n");
    } else {
        int temp = cts1[dest];
		int pathLen = 0;
		path[pathLen++] = temp;
        do{
            temp = mark[temp];
            path[pathLen++] = temp;
        }while(cts1[src] != temp);
		//path.push_back(cts1[src]);
		for(int i = pathLen - 1; i > 0; i--){
			cout<<cts2[path[i]]<<" "<<cts2[path[i - 1]]<<endl;
		}
    }
}

int main() {
    freopen("762.in", "r", stdin);
    freopen("762.out","w",stdout);
    int n;
	bool newLine = false;
    string ct, ct1, ct2, src, dest;
    while (scanf("%d", &n) == 1) {
        getchar();
		if(newLine) printf("\n");
        vector<int> graph[1000];
        map<std::string, int> cts1;
        map<int, std::string> cts2;

        for (int i = 0, j = 0; i < n; i++) {
            getline(cin, ct);
            ct1 = ct.substr(0, 2);
            if (cts1.find(ct1) == cts1.end()) {
                cts1[ct1] = j;
                cts2[j++] = ct1;
            }
            ct2 = ct.substr(3, 5);
            if (cts1.find(ct2) == cts1.end()) {
                cts1[ct2] = j;
                cts2[j++] = ct2;
            }
            graph[cts1[ct1]].push_back(cts1[ct2]);
            graph[cts1[ct2]].push_back(cts1[ct1]);
        }
        getline(cin, ct);
        src = ct.substr(0, 2);
        dest = ct.substr(3, 5);
        BFS(graph, cts1, cts2, src, dest);
        getline(cin, ct);
		newLine = true;
    }
    /*for(int i = 0; !graph[i].empty(); i++){
            for(vector<int>::iterator itr = graph[i].begin(); itr != graph[i].end(); itr++){
                    cout<<*itr;
            }
            cout<<endl;
    }*/
    return 0;
}