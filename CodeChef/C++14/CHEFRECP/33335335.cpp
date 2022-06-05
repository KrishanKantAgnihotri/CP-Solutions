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
int t,n;

struct a
{
    int y;          //to store integers
    int occ;           //to store freq of integers
};
typedef struct a d;

int main()
{
    cin>>t;
    while(t--)
    {
        int counter=1,flag1=0,flag2=0,ccoun=1;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int k=arr[0];
        for(int j=1;j<n;j++)
        {
            if(arr[j]!=arr[j-1])
            {
                counter++;            //counts number of contiguous blocks
            }
        }
        //cout<<"counter is"<<counter<<"\n";
        d x[counter];
        x[0].y=k;
        int l=1;
        for(int o=1;o<n;o++)
        {
            
            if(arr[o]==arr[o-1])
            {
                ccoun++;             //counts length of contiguous block
            }
            
                if(arr[o]!=arr[o-1]||o==n-1)
                {
                	
                	//cout<<o<<":"<<l<<":ccoun is "<<ccoun<<"\n";
                    x[l-1].occ=ccoun;
                    x[l].y=arr[o];
                    l++;
                    ccoun=1;
                    if(arr[o]!=arr[o-1]&&o==n-1)      //if last number is a block itself
                	{
                		l=counter-1;
                		ccoun=1;
                		x[l].occ=ccoun;
					}
                }
            
        }
        /*for(int aa=0;aa<counter;aa++)
        {
        	cout<<x[aa].y<<","<<x[aa].occ<<"\n";
		}*/
        for(int h=0;h<counter;h++)
        {
            for(int g=h+1;g<counter;g++)
            {
                if(x[g].y==x[h].y)
                {
                    flag1++;          //flag1 is incremented if a number appears more than once
             		//cout<<"\nflag1 is"<<flag1<<"\n";
			    }
                if(x[g].occ==x[h].occ)
                {
                    flag2++;            //flag2 increments if freq is repeated
                	//cout<<h<<","<<g<<":\nflag2 is"<<flag2<<"\n";
				}
            }
            
        }
        if(flag2>0||flag1>0)
        {
            cout<<"NO\n";             
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}
