#include <stdio.h>     
#include <stdlib.h>    
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <queue>
#include <deque>
#include <iomanip>
#include <cmath>
#include <set>
#include <stack>
#include <map>
#include <unordered_map>
 
#define FOR(i,n) for(int i=0;i<n;i++)
#define FORE(i,a,b) for(int i=a;i<=b;i++)
#define ll long long 
#define ld long double
#define vi vector<int>
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define iii pair<int,ii>
#define iiii pair<iii,int>
#define pll pair<ll,ll>
#define plll pair<ll,pll>
#define vv vector
#define endl '\n'
 
using namespace std;
 
const int MAXN = 100*1000 + 5;
 
struct DSU{
	int parent[MAXN];
	vv<ii> extraEdge[MAXN];
	DSU(){
		FOR(i,MAXN)parent[i] = i;
	}
	int find(int a){
		if(parent[a] != a)parent[a] = find(parent[a]);
		return parent[a];
	}
	bool isSame(int a,int b){
		return find(a) == find(b);
	}
	void merge(int a,int b){
		if(isSame(a,b)){
			int pa = find(a);
			extraEdge[pa].pb({a,b});
		}else{
			int pa = find(a);
			int pb = find(b);
			if(extraEdge[pa].size() > extraEdge[pb].size()){
				parent[pb] = pa;
				for(auto e: extraEdge[pb])extraEdge[pa].pb(e);	
			}else{
				parent[pa] = pb;
				for(auto e: extraEdge[pa])extraEdge[pb].pb(e);
			}
		}
	}
};	
 
multiset<int> g[MAXN];
void solve(){
	DSU dsu;
	int n,m;
	cin >> n >> m;
	FOR(i,n)g[i].clear();
	FOR(i,m){
		int a,b;
		cin >> a >> b;
		a--;b--;
		dsu.merge(a,b);
		g[a].insert(b);
		g[b].insert(a);
	}
	vi allRootsNotTree;
	vi allRootsTree;
	FOR(i,n){
		if(dsu.find(i) == i){
			if(dsu.extraEdge[i].empty())allRootsTree.pb(i);
			else allRootsNotTree.pb(i);
		}
	}
 
 	vv<ii> allExtraEdges;
	vv<ii> newEdges;
	int s = allRootsNotTree.size();
	if(s > 1){
		FOR(i,s){
			ii ed = dsu.extraEdge[allRootsNotTree[i]].back();
			ii edn = dsu.extraEdge[allRootsNotTree[(i+1)%s]].back();
			//cout << ed.ff << " " << ed.ss << endl;
			//cout << ed.ff << " " << ed.ss << endl;
			g[ed.ff].erase(g[ed.ff].find(ed.ss));
			g[ed.ss].erase(g[ed.ss].find(ed.ff));
			g[ed.ss].insert(edn.ff);
			g[edn.ff].insert(ed.ss);
			if(i == 0)allExtraEdges.pb({edn.ff,ed.ss});
		}
	}
	
 	if(s > 1){
 		FOR(i,s)dsu.extraEdge[allRootsNotTree[i]].pop_back(); // since all these were already used. 	
 	}
	
	
	FOR(i,s){
		for(auto e : dsu.extraEdge[allRootsNotTree[i]]){
			allExtraEdges.pb(e);
		}
	}
	int x = 0;	
	vi listOf1Nodes;
	while(!allExtraEdges.empty()){
		auto e = allExtraEdges.back();
		if(allRootsTree.empty())break;
		int item = allRootsTree.back();allRootsTree.pop_back();
		if(g[item].empty())listOf1Nodes.pb(item);
		else{
			int nitem = *(g[item].begin());
			g[item].erase(g[item].find(nitem));
			g[e.ff].erase(g[e.ff].find(e.ss));
			g[e.ss].erase(g[e.ss].find(e.ff));
			g[nitem].erase(g[nitem].find(item));
			g[item].insert(e.ff);
			g[e.ff].insert(item);
			g[nitem].insert(e.ss);
			g[e.ss].insert(nitem);
 
			allExtraEdges.pop_back();
		}
	}
	for(auto e : listOf1Nodes)allRootsTree.pb(e);
	for(auto e : allExtraEdges){
		if(allRootsTree.size() == 0){
			break;
		}
		if(allRootsTree.size() == 1){
			g[e.ff].erase(g[e.ff].find(e.ss));
			g[e.ss].erase(g[e.ss].find(e.ff));
			int root1 = allRootsTree.back();allRootsTree.pop_back();
			g[e.ff].insert(root1);
			g[e.ss].insert(root1);
			g[root1].insert(e.ff);
			g[root1].insert(e.ss);
			x+=2;
			break;
		}
 
		g[e.ff].erase(g[e.ff].find(e.ss));
		g[e.ss].erase(g[e.ss].find(e.ff));
		int root1 = allRootsTree.back();allRootsTree.pop_back();
		int root2 = allRootsTree.back();allRootsTree.pop_back();
		g[e.ff].insert(root1);
		g[e.ss].insert(root2);
		g[root1].insert(e.ff);
		g[root2].insert(e.ss);
		x+=2;
	}
 
	//cout << "SSGDFg" << endl;
	
	int root1;
	if(allRootsNotTree.empty())root1 = allRootsTree[0];
	else root1 = allRootsNotTree[0];
	for(auto e : allRootsTree){
		if(allRootsNotTree.empty() and e == allRootsTree[0])continue;
		x += 2;	
		g[e].insert(root1);
		g[root1].insert(e);
	}
 
 
 
	vv<ii> allEdges;
	FOR(i,n){
		for(auto e: g[i]){
			if(i < e){
				allEdges.pb({i,e});
			}
		}
	}
	cout << x << " " << allEdges.size() << endl;
	for(auto e: allEdges){
		cout << e.ff+1 << " " << e.ss+1 << endl;
	}
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}