#include<iostream>
#include<stdio.h>
#include<assert.h>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
#include<vector>
#include<stack>
#define MAX 10010
using namespace std;

int minNodeVal,minPathVal;

vector<int> v[MAX];

int mapIndex[MAX];
void mapToIndices(int inorder[], int size) {
	for (int i = 0; i < size; i++) {
		//assert(0 <= inorder[i] && inorder[i] <= MAX-1);
		mapIndex[inorder[i]] = i;
	}
}

int buildInorderPostorder(int in[], int post[], int offset,int size) {
	//assert(n >= 0);
	if(size==0) return 0;
	int rootVal = post[size-1];
	int i = mapIndex[rootVal]-offset;  // the divider's index
	//Node *root = new Node(rootVal);
	int left=buildInorderPostorder(in, post, offset, i);
	int right=buildInorderPostorder(in+i+1, post+i, offset+i+1, size-i-1);
	if(left>0){
		v[rootVal].push_back(left);
	}
	if(right>0){
		v[rootVal].push_back(right);
	}
	return rootVal;
}

int DFS(int r){
	int color[MAX]={0},path[MAX]={0},pathSum;
	stack<int> S;
	S.push(r);
	//color[r]=1;
	path[r]=r;
	//pathSum=0;
	while(!S.empty()){
		int vtx=S.top();
		//pathSum=path[vtx];
		//minNodeVal=min(minNodeVal,vtx);
		S.pop();
		if(!color[vtx]){
			color[vtx]=1;
			if(v[vtx].size()>0){
				for(vector<int>::reverse_iterator i=v[vtx].rbegin();i!=v[vtx].rend();i++){
					//cout<<*i<<endl;
					path[*i]=*i+path[vtx];
					S.push(*i);
				}
				v[vtx].clear();
			}else{
				if(minPathVal>path[vtx]){
					//minNodeVal=vtx;
					minPathVal=path[vtx];
					minNodeVal=vtx;
				}else if(minPathVal==path[vtx]){
					minPathVal=path[vtx];
					minNodeVal=min(minNodeVal,vtx);
				}
			}
		}
	}
	return minNodeVal;
}

int main(){
	freopen("548.txt","r",stdin);
	freopen("548out.txt","w",stdout);
	int root;
	//int inO[]={3,2,1,4,5,7,6};
	//int postO[]={3,1,2,5,6,7,4};
	//int inO[]={6,2,10,4,8,3,7};
	//int postO[]={6,10,2,8,7,3,4};
	int inO[MAX],postO[MAX],cx;
	char input1[100000],input2[100000],*token;
	while(gets(input1) && input1[0]){
		gets(input2);
		cx=0;
		token=strtok(input1," \t");
		while (token){
			inO[cx++]=atoi(token);
			token=strtok(NULL," \t");
		}
		cx=0;
		token=strtok(input2," \t");
		while (token){
			postO[cx++]=atoi(token);
			token=strtok(NULL," \t");
		}
		mapToIndices(inO,cx);
		root=buildInorderPostorder(inO,postO,0,cx);
		//cout<<DFS(root)<<endl;
		minNodeVal=INT_MAX;
		minPathVal=INT_MAX;
		printf("%d\n",DFS(root));
	}
}