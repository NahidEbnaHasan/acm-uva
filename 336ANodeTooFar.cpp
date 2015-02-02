/* 
 * File:   336AnodeTooFar.cpp
 * Author: Imam Ibn Hasan
 *
 * Created on June 29, 2013, 11:09 PM
 */

#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <queue>
#define MAX 35
using namespace std;

int nodes[MAX];
vector<int> G[MAX];

int GetNodeIndx(int node){
    for(int i=0;i<MAX;i++){
        if(nodes[i]==node){
            return i;
        }
    }
}

int BFS(int src,int ttl){
    int u,v,srcIndx,parentIndx,childIndx,nodeVis,colr[MAX],dis[MAX];
    queue<int> nodeQ;
    memset(colr,0,sizeof(colr));
    memset(dis,0,sizeof(dis));
    srcIndx=GetNodeIndx(src);
    nodeQ.push(src);
    colr[srcIndx]=1; //white for 0
    dis[srcIndx]=0;
    nodeVis=0;
    while(!nodeQ.empty()){
        u=nodeQ.front();
        if(u==src){
            parentIndx=srcIndx;
        }else{
            parentIndx=GetNodeIndx(u);
        }
        for (vector<int>::iterator i=G[parentIndx].begin();i!=G[parentIndx].end();i++){
            v=*i;
            childIndx=GetNodeIndx(v);
            if(colr[childIndx]==0){
                colr[childIndx]=1;
                dis[childIndx]=dis[parentIndx]+1;
                if(dis[childIndx]>ttl){
                    break;
                }
                nodeQ.push(v);
            }
        }
        nodeQ.pop();
        nodeVis++;
    }
    return nodeVis--;
}

int main(){
    freopen("in2.txt","r",stdin);
    int loop=1;
    int e,n1,n2,p1,p2,cx,src,ttl,rNodes,totalNodes;
    bool node1F,node2F;
    while(scanf("%d",&e)==1 && e){
        cx=0;
        for(int i=0;i<e;i++){
            scanf("%d %d",&n1,&n2);
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
        totalNodes=cx;
        while(scanf("%d %d",&src,&ttl)==2){
            if(src==0 && ttl==0){
                break;
            }else{
                rNodes=BFS(src,ttl);
                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",loop++,totalNodes-rNodes,src,ttl);
            }
        }
        for(int i=0;i<MAX;i++){
            G[i].clear();
        }
    }
    return 0;
}

/*Critical Input
2
1 1  1 3
1 1  0 0
*/