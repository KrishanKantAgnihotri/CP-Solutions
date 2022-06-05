#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
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
void solve(int arr[], int n, int k) 
{ 
    
  
  
    int sum = 0, start = 0, end = k - 1; 
  
    // calculate the sum of first k elements. 
    for (int i = 0; i < k; i++) { 
        sum += arr[i]; 
    } 
  
    int ans = sum; 
  
    for (int i = k; i < n + k; i++) { 
  
        // add current element to sum 
        // and subtract the first element 
        // of the previous window. 
        sum += arr[i % n] - arr[(i - k) % n]; 
  
        if (sum > ans) { 
            ans = sum; 
            start = (i - k + 1) % n; 
            end = i % n; 
        } 
    } 
  
    cout << ans << endl; 
   
} 
int main()
{fast_io
#ifndef ONLINE_JUDGE
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
#endif
int t;
cin>>t;
while(t--)
{int n,k;
    
    cin>>n>>k;
    int arr[n+1];
    for(int i = 0 ; i<n ; i++)
    cin>>arr[i];
    solve(arr,n,k);
//cpp_int n;//uncoment for large no like 100 factorial;

}
}
