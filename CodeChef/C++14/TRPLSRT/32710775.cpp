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
//int arr[1000000];
void swap1(int arr[],int a,int b,int c)
{
    int tmp1 =arr[a];
    int tmp2=arr[b];
    int tmp3 = arr[c];
    arr[a]=tmp3;
    arr[b]=tmp1;
    arr[c]=tmp2;
}
int main()
{fast_io
#ifndef ONLINE_JUDGE
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
#endif
int t;
cin>>t;
while (t--)
	{
		int n, k, a, b, c;
		cin >> n >> k;
		int arr[n + 1];
		unordered_map<int, int> z;
		for (int i = 1; i <= n; i++)
		{
			cin >> arr[i];
			z[arr[i]] = i;
		}
		vector<int> primes;
		for(int i = 2 ;i*i<=100000;i++)
		{
		    if(n%i==0)
		    primes.push_back(i);
		}
		vector<pair<pair<int, int>, int>> ans;
		for(int i= 1;i<=n ;i++)
		{int c,b,a;
		    if(arr[i]==i)
		    continue;
		    c=i;
		    b=z[i];
		    a=arr[i];
		    if(a==b)
		    continue;
		    else
		    {
		    z[arr[a]]=b; 
			z[arr[b]]=c;
			z[arr[c]] =a;
			swap(arr[c], arr[b]);
			swap(arr[b], arr[a]); 
		ans.push_back({{a, b}, c});
		
		    }
		    
		}
		bool flag = true;
		
		for (int i = 1; i <= (n); i++)
		{
			if (arr[i] == i)
				continue;
			c = i;
			b = z[i];
			a = arr[i];
			if (a == b )
		  {    a=i+1;
		  if(a==b)
		  a++;
		  while(a<=n&&arr[a]==a)
		  {
		      a++;
		      if(a==b)
		      a++;
		  }
		      if(a==(n+1)) 
		       break; 
		  }
			z[arr[a]]=b; 
			z[arr[b]]=c;
			z[arr[c]] =a;
			swap(arr[c], arr[b]);
			swap(arr[b], arr[a]); 
		ans.push_back({{a, b}, c});
// 		  for(int i=1;i<=n;i++) 
// 		 cout<<arr[i]<<" "; 
// 		  cout<<endl;
	}
	for (int i = 1; i <= n; i++)
		if (arr[i] != i)
		{
			flag = false;
			break;
		}

	if (ans.size() > k)
		flag = false;
	if (flag == false)
		cout << "-1" << endl;
	else
	{
		cout << ans.size() << endl;
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i].first.first << " " << ans[i].first.second << " " << ans[i].second << endl;
	}
}
}