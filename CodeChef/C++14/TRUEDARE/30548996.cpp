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

#define ordered_set tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>   ;

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
int a,b,c,d;

cin>>a;
vi va(a);
for(int i =0;i< a; i++)
cin>>va[i];
cin>>b;
vi vb(b);
for(int i =0;i<b ; i++)
cin>>vb[i];
cin>>c;
vi vc(c);
for(int i =0;i<c ; i++)
cin>>vc[i];
cin>>d;
vi vd(d);
for(int i =0;i<d ; i++)
cin>>vd[i];
bool flag = false;
bool fflag = true;
for(int i = 0 ; i<c ; i++)
{
    for(int j =0; j <a ;j++)
    {
        if(vc[i]==va[j])
        {
            flag = true;
            break;
        }
    }
    if(flag)
    flag = false;
    else
    {fflag = false;
    break;
    }
}
for(int i = 0 ; i<d ; i++)
{
    for(int j =0; j <b ;j++)
    {
        if(vd[i]==vb[j])
        {
            flag = true;
            break;
        }
    }
    if(flag)
    flag = false;
    else
    {fflag = false;
    break;
    }
}

if(fflag)
cout<<"yes\n";
else
cout<<"no\n";

}
}
