#include<iostream>
#include<sstream>
#include<limits.h>
#include<vector>
#include<stack>
using namespace std;

/*int main(){
cout<<sizeof(long long)<<endl;
cout<<numeric_limits<unsigned long long>::max()<<endl;
stringstream ss;
ss<<10;
string s=ss.str();
}*/


/*#include <iostream>
using namespace std;

#include <windows.h>
#include <Lmcons.h>

int main(){
CHAR name[ UNLEN + 1 ]={0};
DWORD size=UNLEN+1;

if (GetUserNameA(name,&size)){
string uName=string (name);
//string s="bal";
//s.append(name);
int l=uName.length();
for(int i=0;i<l;i++){
cout<<uName[i];
}
}else{
cout<<"Hello, unnamed person"<<endl;
}
return 0;
}*/

/*#include<stdio.h>

int nCr(int n,int r){
if(r==1){
return n;
}else if(n==r){
return 1;
}else{
return nCr(n-1,r)+nCr(n-1,r-1);
}
}

int main(){
printf("%d",nCr(4,3));
}*/

/*#include<iostream>
#include<map>
using namespace std;

int main(){
/*char c;
map<char,int> alph;
for(int i=0;i<5;i++){
alph['A'+i]=10+i;
}
while(scanf("%c",&c)==1){
if(alph.find(c)!=alph.end()){
cout<<alph[c]<<endl;
}
}*/
/*int n;
map<int,int> m;
m[2147483647]=-1;
n=2147483647;
cout<<m[n]<<endl;
}*/

/*#include<iostream>
using namespace std;

int fact(int n){
int f[10000];
if(n==0 || n==1){
return 1;
}else{
//f[0]=1;
f[1]=1;
for(int i=2;i<=n;i++){
f[i]=f[i-1]*i;
}
return f[n];
}
}

int nPr(int n,int r){
return fact(n)/fact(n-r);
}

int main(){
int n,r;
while(scanf("%d %d",&n,&r)==2){
printf("%d\n",nPr(n,r));
}
}*/

/*#include<iostream>
using namespace std;

int func(int n){
printf("%d\n",n);
if(n>1){
return func(n-1)+func(n+1);
}
}

int main(){
func(10);
}*/
/*#include<iostream>
#include<list>
using namespace std;

int main(){
list<int> l[2];
list<int>::iterator itr;
list<int>::reverse_iterator ritr;
for(int i=0;i<5;i++){
l[1].push_back(i);
}
for(ritr=l[1].rbegin();ritr!=l[1].rend();itr++){
cout<<*ritr<<endl;
if(*ritr==2){
l[1].insert(itr,10);
}
}
system("PAUSE");
}*/
// Bubble sort
/*void BubbleSort(int* a,int n){
int tmp;
for(int i=0;i<n-1;i++){
for(int j=i;j<n;j++){
if(a[i]>a[j]){
tmp=a[i];
a[i]=a[j];
a[j]=tmp;
}
}
}
}

int main(){
int a[10]={5,9,10,3,4,1,8,2,6,7};
BubbleSort(a,10);
for(int i=0;i<10;i++){
printf("%d ",a[i]);
}
printf("\n");
}*/

/*#include<iostream>
#include<cstdio>

int main(){
char s[10];
//scanf("%s",&s);
gets(s);
for(int i=0;i<10;i++){
if(s[i]==0){
cout<<"bal"<<endl;
}
}
}*/

/*int main(){
int i, n=20;
for (i=0; i+n; i--)
{
cout << "x" << endl;
}
}*/

/*int fibonacchi(int n){
if(n==0){
return 0;
}else if(n==1){
return 1;
}else{
return fibonacchi(n-2)+fibonacchi(n-1);
}
}

int main(){
cout<<fibonacchi(5)<<endl;
cout<<3+3*3-3+3<<endl;
}*/

/*
//recursive factorial
int FactRec(int n){
if(n== 0 || n==1){
return 1;
}else{
return n*FactRec(n-1);
}
}

//recursive npr
int nPrRec(int n,int r){
return FactRec(n)/FactRec(n-r);
}
//recursive ncr
int nCrRec(int n,int r){
return FactRec(n)/(FactRec(r)*FactRec(n-r));
}

int main(){
cout<<FactRec(5)<<endl;
cout<<nPrRec(5,2)<<endl;
cout<<nCrRec(4,3)<<endl;
}*/

//Pure Random Number Generator
/*#include<time.h>

int main(){
int loop=10;
srand(time(0));
while(loop--){
printf("%d\n",rand()%20);
}
}*/

//string tokenizing
/*#include<string>

int main(){
string s="this is	a	string";
size_t pos;
if(pos=s.find_first_of(" ")){
cout<<pos<<endl;
}else if(pos=s.find_first_of("\t")){
cout<<pos<<endl;
}
}*/

/*int main(){
char c;
char ch[]={"nx"};
if(getchar()==ch[0] || getchar()==ch[1]){
printf("right");
}
printf("%c",ch[0]);
}*/

/*int main(){
int i;
for(i=0;i<=6;i++);{printf("%d",i);}
}*/
/*vector<int> v[256];
const int MAX = 256;
// a fast lookup for inorder's element -> index
// binary tree's element must be in the range of [0, MAX-1]
int mapIndex[MAX];
void mapToIndices(int inorder[], int n) {
for (int i = 0; i < n; i++) {
//assert(0 <= inorder[i] && inorder[i] <= MAX-1);
mapIndex[inorder[i]] = i;
}
}

int buildInorderPostorder(int in[], int post[], int n, int offset) {
//assert(n >= 0);
if(n==0) return -1;
int rootVal = post[n-1];
int i = mapIndex[rootVal]-offset;  // the divider's index
//Node *root = new Node(rootVal);
int left=buildInorderPostorder(in, post, i, offset);
int right=buildInorderPostorder(in+i+1, post+i, n-i-1, offset+i+1);
if(left>0){
v[rootVal].push_back(left);
}
if(right>0){
v[rootVal].push_back(right);
}
//v[rootVal].push_back( buildInorderPostorder(in, post, i, offset));
//v[rootVal].push_back(buildInorderPostorder(in+i+1, post+i, n-i-1, offset+i+1));
return rootVal;
}
int minNodeVal=INT_MAX;
int minPathVal=INT_MAX,path[256],pathSum;
int DFS(int r){
int color[256]={0};
stack<int> S;
S.push(r);
//color[r]=1;
path[r]=r;
pathSum=0;
while(!S.empty()){
int vtx=S.top();
pathSum=path[vtx];
minNodeVal=min(minNodeVal,vtx);
S.pop();
if(!color[vtx]){
color[vtx]=1;
if(v[vtx].size()>0){
for(vector<int>::reverse_iterator i=v[vtx].rbegin();i!=v[vtx].rend();i++){
//cout<<*i<<endl;
path[*i]=*i+path[vtx];
S.push(*i);
}
}else{
if(minPathVal>path[vtx]){
//minNodeVal=vtx;
minPathVal=path[vtx];

}else if(minPathVal==path[vtx]){
minPathVal=path[vtx];
minNodeVal=vtx;
}
}
}
}
return minNodeVal;
}

int main(){
int root;
//int inO[]={3,2,1,4,5,7,6};
//int postO[]={3,1,2,5,6,7,4};
char name[10];
scanf("%s %d",&name,&root);
cout<<name<<" "<<root<<endl;
int inO[10]={6,2,10,4,8,3,5};
int postO[10]={6,10,2,8,7,3,4};
mapToIndices(inO,7);
root=buildInorderPostorder(inO,postO,7,0);
cout<<DFS(root)<<endl;
}*/

/*#include<bitset>
#include<time.h>
bitset<INT_MAX> isPrime;


void sieve(int l,int h){
int i,j,k,root=sqrt(h);
isPrime[0]=isPrime[1]=1;
for(i=2;i<root;i++){
if(!isPrime[i]){
for(j=i;(k=j*i)<h;j++){
//if(!isPrime[k]){
isPrime[k]=1;
//}
}
}
//cout<<i<<endl;
}
}

int GCD(int a,int b){
if(a%b==0) return b;
else return GCD(b,a%b);
}

int main(){
time_t start,end;
time(&start);
sieve(0,10000000);
time(&end);
cout<<difftime(end,start)<<endl;
/*int rem,cx=0,n=9;
for(int i=1;i<n;i++){
/*rem=GCD(i,n);
if(rem!=1 && rem!=i){
cx++;
}*/
/*rem=n%i;
if(rem<2){
cx++;
}
}
cout<<n-cx<<endl;
}*/