#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5+1; 
#define FAST ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);srand(time(NULL));
struct node{
  int  a[3];
};
int lz[ 4*N];
int vec[N+1];
  struct node v[4*N];
  void built(int si,int ss,int se){
     if(ss==se)
     {
          v[si].a[0]=1;
          v[si].a[1]=0;
          v[si].a[2]=0;
          return ;
        
     }
     int mid=  (ss+se)/2;
     built(2*si,ss,mid);
     built(2*si+1,mid+1,se);
    for(int i = 0 ; i<3 ;i++)
  v[si].a[i]=v[2*si].a[i]+v[2*si+1].a[i];
    
      
  }
 ll query (int si,int ss,int se,int qs,int qe)
  {
      if(lz[si]>0)
      {
          if(ss!=se){
          lz[2*si]+= lz[si];
          lz[2*si+1]+=lz[si];
          }
          int j=lz[si];
          lz[si]=0;
          j%=3;
        for(int i = 0 ; i<j ;i++)
        {int tmp = v[si].a[2];
            v[si].a[2]=v[si].a[1];
            v[si].a[1]=v[si].a[0];
            v[si].a[0]=tmp;
            
        }
      }
       if(ss>qe||se<qs)
        return 0;
      if(ss>=qs&&se<=qe)
      {
          return v[si].a[0];
      }
      int mid=(ss+se)/2;
      int left = query(2*si,ss,mid,qs,qe);
    int right=query(2*si+1,mid+1,se,qs,qe);
      return  left+right;

  }
  void update(int si,int ss,int se,int qs,int qe)
  {
      
      if(lz[si]!=0)
      {
          ll j=lz[si];
          //j%=3;
          lz[si]=0;
          if(ss!=se){
          lz[2*si]+=j ;
          lz[2*si+1]+=j;
          }
          j%=3;
          //v[si]=make_tuple(g,t,f);
        for(int i = 0 ; i<j ;i++)
        {int tmp = v[si].a[2];
            v[si].a[2]=v[si].a[1];
            v[si].a[1]=v[si].a[0];
            v[si].a[0]=tmp;
            
        }
      }
      
       if(ss>qe||se<qs)
        return ;
        if(ss>=qs&&se<=qe)
        {
            //lz[si]++;
          if(ss!=se){
          lz[2*si]++;
          lz[2*si+1]++;
          }
          for(int i = 0 ; i<1 ;i++)
        {int tmp = v[si].a[2];
            v[si].a[2]=v[si].a[1];
            v[si].a[1]=v[si].a[0];
            v[si].a[0]=tmp;
            
        }
          return ;
          //v[si]=make_tuple(g,t,f);
      }
        
        int mid=(ss+se)/2;
        update(2*si,ss,mid,qs,qe);
        update(2*si+1,mid+1,se,qs,qe);
            for(int i = 0 ; i<3 ;i++)
               v[si].a[i]=v[2*si].a[i]+v[2*si+1].a[i];
    

      
  }
 int main(){
     FAST
     int n;
     cin>>n;
     int b;
     cin>>b;
     built(1,1,n);
     while(b--){
         int q,w,e;
         cin>>q>>w>>e;
         if(q==0)
          update(1,1,n,w+1,e+1);
         else
          cout<<query(1,1,n,w+1,e+1)<<"\n";
     }
     
 }
