#include <bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
//using boost::multiprecision::cpp_int;
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	     cin>>n>>k;
	     vector<string> s(n);
	     
	     for(int i = 0  ; i<n ;i++)
	     {
	         cin>>s[i];
	     }
	     vector<vector<int>> adj(n);
	     for(int i = 0; i<n; i++ )
	     for(int j = 0 ; j<n ;j++)
	     if(abs(i-j)<=k&&s[i][j]=='1')
	     adj[i].push_back(j);
	     vector<int> dist(n);
	     for(int i = 0 ; i<n ;i++)
	     dist[i]=INT_MAX;
	     dist[0]=0;
	    queue<int> q;
	    q.push(0);
	    while(!q.empty())
	    {
	        int x = q.front();
	        
	        for(int i = 0 ; i<adj[x].size();i++)
	        {
	            if(dist[adj[x][i]]>dist[x]+1)
	            {q.push(adj[x][i]);
	            dist[adj[x][i]]=dist[x]+1;
	                
	            }
	        }
	        q.pop();
	    }
	    if(dist[n-1]==INT_MAX)
	    cout<<"-1\n";
	    else
	    cout<<dist[n-1]<<endl;
	}
	return 0;
}
