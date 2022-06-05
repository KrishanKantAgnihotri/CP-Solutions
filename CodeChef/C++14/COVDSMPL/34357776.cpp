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
//#define endl "\n"
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
{
int t;
cin>>t;
while(t--)
{
    int n,p ; 
    cin>>n>>p;
    int sum = 0 ; 
    int adj[60+1][60+1]={0};
    int f[61][61][61][61];
    memset(f,-1,sizeof(f));
    // for(int i = 1 ; i<=10 ; i++)
    // for(int j = 1 ; j<=10 ; j++)
    // for(int k = 1 ; k<=10 ; k++)
    // for(int l = 1 ; l<=10 ; l++)
    // cout<<f[i][j][k][l]<<" ";
    memset(adj,0,sizeof(adj));
    cout<<1<<" "<<1<<" "<<1<<" "<<n<<" "<<n<<endl;
    cin>>sum;
    f[1][1][n][n]=sum;
    int cnt = 0 ; 
    for(int i = 1; i+1<=n ;i++)
    {
        for(int j = 1; j+1<=n ;j++)
        {int a,b,c,d;
        
        if(f[i][j][n][n]<0)
            {cout<<1<<" "<<i<<" "<<j<<" "<<n<<" "<<n<<endl;
            cin>>a;
                f[i][j][n][n]=a;
            }
            a=f[i][j][n][n];
        
        
            if(f[i+1][j+1][n][n]<0)
            {cout<<1<<" "<<i+1<<" "<<j+1<<" "<<n<<" "<<n<<endl;
            cin>>b;
            f[i+1][j+1][n][n]=b;
            }
            b=f[i+1][j+1][n][n];
            if(f[i+1][j][n][n]<0)
            {cout<<1<<" "<<i+1<<" "<<j<<" "<<n<<" "<<n<<endl;
            cin>>c;
            f[i+1][j][n][n]=c;
            }
            c=f[i+1][j][n][n];
            if(f[i][j+1][n][n]<0)
            {cout<<1<<" "<<i<<" "<<j+1<<" "<<n<<" "<<n<<endl;
            cin>>d;
            f[i][j+1][n][n]=d;
            }
            d=f[i][j+1][n][n];
            if(a+b-(c+d)>0)
            adj[i][j]=1,cnt++;
            if(cnt==sum)
            break;
            
        }
        //adj[i][j+1]
        if(cnt==sum)
        break;
    }
    int x;
       if(cnt!=sum)
       {int prev = 0 ; 
       
           for(int i = n ;i>=1 ; i--)
           { 
              
               int now = f[i][n][n][n];
               adj[i][n]=now-prev;
               if(now-prev>0)
               cnt++;
               prev = now;
               if(cnt==sum)
               break;
               
           
            //   if(f[i][n][i][n]<0)
            //   {cout<<1<<" "<<i<<" "<<n<<" "<<i<<" "<<n<<endl;
            //   cin>>x;
            //     f[i][n][i][n]=x;
            //     }
            //     x=f[i][n][i][n];
            //     prev+=x;
            
            //     if(x>0)
            //     adj[i][n]=1,cnt++;
            //     if(cnt==sum)
            //     break;
           }
            prev = 0 ; 
           for(int i = n ; i>=1 ;i--){
        //     if(f[i][n][i][n]<0)
        //       {cout<<1<<" "<<i<<" "<<n<<" "<<i<<" "<<n<<endl;
        //       cin>>x;
        //       f[i][n][i][n]=x;
        //       }
        //       x=f[i][n][i][n];
        //       if(x>0)
        //       adj[i][n]=1,cnt++;
               if(cnt==sum)
               break;
               int now = f[n][i][n][n];
               adj[n][i]=now-prev;
               if(now-prev>0)
               cnt++;
               prev = now;
               if(cnt==sum)
               break;
           }
       }
    
    cout<<2<<endl;
    for(int  i= 1 ;i<=n ;i++)
    {
        for(int j = 1 ; j<=n ;j++)
        cout<<adj[i][j]<<" ";
        cout<<endl;
    }
    int q;
    cin>>q;
}
}
