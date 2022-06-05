#include<bits/stdc++.h>


#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define mii map<int,int>
#define all(x) x.begin(),x.end()
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define MOD 1e9+7
#define INF 0x3f3f3f3f

using namespace std;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main()
{
string s,t;
cin>>s>>t;
int ans = 0 ; 
for(int i = 0 ;i<s.length();i++)
if(s[i]!=t[i])
ans++;
cout<<ans<<endl;
}
