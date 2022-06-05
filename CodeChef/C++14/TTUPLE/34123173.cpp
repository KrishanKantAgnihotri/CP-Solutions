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
//#define INF 0x3f3f3f3f
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
const long long  INF=2000000000000000000;
//make_change(i,fact,diff,f,s);
void make_change(int i ,ll fact[],ll diff[],ll f[],ll s[] )
{ll sum = 0 ; 
      swap(diff[0],diff[i]);
      for(int i = 0 ; i<100 ;i++)
      sum+=i;
      swap(fact[0],fact[i]);
      for(int i = 0 ; i<100 ;i++)
      sum+=i;
      swap(s[0],s[i]);
      for(int i = 0 ; i<100 ;i++)
      sum+=i;
      swap(f[0],f[i]);
      for(int i = 0 ; i<100 ;i++)
      sum+=i;
}
int main()
{fast_io
 int t;
 cin>>t;
 while(t--)
 {
     ll p,q,r,a,b,c;
     ll ans1,ans2,ans3,ans4,final_ans;
     ans1=ans2=ans3=ans4=final_ans=INF;
     cin>>p>>q>>r>>a>>b>>c;
     bool is_equal[3];
     is_equal[0]=false;
     is_equal[1]=false;
     is_equal[2]=false;
     int cnt = 0 ;
     if(p==a)
        is_equal[0]=true,cnt++;
     if(q==b)
        is_equal[1]=true,cnt++;
     if(r==c)
        is_equal[2]=true,cnt++;
        if(cnt==3)
        {

            cout<<0<<endl;
            continue;
        }
        if(cnt==2)
        {

            cout<<1<<endl;
            continue;
        }
        if(a==0&&b==0&&c==0)
        {

            cout<<1<<endl;
            continue;
        }
        //cases for if one is similar or no one is similar
        ll diff[]={INF,INF,INF};
        ll fact[]={INF,INF,INF};
        int cnt2= 0 ; int cnt3 = 0;
        diff[0]=a-p;
        diff[1]=b-q;
        diff[2]=c-r;
      for(int i = 0 ; i<3 ;i++)
      if(diff[i]==0)
      cnt2++;
      if(p!=0 && a%p==0)
      fact[0]=a/p;
      if(q!=0 && b%q==0)
      fact[1]=b/q;
      if(r!=0 && c%r==0)
      fact[2]=c/r;
      for(int i = 0 ;i<3 ;i++)
      if(fact[i]==1)
      cnt3++;
      ll ans6 = INF;
     unordered_map<int,int> u;
     for(int i = 0 ;i<3;i++)
     if(fact[i]!=0&&fact[i]!=INF)
     u[fact[i]]++;
     if(u[fact[0]]==3)
     ans6=1;
if(cnt2==2 || cnt3==2 ||(diff[0]==0 && diff[1]==diff[2] )||(diff[1]==0 && diff[0]==diff[2] )||(diff[2]==0 && diff[1]==diff[0] ))
ans1=1;
if((diff[0]==diff[1] && diff[1]==diff[2] )||(diff[0]==0 && fact[1]==fact[2] && fact[1]!=INF)||(diff[1]==0 &&fact[0]==fact[2] && fact[0]!=INF))
ans1=1;
if((diff[2]==0 && fact[1]==fact[0] && fact[0]!=INF)||(diff[1]==diff[2] && diff[2]==diff[0] && diff[1]!=INF))
ans1=1;
//condition for answer to b 2::
//check for addition addition
ans2=3;
     for(int i = 0 ;i<3 ;i++) 
     if(diff[i]==0)
     ans2= 2;
if(ans2!=2) 
{if(diff[0]==diff[1] || diff[1]==diff[2] || diff[2]==diff[0]||((diff[0]+diff[1])==diff[2])||((diff[0]+diff[2]) == diff[1])||((diff[1]+diff[2])==diff[0]))
    ans2 =2;
}
//check for multiplication multiplication
ans3=3;
cnt2=0,cnt3=0;
for(int i =  0 ; i<3 ;i++)
   { if(fact[i]==1)
        ans3= 2;
   }
   if(ans3!=2)
   {if((fact[0]==fact[1] && fact[0]!=INF)||(fact[1]==fact[2] && fact[1]!=INF)||(fact[2]==fact[0] && fact[0]!=INF))
    ans3 = 2;
   }
   if(ans3!=2)
    {for(int i =0; i<3 ;i++)
   { if(fact[i]==INF)
        ans3 = 3;
       // goto lb;
   }
   if(ans3!=2)
   {if((fact[0]*fact[1])==fact[2])
    ans3 =2;
   if((fact[0]*fact[2]) == fact[1])
     ans3= 2;
   if((fact[1]*fact[2])==fact[0])
     ans3= 2;
   }
    
    
    }
    lb:
    ll sum=0;
    //f->s
    //s->t
ll f[]={p,q,r};
ll s[]={a,b,c};
 ans4 = 3;
//check for multiplication and then addition
for(int i= 0  ; i<3 ;i++)
 { //make_change(i,fact,diff,f,s);
 swap(diff[0],diff[i]);
      for(int i = 0 ; i<100 ;i++)
      sum+=i;
      swap(fact[0],fact[i]);
      for(int i = 0 ; i<100 ;i++)
      sum+=i;
      swap(s[0],s[i]);
      for(int i = 0 ; i<100 ;i++)
      sum+=i;
      swap(f[0],f[i]);
      for(int i = 0 ; i<100 ;i++)
      sum+=i;
  if(fact[1]!=INF )
  {
   if((f[0]*fact[1]+diff[2])==s[0])
     ans4= 2;
     if(ans4==2)
    break;

   if((s[0]-f[0]*fact[1])==(s[2]-f[2]*fact[1]))
     ans4= 2;
  }
  if(ans4==2)
    break;

  if(fact[2]!=INF)
  {
   if((f[0]*fact[2]+diff[1])==s[0])
     ans4= 2;
     if(ans4==2)
    break;

   if((s[0]-f[0]*fact[2])==(s[1]-f[1]*fact[2]))
     ans4= 2;
  }
  if(ans4==2)
    break;

  if(f[0]!=0 && (s[0]-diff[1])%f[0]==0)
   {
     ll z=(s[0]-diff[1])/f[0];
     if((f[2]*z+diff[1])==s[2])
       ans4= 2;
   }
   if(ans4==2)
    break;

   if(f[0]!=0 && (s[0]-diff[2])%f[0]==0)
   {
     ll z=(s[0]-diff[2])/f[0];
     if((f[1]*z+diff[2])==s[1])
       ans4= 2;
   }
   if(ans4==2)
    break;

   if(f[0]!=f[1] && (s[0]-s[1])%(f[0]-f[1])==0)
    {
      ll z=(s[0]-s[1])/(f[0]-f[1]);
      ll y=s[0]-f[0]*z;
      if((f[2]*z+y)==s[2])
       ans4= 2;
    }
    if(ans4==2)
    break;
 }
ll ans5 = INF;
 //addition and multiplication
 ans5=3; 
 for(int i = 0 ;i<3 ;i++)
   {//make_change(i,fact,diff,f,s);
   swap(diff[0],diff[i]);
      for(int i = 0 ; i<100 ;i++)
      sum+=i;
      swap(fact[0],fact[i]);
      for(int i = 0 ; i<100 ;i++)
      sum+=i;
      swap(s[0],s[i]);
      for(int i = 0 ; i<100 ;i++)
      sum+=i;
      swap(f[0],f[i]);
      for(int i = 0 ; i<100 ;i++)
      sum+=i;
   if(fact[1]!=INF)
   {
    if((fact[1]*(f[0]+diff[2]))==s[0])
     ans5= 2;
     if(ans5==2)
  break;
    if(fact[1]!=0 && s[0]%fact[1]==0 && s[2]%fact[1]==0)
     {
      ll y=s[0]/fact[1];
      ll z=s[2]/fact[1];
      if((y-f[0])==(z-f[2]))
       ans5= 2;
     }
   }
   if(ans5==2)
  break;
   if(fact[2]!=INF)
   {
     if((fact[2]*(f[0]+diff[1]))==s[0])
     ans5 = 2;
     if(ans5==2)
  break;
    if(fact[2]!=0 && s[0]%fact[2]==0 && s[1]%fact[2]==0)
     {
      ll y=s[0]/fact[2];
      ll z=s[1]/fact[2];
      if((y-f[0])==(z-f[1]))
       ans5=2;
     }
   }
   if(ans5==2)
  break;
   if((f[0]+diff[2])!=0 && (f[1]+diff[2])!=0)
   {
    if(s[0]%(f[0]+diff[2])==0 && s[1]%(f[1]+diff[2])==0)
        {
          ll y=s[0]/(f[0]+diff[2]);
          ll z=s[1]/(f[1]+diff[2]);
          if(y==z)
           ans5= 2;
        }
   }
   if(ans5==2)
  break;
   if((f[0]+diff[1])!=0 && (f[2]+diff[1])!=0)
   {
    if(s[0]%(f[0]+diff[1])==0 && s[2]%(f[2]+diff[1])==0)
        {
          ll y=s[0]/(f[0]+diff[1]);
          ll z=s[2]/(f[2]+diff[1]);
          if(y==z)
           ans5=2 ;
        }
   }
   if(ans5==2)
  break;
   ll k=__gcd(s[0],__gcd(s[1],s[2]));
   set<ll,greater<ll>> s1;
  for(ll i=1; i<=sqrt(k);i++)
   { if(k%i==0)
        { s1.insert(0-i);
           s1.insert(k/i);
            s1.insert(i);
          s1.insert(0-(k/i));
        }
   }   

  for(auto it : s1)
  {
   ll y=s[1]/(it);
   y-=f[1];
   ll z=s[2]/(it);
   z-=f[2];
   ll x=s[0]/(it);
    x-=f[0];
   
   if(x==y && y==z && z==x)
ans5 =  2;
  }
  if(ans5==2)
  break;
   }
      
final_ans=min({ans1,ans2,ans3,ans4,ans5,ans6});
cout<<final_ans<<endl;
//return final_ans;
      int  cnt_zero=0;
       if(a==0)
       cnt_zero++;
       if(b==0)
       cnt_zero++;
       if(c==0)
       cnt_zero++;
       if(cnt_zero==2)
       {ans2=2;
           if(cnt==1)
           ans2=1;
       }
       if(cnt_zero==1)
       {ans2=3;
       if(cnt==1)
       ans2=3;
           
       }
       ans4 = INF;
       if(a==b&&b==c)
       {
        ans4=2;
       }
// final_ans=min({ans1,ans2,ans3,ans4});
// cout<<final_ans<<endl;
 }
}


