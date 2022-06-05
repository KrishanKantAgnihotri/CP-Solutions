#include<bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

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
//#define show(x) cerr<<x#<<" "<<x<<"\n";

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
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main()
{fast_io
#ifndef ONLINE_JUDGE
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
#endif
int t;
cin>>t;
while(t--)
{
 int n;
 cin>>n;
 map<int,int> u;
 vi a(n),b(n);
set<int> s; 
 map<int,int> one;
 map<int,int> sec;
 for(int i= 0 ; i<n ; i ++)
 cin>>a[i],u[a[i]]++,one[a[i]]++,s.insert(a[i]);
 for(int j = 0 ; j<n ;j++)
 cin>>b[j],u[b[j]]++,sec[b[j]]++,s.insert(b[j]);
bool ok = true;
int min_ele=*(s.begin());
for(auto it : u)
if(it.second&1)
{//cout<<it.first<<" "<<it.second<<"\n";
    ok=false;
    break;
}
 if(ok)
 {ll ans = 0 ;
      vector<int> needs1;
      vector<int> needs2;
      for(auto it: s)
      {//cout<<one[it]<<" "<<sec[it]<<endl;
          if(one[it]==sec[it])
          continue;
          else 
          {if(one[it]<sec[it])
          {
              ll tmp = sec[it]-one[it];
              tmp/=2;
              for(int i = 0 ;i<tmp;i++)
              needs1.push_back(it);
          }
              else
              {ll tmp = one[it]-sec[it];
              tmp/=2;
              for(int i = 0 ;i<tmp;i++)
              needs2.push_back(it);
                  
              }
          }
      }
      sort(all(needs1));
      sort(needs2.rbegin(),needs2.rend());
      for(int i =0 ; i<needs1.size();i++)
      {
          ans+=min({needs1[i],needs2[i],2*min_ele});
      }
      cout<<ans<<endl;
   // cout<<endl;
     
     
    
 }
 else
 cout<<-1<<endl;
 
}
}
