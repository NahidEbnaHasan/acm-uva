#include<iostream>
#include<cstdio>
#include<vector>
#include<stack>
using namespace std;

vector<int> Graph[6];
stack<int> S;

void DrawHouse(){
	int v,color[6]={0};
	S.push(1);
	//color[1]=1;
	while(!S.empty()){

	}
}


int main(){
	Graph[1].push_back(2);
	Graph[1].push_back(3);
	Graph[1].push_back(5);
	Graph[2].push_back(1);
	Graph[2].push_back(3);
	Graph[2].push_back(5);
	Graph[3].push_back(1);
	Graph[3].push_back(2);
	Graph[3].push_back(4);
	Graph[3].push_back(5);
	Graph[4].push_back(3);
	Graph[4].push_back(5);
	Graph[5].push_back(1);
	Graph[5].push_back(2);
	Graph[5].push_back(3);
	Graph[5].push_back(4);

	DrawHouse();
}