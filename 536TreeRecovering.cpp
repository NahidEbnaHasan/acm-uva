#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#define MAX 30
using namespace std;

class Node{
private:
	char parent;
	Node *leftChild;
	Node *RightChild;
public:
	Node(void){
		parent='0';
		this->leftChild=NULL;
		this->RightChild=NULL;
	}
	Node(int p){
		parent=p;
		this->leftChild=NULL;
		this->RightChild=NULL;
	}
	void SetParent(int p){
		parent=p;
	}
	char GetParent(){
		return parent;
	}
	void SetLeftChild(Node *n){
		leftChild=n;
	}
	Node* GetLeftChild(){
		return leftChild;
	}
	void SetRightChild(Node *n){
		RightChild=n;
	}
	Node* GetRightChild(){
		return RightChild;
	}
};

class Tree{
public:
	void printTree(Node *n){
		if(n!=NULL){
			printTree(n->GetLeftChild());
			printTree(n->GetRightChild());
			//cout<<n->GetParent();
			printf("%c",n->GetParent());
		}
	}
};
// a fast lookup for inorder's element -> index
// binary tree's element must be in the range of [0, MAX-1]
int mapIndex[MAX];
void mapToIndices(char in[], int size) {
	for (int i = 0; i < size; i++) {
		//assert(0 <= inorder[i] && inorder[i] <= MAX-1);
		mapIndex[in[i]] = i;
	}
}

// precondition: mapToIndices must be called before entry
Node *buildInorderPreorder(char in[], char pre[], int offset, int size) {
	//assert(n >= 0);
	if (size <= 0) return NULL;
	char rootVal = pre[0];
	int i = mapIndex[rootVal]-offset;  // the divider's index
	Node *root = new Node(rootVal);
	root->SetLeftChild(buildInorderPreorder(in, pre+1, offset, i));
	root->SetRightChild(buildInorderPreorder(in+i+1, pre+i+1, offset+i+1, size-i-1));
	return root;
}

// precondition: mapToIndices must be called before entry
Node *buildInorderPostorder(char in[], char post[], int offset, int size) {
	//assert(n >= 0);
	if (size <= 0) return NULL;
	char rootVal = post[size-1];
	int i = mapIndex[rootVal]-offset;  // the divider's index
	Node *root = new Node(rootVal);
	root->SetLeftChild(buildInorderPostorder(in, post, offset, i));
	root->SetRightChild(buildInorderPostorder(in+i+1, post+i, offset+i+1, size-i-1));
	return root;
}

int main(){
	freopen("536.in","r",stdin);
	int len;
	//char inO[MAX],preO[MAX];
	char input[MAX],*token;
	while(gets(input) && input[0]){
		char inO[MAX],preO[MAX];
		token=strtok(input," \t");
		len=strlen(token);
		strcpy(preO,token);
		token=strtok(NULL," \t");
		strcpy(inO,token);

		mapToIndices(inO,len);
		Node *root=buildInorderPreorder(inO,preO,0,len);
		Tree t;
		t.printTree(root);
		//cout<<endl;
		printf("\n");
	}
}