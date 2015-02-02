#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <queue>
#define MAX 500
using namespace std;

string nodes[MAX];
vector<string> G[MAX];

int GetNodeIndx(string node){
    for(int i=0;i<MAX;i++){
        if(nodes[i]==node){
            return i;
        }
    }
}

void BFS(string src,string des){
	string u,v,path[MAX];
    int srcIndx,parentIndx,childIndx,nodeVis,colr[MAX],dis[MAX];
    queue<string> nodeQ;
    memset(colr,0,sizeof(colr));
    memset(dis,0,sizeof(dis));
    srcIndx=GetNodeIndx(src);
    nodeQ.push(src);
    colr[srcIndx]=1; //white for 0
    dis[srcIndx]=0;
    while(!nodeQ.empty()){
        u=nodeQ.front();
        if(u==src){
            parentIndx=srcIndx;
        }else{
            parentIndx=GetNodeIndx(u);
        }
        for (vector<string>::iterator i=G[parentIndx].begin();i!=G[parentIndx].end();i++){
            v=*i;
            childIndx=GetNodeIndx(v);
            if(colr[childIndx]==0){
                colr[childIndx]=1;
                //dis[childIndx]=dis[parentIndx]+1;
				path[childIndx]=parentIndx;
                nodeQ.push(v);
            }
        }
        nodeQ.pop();
        nodeVis++;
    }
}

int main(){
    freopen("in2.txt","r",stdin);
    int loop=1;
	string s,n1,n2;
    int e,p1,p2,cx,src,ttl,rNodes,totalNodes;
    bool node1F,node2F;
    while(scanf("%d",&e)==1){
        cx=0;
        for(int i=0;i<e;i++){
            cin>>n1>>n2;
            node1F=false;
            node2F=false;
            if(n1==n2){
                for(int i=0;i<cx;i++){
                    if(nodes[i]==n1 && !node1F){
                        p1=i;
                        node1F=true;
                    }
                }
                if(!node1F){
                    p1=cx;
                    nodes[cx++]=n1;
                    node1F=false;
                    //G[p1].push_back(n1);
                }
            }else{
                for(int i=0;i<cx;i++){
                    if(nodes[i]==n1 && !node1F){
                        p1=i;
                        node1F=true;
                    }
                    if(nodes[i]==n2 && !node2F){
                        p2=i;
                        node2F=true;
                    }
                }
                if(!node1F){
                    p1=cx;
                    nodes[cx++]=n1;
                    node1F=false;
                    //G[p1].push_back(n2);
                }
                G[p1].push_back(n2);
                if(!node2F){
                    p2=cx;
                    nodes[cx++]=n2;
                    node2F=false;
                    //G[p2].push_back(n1);
                }
                G[p2].push_back(n1);
            }
        }
        //totalNodes=cx;
		cin>>n1>>n2;
		BFS(n1,n2);
        for(int i=0;i<MAX;i++){
            G[i].clear();
        }
    }
    return 0;
}