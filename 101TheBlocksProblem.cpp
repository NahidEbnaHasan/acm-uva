#include<iostream>
#include<cstdio>
#include<string>
#include<stack>
#include<list>
using namespace std;

int main(){
	freopen("in2.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	int n;
	int a,b,c,indxA,indxB;
	int i,j,listSize;
	list<int> l[25];
	list<int>::iterator itr;
	list<int>::reverse_iterator ritr;
	stack<int> stk;
	string action,state;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		l[i].push_back(i);
	}
	while(cin>>action){
		if(action=="quit"){
			break;
		}else{
			scanf("%d",&a);
			cin>>state;
			scanf("%d",&b);
			if(a!=b){
				for(i=0;i<n;i++){
					for(itr=l[i].begin();itr!=l[i].end();itr++){
						if(*itr==a){
							indxA=i;
						}
						if(*itr==b){
							indxB=i;
						}
					}
				}
				if(indxA!=indxB){
					if(action=="move"){
						if(state=="onto"){
							for(ritr=l[indxB].rbegin();ritr!=l[indxB].rend();){
								if(*ritr==b){
									break;
								}
								l[*ritr].push_back(*ritr);
								l[indxB].pop_back();
							}
							for(ritr=l[indxA].rbegin();ritr!=l[indxA].rend();){
								//l[*ritr].push_back(*ritr);
								if(*ritr==a){
									l[indxB].push_back(a);
									l[indxA].pop_back();
									break;
								}
								l[*ritr].push_back(*ritr);
								l[indxA].pop_back();
							}
						}else{
							for(ritr=l[indxA].rbegin();ritr!=l[indxA].rend();){
								//l[*ritr].push_back(*ritr);
								if(*ritr==a){
									l[indxB].push_back(a);
									l[indxA].pop_back();
									break;
								}
								l[*ritr].push_back(*ritr);
								l[indxA].pop_back();
							}
						}
					}else{
						if(state=="onto"){
							for(ritr=l[indxB].rbegin();ritr!=l[indxB].rend();){
								//l[*ritr].push_back(*ritr);
								if(*ritr==b){
									break;
								}
								l[*ritr].push_back(*ritr);
								l[indxB].pop_back();
							}
							for(ritr=l[indxA].rbegin();ritr!=l[indxA].rend();){
								if(*ritr==a){
									stk.push(*ritr);
									l[indxA].pop_back();
									break;
								}
								stk.push(*ritr);
								//c=*ritr;
								l[indxA].pop_back();
								//if(c==a)break;
							}
							while(!stk.empty()){
								l[indxB].push_back(stk.top());
								stk.pop();
							}
						}else{
							for(ritr=l[indxA].rbegin();ritr!=l[indxA].rend();){
								if(*ritr==a){
									stk.push(*ritr);
									l[indxA].pop_back();
									break;
								}
								stk.push(*ritr);
								//c=*ritr;
								l[indxA].pop_back();
								//if(c==a)break;
							}
							while(!stk.empty()){
								l[indxB].push_back(stk.top());
								stk.pop();
							}
						}
					}
				}
				/*cout<<action<<" "<<a<<" "<<state<<" "<<b<<endl;        //debug purpose
				for(i=0;i<n;i++){
					j=0;
					listSize=l[i].size();
					if(listSize==0){
						printf("%d:",i);
					}else{
						printf("%d: ",i);
					}
					for(list<int>::iterator itr=l[i].begin();itr!=l[i].end();itr++){
						if(j==listSize-1){
							printf("%d",*itr);
						}else{
							printf("%d ",*itr);
						}
						j++;
					}
					printf("\n");
				}*/
			}
		}
	}
	for(i=0;i<n;i++){
		j=0;
		listSize=l[i].size();
		if(listSize==0){
			printf("%d:",i);
		}else{
			printf("%d: ",i);
		}
		for(list<int>::iterator itr=l[i].begin();itr!=l[i].end();itr++){
			if(j==listSize-1){
				printf("%d",*itr);
			}else{
				printf("%d ",*itr);
			}
			j++;
		}
		printf("\n");
	}
	return 0;
}

/*
Critical Input Output
25
move 2 over 8
pile 11 onto 18
move 12 onto 24
pile 13 onto 15
pile 22 over 15
move 17 over 11
move 12 over 7
pile 4 onto 17
move 19 over 22
pile 11 over 18
move 21 onto 4
pile 23 onto 9
pile 13 over 15
move 6 over 16
move 21 over 12
move 9 onto 5
move 21 onto 11
move 24 onto 13
move 14 onto 7
pile 18 over 9
pile 1 over 12
move 3 over 13
pile 7 onto 4
pile 14 over 1
move 19 over 1
pile 9 over 20
pile 22 onto 17
pile 2 over 17
move 11 over 1
move 19 onto 15
move 6 onto 15
move 6 onto 22
pile 17 onto 9
move 11 onto 22
pile 19 onto 6
move 7 onto 3
pile 20 onto 3
move 15 onto 8
move 18 onto 21
move 21 onto 21
pile 14 over 4
pile 18 over 16
pile 24 over 9
move 18 over 12
pile 9 onto 2
pile 12 onto 7
move 24 onto 0
move 4 onto 8
pile 18 onto 10
move 3 onto 18
move 18 over 1
pile 6 over 13
pile 3 over 4
pile 17 onto 19
move 20 onto 24
move 22 onto 15
move 5 over 19
pile 19 over 4
move 22 over 17
move 23 over 5
move 24 over 22
pile 15 over 21
move 5 over 11
move 3 over 11
pile 19 over 20
pile 8 onto 22
move 24 over 7
pile 0 over 12
pile 4 onto 2
move 23 onto 18
pile 8 over 6
move 24 onto 10
move 9 over 24
move 15 over 13
pile 9 over 1
pile 1 over 15
pile 20 onto 11
pile 12 over 4
move 9 over 23
move 17 over 11
pile 13 onto 6
move 19 onto 21
move 14 over 21
pile 5 onto 15
pile 9 over 2
move 22 over 20
pile 5 onto 21
pile 22 over 17
move 22 onto 0
move 23 over 15
pile 24 over 23
pile 19 onto 9
pile 19 onto 7
pile 23 onto 4
pile 10 onto 0
move 18 over 4
move 4 onto 21
move 1 over 11
pile 2 over 19
pile 17 onto 9
pile 22 onto 3
pile 11 over 8
move 3 over 3
pile 15 over 8
move 18 over 17
move 13 over 0
move 3 over 24
pile 3 onto 13
pile 2 onto 11
move 7 over 0
move 14 over 11
move 3 over 10
pile 6 over 0
move 24 onto 19
move 3 over 14
pile 22 onto 0
pile 10 onto 9
move 15 over 14
pile 24 onto 4
move 18 onto 10
move 13 over 2
pile 17 onto 24
pile 18 onto 17
pile 7 over 4
pile 1 onto 16
move 10 over 11
move 6 onto 23
move 21 onto 15
pile 15 over 2
pile 14 onto 24
pile 12 over 5
pile 1 over 0
move 3 over 16
pile 22 over 21
move 6 over 1
pile 12 onto 7
pile 12 onto 14
move 10 onto 12
move 5 over 14
pile 12 onto 20
pile 20 over 13
pile 6 onto 6
move 5 onto 24
move 20 over 17
move 23 over 23
pile 7 onto 14
move 21 over 7
pile 18 onto 0
move 24 over 0
pile 18 onto 7
move 17 onto 20
pile 22 onto 19
pile 6 onto 23
move 17 over 7
move 21 onto 7
move 22 onto 24
pile 12 onto 6
move 23 over 4
pile 16 over 6
pile 21 onto 6
move 18 over 13
move 12 over 20
pile 11 onto 2
move 7 onto 1
move 24 over 7
pile 11 over 2
move 13 onto 18
pile 5 onto 19
pile 5 onto 16
pile 18 over 14
pile 22 over 5
pile 18 over 17
move 11 onto 1
move 14 over 18
move 12 onto 4
pile 10 onto 13
move 21 onto 19
move 3 onto 12
move 0 over 23
pile 17 over 10
pile 15 onto 13
move 21 over 5
move 14 onto 8
pile 5 onto 4
pile 10 onto 18
pile 24 onto 20
move 13 over 17
pile 15 onto 21
pile 20 onto 11
pile 7 over 11
pile 20 onto 4
pile 9 onto 22
pile 23 over 8
pile 0 onto 13
pile 9 over 23
move 7 over 22
move 4 over 7
pile 15 over 23
move 12 over 9
pile 23 over 16
move 4 over 22
move 15 onto 21
pile 19 over 21
move 3 onto 1
pile 3 onto 7
pile 9 over 22
pile 16 over 9
move 2 onto 23
pile 6 onto 14
move 9 over 16
move 9 over 0
move 13 over 6
move 22 onto 1
pile 7 onto 12
move 0 onto 6
move 0 over 15
move 19 onto 13
move 20 onto 6
move 12 onto 7
pile 4 onto 21
pile 22 onto 17
move 6 onto 9
move 20 over 7
pile 8 onto 12
move 9 onto 4
pile 21 over 7
move 7 over 13
pile 10 over 10
pile 14 onto 15
move 17 over 16
pile 0 onto 3
move 18 over 11
move 7 over 12
move 13 onto 10
move 12 over 15
pile 8 over 8
pile 2 onto 7
move 1 onto 19
pile 14 over 10
move 18 over 13
pile 24 over 15
move 2 onto 6
move 2 over 7
pile 18 onto 16
move 1 onto 9
pile 4 over 16
move 3 onto 8
move 24 over 5
move 22 onto 0
move 7 onto 12
pile 14 over 18
move 10 onto 21
pile 12 onto 4
pile 2 over 16
move 24 over 12
pile 15 onto 4
move 15 over 1
move 12 over 16
pile 21 over 9
move 15 over 12
move 15 over 20
move 11 onto 19
pile 0 over 1
move 14 onto 13
move 4 over 7
pile 12 onto 4
pile 20 over 19
pile 24 over 19
pile 1 over 15
move 19 onto 8
pile 18 onto 2
move 6 onto 14
move 23 onto 14
pile 8 onto 2
move 5 onto 24
move 10 over 18
pile 21 over 23
move 20 over 2
pile 23 over 11
pile 0 over 0
move 9 over 17
pile 19 over 14
move 8 over 1
pile 4 onto 8
move 16 onto 6
move 17 over 17
pile 6 over 2
pile 18 onto 24
pile 12 onto 8
move 12 onto 23
pile 21 onto 8
pile 1 onto 16
pile 10 onto 5
move 4 over 5
pile 12 over 23
pile 16 over 19
move 1 over 10
move 8 over 14
move 18 onto 13
pile 5 over 10
pile 13 onto 13
move 4 onto 21
move 20 onto 5
pile 4 over 24
pile 19 over 19
move 8 over 23
move 19 onto 12
pile 14 onto 24
move 11 over 17
move 11 onto 24
move 8 over 11
move 23 onto 22
pile 4 over 19
move 9 onto 24
move 12 onto 18
move 8 over 5
move 15 onto 9
pile 19 onto 12
pile 12 over 12
pile 5 over 14
move 7 onto 4
move 17 over 3
move 18 onto 22
move 3 over 11
move 7 onto 0
pile 14 onto 24
pile 23 over 3
pile 7 over 11
pile 21 over 17
pile 19 over 5
pile 8 onto 23
move 6 over 17
pile 6 onto 9
pile 20 onto 19
move 19 onto 21
move 2 over 1
pile 18 onto 15
pile 2 onto 16
pile 0 over 3
pile 13 onto 24
pile 19 over 24
move 17 onto 15
pile 23 onto 12
move 13 over 14
move 4 onto 3
move 13 onto 21
pile 21 over 20
move 8 over 1
pile 20 over 6
move 11 onto 21
pile 0 onto 3
pile 24 onto 16
pile 17 over 21
pile 19 onto 13
pile 7 over 0
move 3 over 4
move 7 over 20
pile 1 over 12
pile 8 onto 9
pile 21 onto 17
pile 10 onto 14
move 14 over 23
pile 1 onto 1
pile 15 over 14
move 4 onto 2
move 9 onto 22
move 6 onto 11
move 19 onto 3
pile 23 onto 18
pile 18 onto 12
pile 20 over 13
pile 18 over 23
pile 20 over 13
pile 17 onto 5
pile 22 onto 23
pile 22 over 3
pile 16 over 22
pile 2 onto 12
move 7 onto 3
pile 7 onto 10
pile 11 over 24
pile 0 onto 9
move 13 onto 3
pile 6 over 15
move 0 onto 10
move 24 onto 8
pile 16 over 4
pile 15 onto 10
pile 17 over 5
move 2 onto 4
move 20 onto 16
move 22 over 3
pile 12 over 1
pile 0 onto 4
pile 0 over 22
pile 20 over 19
move 19 onto 18
move 8 over 9
pile 11 onto 12
pile 7 over 7
move 21 onto 9
pile 24 over 9
move 16 onto 15
move 12 onto 18
pile 10 onto 2
move 16 over 4
pile 10 over 24
pile 20 over 12
pile 11 over 13
pile 9 onto 15
move 18 over 15
move 19 over 14
pile 7 over 13
move 13 onto 0
move 11 onto 1
move 13 onto 18
pile 10 onto 24
move 21 onto 14
move 15 onto 22
pile 7 onto 23
pile 6 onto 18
pile 21 onto 14
pile 8 over 21
move 0 onto 17
pile 8 onto 24
move 24 over 7
move 17 over 23
pile 10 onto 4
move 18 over 15
pile 0 over 14
pile 2 over 3
move 12 over 7
move 1 onto 15
pile 3 onto 5
pile 2 over 19
pile 21 onto 20
move 17 over 8
move 11 over 7
pile 8 onto 3
pile 23 onto 18
move 9 over 18
move 4 onto 3
move 23 onto 7
pile 17 over 21
move 5 onto 12
move 9 over 4
move 23 over 6
pile 13 onto 13
move 9 over 24
move 5 over 11
pile 0 onto 23
pile 2 over 0
pile 9 onto 4
pile 17 over 0
pile 10 over 11
move 12 onto 14
move 20 onto 23
pile 7 over 13
pile 8 onto 4
move 18 over 2
pile 16 over 19
pile 5 over 24
move 14 onto 1
pile 7 over 15
pile 0 onto 24
move 23 over 7
move 19 onto 17
move 3 over 19
pile 10 over 18
move 4 over 5
pile 0 onto 7
pile 13 onto 21
move 9 over 15
pile 11 onto 0
move 16 over 17
pile 4 over 20
pile 5 over 17
pile 8 onto 9
pile 19 over 5
move 22 over 20
pile 10 onto 0
pile 21 over 17
move 24 over 5
pile 14 over 12
pile 3 over 23
move 1 over 7
pile 14 over 22
pile 7 over 5
move 11 onto 23
move 3 over 17
pile 0 over 24
pile 17 over 10
move 16 onto 14
pile 10 onto 11
move 5 over 15
move 6 onto 16
move 6 onto 8
pile 24 onto 1
pile 16 onto 15
move 9 onto 19
move 6 onto 11
move 10 over 22
pile 11 onto 20
pile 2 onto 8
move 18 onto 11
pile 17 onto 21
move 15 over 21
move 0 over 20
move 5 over 2
move 15 over 0
move 9 over 11
move 10 onto 20
move 20 over 1
pile 11 over 0
move 14 onto 24
pile 2 over 3
pile 8 over 0
pile 24 onto 2
pile 10 onto 1
pile 4 onto 24
pile 24 onto 3
move 1 onto 14
pile 9 over 16
pile 1 over 9
pile 13 onto 21
move 15 onto 9
pile 6 over 0
pile 3 over 0
move 8 onto 14
move 19 over 19
pile 7 onto 2
move 22 over 17
pile 15 over 20
pile 17 onto 24
pile 2 onto 8
move 13 over 13
pile 8 over 14
move 19 over 5
move 20 onto 9
pile 18 onto 13
move 17 onto 4
move 7 over 18
pile 13 over 13
pile 6 onto 21
move 19 onto 24
pile 14 over 20
pile 8 over 19
move 20 over 4
move 14 onto 14
pile 10 over 1
pile 18 onto 13
move 20 onto 1
move 6 over 19
pile 20 onto 6
pile 10 onto 9
pile 23 onto 7
pile 5 over 20
pile 13 onto 16
pile 15 over 15
move 18 onto 11
pile 19 onto 1
move 13 onto 1
move 0 over 22
move 4 over 6
pile 24 over 17
move 14 over 1
move 11 onto 22
pile 15 over 17
pile 8 over 9
move 22 over 3
pile 6 over 19
move 3 onto 0
pile 5 onto 21
pile 17 over 19
pile 4 over 3
move 19 over 11
pile 8 over 8
pile 13 onto 23
move 22 onto 5
move 3 over 8
move 3 over 7
pile 0 over 7
pile 8 over 2
move 11 over 1
pile 23 over 6
move 1 onto 1
move 17 over 10
pile 0 onto 0
pile 12 over 6
move 1 over 3
move 23 onto 18
pile 7 onto 14
move 4 onto 7
move 19 over 19
pile 1 onto 3
move 11 over 10
move 7 onto 9
pile 23 onto 14
pile 5 onto 19
pile 8 onto 10
move 5 over 21
pile 0 over 17
move 0 over 14
move 17 onto 6
pile 8 over 14
pile 14 over 9
pile 16 onto 6
pile 13 onto 10
move 24 over 13
move 2 onto 20
pile 12 over 4
move 4 onto 17
move 12 onto 4
pile 20 onto 22
pile 24 onto 24
pile 18 over 11
move 7 over 9
move 18 onto 21
pile 13 onto 16
move 19 over 11
pile 8 onto 10
move 15 onto 12
pile 23 over 17
pile 6 onto 5
move 23 over 10
move 9 over 2
move 6 over 0
pile 5 over 21
pile 14 onto 10
move 13 over 19
pile 16 over 20
pile 18 over 4
pile 0 over 13
move 13 onto 9
pile 24 over 10
move 13 over 23
pile 12 over 22
pile 7 over 10
move 11 onto 15
move 14 over 24
pile 9 onto 21
pile 18 over 0
pile 17 onto 18
move 3 onto 1
move 19 onto 13
move 9 onto 19
move 7 onto 5
pile 20 over 0
pile 4 over 13
pile 0 over 3
pile 18 over 19
move 22 over 4
move 18 onto 14
pile 20 over 23
pile 9 onto 0
pile 23 onto 4
pile 6 onto 13
pile 19 over 4
move 20 onto 3
move 1 onto 11
pile 14 onto 15
pile 16 over 1
pile 3 onto 16
move 15 over 9
pile 17 onto 4
move 8 over 7
move 19 over 1
pile 17 over 1
pile 5 over 19
pile 23 onto 18
move 9 over 3
pile 13 over 2
move 18 over 24
pile 20 over 21
pile 14 over 8
move 4 over 14
pile 7 over 15
pile 21 onto 10
move 3 onto 8
move 23 over 8
pile 16 over 0
move 21 onto 24
pile 21 onto 3
pile 2 onto 18
move 20 over 12
pile 11 onto 18
pile 16 onto 24
move 18 over 9
move 7 onto 11
pile 20 over 21
move 21 over 17
pile 23 over 17
pile 3 over 10
move 9 onto 13
move 24 over 9
move 4 over 18
pile 17 onto 4
move 4 onto 19
pile 1 onto 6
move 4 over 2
move 20 onto 21
pile 2 over 1
move 7 over 7
pile 10 onto 21
move 3 over 2
pile 9 onto 15
move 23 onto 10
move 2 over 13
pile 24 over 13
move 4 over 4
move 17 over 3
pile 2 over 2
pile 0 over 4
pile 19 over 15
pile 15 over 23
pile 24 onto 21
pile 4 onto 18
pile 12 over 1
pile 9 onto 24
move 6 over 8
move 11 over 17
move 9 over 21
move 7 onto 0
pile 10 over 20
pile 14 onto 8
pile 18 onto 2
move 5 onto 7
move 4 onto 16
move 19 over 21
pile 13 onto 0
move 23 onto 7
pile 18 onto 7
pile 3 onto 0
pile 6 onto 10
pile 11 onto 1
move 2 over 23
move 15 onto 10
pile 12 over 4
pile 13 onto 4
pile 3 onto 24
move 4 onto 16
pile 21 over 8
pile 4 onto 23
move 20 over 3
move 3 over 7
pile 22 over 18
move 11 over 5
pile 8 onto 21
pile 17 onto 1
pile 20 over 24
pile 21 onto 2
pile 23 over 10
pile 3 onto 7
move 4 over 22
pile 11 onto 14
pile 3 over 10
pile 22 onto 8
move 7 over 12
pile 22 onto 21
move 0 onto 24
pile 13 onto 2
move 5 over 5
move 11 onto 10
move 8 onto 13
pile 8 onto 11
pile 16 onto 2
pile 8 over 20
pile 7 over 13
pile 15 onto 11
move 16 onto 15
move 23 onto 16
move 2 over 19
pile 9 over 16
pile 22 over 2
pile 24 over 15
move 21 onto 13
move 19 onto 4
pile 21 over 11
pile 8 onto 17
pile 20 onto 3
move 16 over 0
pile 4 over 6
pile 4 onto 18
pile 7 over 12
pile 12 over 15
pile 7 onto 15
move 22 onto 5
move 6 onto 7
move 11 onto 23
move 2 over 14
pile 15 over 23
pile 5 over 8
pile 6 onto 4
pile 6 onto 5
move 22 over 8
pile 22 over 22
pile 3 onto 4
pile 2 onto 6
pile 19 over 16
pile 3 onto 20
pile 22 over 23
pile 19 onto 0
move 24 onto 9
pile 6 over 23
pile 22 onto 10
move 24 onto 20
move 15 onto 20
pile 18 onto 22
move 4 onto 5
pile 16 over 21
pile 17 onto 14
pile 16 over 17
move 22 over 12
pile 23 over 16
move 5 over 17
pile 13 over 7
pile 21 onto 17
pile 24 onto 15
move 20 onto 8
move 4 over 16
move 15 onto 3
move 9 onto 22
pile 7 over 2
move 0 onto 16
move 1 onto 14
pile 12 onto 13
pile 23 onto 18
move 18 over 20
move 21 onto 7
move 23 onto 24
move 14 onto 23
move 2 onto 1
move 22 over 14
pile 1 over 8
move 15 onto 19
move 17 onto 6
pile 21 onto 19
pile 23 over 21
pile 11 over 0
move 20 over 5
move 1 onto 19
move 5 over 4
pile 16 over 7
pile 4 over 6
pile 24 onto 24
move 16 onto 22
pile 1 onto 11
move 15 over 16
move 16 over 18
move 23 onto 21
move 21 over 19
pile 5 onto 2
move 22 over 3
move 22 over 4
pile 11 over 18
pile 23 onto 1
pile 21 onto 20
pile 24 over 12
pile 10 over 13
pile 18 over 22
pile 0 onto 22
move 22 over 8
pile 12 over 3
pile 1 over 12
pile 2 onto 1
pile 0 over 18
pile 0 onto 23
pile 23 onto 4
move 8 over 12
pile 24 onto 3
move 14 over 13
pile 9 onto 1
pile 20 over 14
move 18 over 15
move 14 onto 7
pile 18 onto 15
move 1 onto 17
move 5 over 8
pile 1 over 16
pile 21 over 14
move 16 onto 1
move 10 over 14
move 15 onto 5
pile 3 onto 17
pile 11 onto 13
pile 21 onto 11
pile 21 over 16
move 11 onto 12
move 9 over 12
pile 4 over 14
pile 21 over 22
move 6 onto 4
pile 15 onto 8
move 24 onto 11
pile 8 onto 11
pile 16 over 16
pile 10 over 24
pile 9 over 22
pile 15 over 11
pile 10 over 7
pile 14 onto 14
move 5 onto 15
pile 4 over 14
move 12 over 11
move 0 onto 22
pile 20 over 14
pile 17 over 17
move 19 onto 9
pile 2 onto 5
pile 24 onto 24
pile 20 over 24
pile 0 over 2
move 23 onto 7
move 22 over 13
move 9 onto 7
move 16 onto 21
move 1 over 13
move 3 over 5
pile 20 over 7
pile 12 over 8
pile 14 over 23
move 23 onto 7
pile 8 over 7
move 8 onto 12
pile 15 onto 23
move 10 over 11
pile 6 over 22
pile 0 over 5
move 19 onto 8
move 10 onto 4
pile 16 over 1
pile 13 onto 22
pile 1 over 11
pile 20 over 2
pile 6 onto 23
move 8 onto 0
move 5 onto 22
move 15 over 21
pile 12 over 13
move 8 onto 7
move 18 over 7
move 10 onto 1
move 2 onto 18
move 5 over 23
pile 24 onto 17
pile 15 onto 5
pile 4 onto 24
move 1 over 6
pile 1 onto 0
pile 1 onto 13
move 3 onto 2
move 0 onto 18
pile 2 onto 23
move 24 over 18
move 23 onto 22
move 18 onto 17
pile 21 over 1
pile 22 over 5
move 12 onto 4
move 11 over 14
pile 21 onto 16
move 2 onto 9
pile 10 onto 1
pile 15 onto 6
move 21 over 0
move 18 over 12
pile 16 over 24
move 6 over 22
move 24 over 21
pile 15 onto 1
move 0 over 6
move 20 onto 8
move 21 over 5
pile 10 onto 16
pile 8 onto 23
move 10 onto 8
move 15 onto 22
move 3 over 13
pile 9 over 9
pile 8 onto 20
pile 19 onto 1
move 12 over 20
pile 16 onto 9
pile 3 onto 14
move 12 onto 15
pile 2 onto 0
move 7 onto 21
pile 19 onto 19
pile 15 onto 19
pile 9 onto 21
pile 1 onto 0
move 4 over 6
move 4 over 0
pile 15 onto 10
move 0 onto 22
pile 13 onto 14
move 24 onto 11
pile 14 onto 6
pile 24 onto 11
move 15 over 24
quit




0:
1: 1
2: 2
3: 3
4: 4
5: 5 22 0
6: 6 14 13
7: 7
8:
9:
10: 10
11: 11 24 15
12: 12
13:
14:
15:
16:
17: 17
18: 18
19: 19
20: 20 8
21: 21 9 16
22:
23: 23
24:
*/