#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define f(i,n) for(int i = 0;i<n ;i++)
#define ii pair<int,int>
#define vii vector<ii>
#define vi vector<int>
#define vl vector<ll>
#define mii map<int,int>
#define uii unordered_map<int,int>
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define INF 0x3f3f3f3f
#define print(x) cout<<x<<"\n";
#define printv(v) for(auto it : v) cout<<it<<" ";


//#include<boost/multiprecision/cpp_int.hpp>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//(Uncomment when needed and be sure it not give TLE bcoz it requires time)
//#pragma GCC optimize "trapv"//to check integer overflow and gives RE.
//typedef tree<pair<int,int>,null_type, 
//less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>   ordered_set;
//(UNCOMMENT WHEN HAVING LOTS OF RECURSIONS)\
#pragma comment(linker, "/stack:200000000")
//(UNCOMMENT WHEN NEEDED)\
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma GCC optimize("O3")
//uncoment for large int requirement
//using boost::multiprecision::cpp_int;
//using namespace _gnu_pbds;

using namespace std;
const long long int MOD = 1e9+7;
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
//use it with unordered_map<T,T,custom_hash> safe_map

int dx[]={-2,-1,1,2,2,1,-1,-2};
int dy[]={1,2,2,1,-1,-2,-2,-1};

int main()
{fast_io

int t;
cin>>t;
//t = 1;
while(t--)
{
 int board[8][8];
 bool vis[16][16];
 memset(vis,false,sizeof(vis));
 string a,b;
 cin>>a>>b;
 int sx,sy;
 sx=a[1]-'0'-1;
 sy = a[0]-'a';
 int ex,ey;
 ex=b[1]-'0'-1;
 ey = b[0]-'a';
 //cout<<sx<<" "<<sy<<endl;
 //cout<<ex<<" "<<ey<<endl;
 queue<pair<pair<int,int>,int>> q;
 q.push({{sx,sy},0});
 while(!q.empty()){
     int x=q.front().ff.ff;
     int y= q.front().ff.ss;
     int cost = q.front().ss;
     q.pop();
     if(x==ex and y==ey){
         cout<<cost<<endl;
         break;
     }
     if(vis[x][y]==true)
     continue;
     vis[x][y]=true;
     for(int i = 0 ;i<8 ;i++){
         int xx = x + dx[i];
         int yy = y + dy[i];
         if(xx>=0 && yy>=0 && xx<=7 && yy<=7 && vis[xx][yy]==false)
         q.push({{xx,yy},cost+1});
     }
 }
}
}
