//recursive building of segment tree
#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
const int N = 1e5;
struct node{
  int  a[3];
};
struct node tree[4*N];int lazy[4*N];

int arr[N+1];

void build(int si,int ss,int se)
{
    if(ss==se)
    {tree[si].a[0]=1;
    tree[si].a[1]=0;
    tree[si].a[2]=0;
        return;
    }
    // or arr[se]
    int mid =(ss+se)/2;
    // cout<<ss<<" "<<se<<endl;
   build(2*si,ss,mid);
   build(2*si+1,mid+1,se);
  for(int i = 0 ; i<3 ;i++)
  tree[si].a[i]=tree[2*si].a[i]+tree[2*si+1].a[i];
    
}
int querry(int si,int l,int r,int qs,int qe)
{
    if(lazy[si]!=0)
    {
         int dx=lazy[si];
        if(l!=r)
        lazy[si*2]+=lazy[si],lazy[si*2 + 1]+=lazy[si];
        lazy[si]=0;
        dx%=3;
        for(int i = 0 ; i<dx ;i++)
        {int tmp = tree[si].a[2];
            tree[si].a[2]=tree[si].a[1];
            tree[si].a[1]=tree[si].a[0];
            tree[si].a[0]=tmp;
            
        }
    }
    if(qs>r||l>qe)
    return 0 ; 
    if(l>=qs&&r<=qe)
    return tree[si].a[0];
    int mid = (l+r)/2;
    int left = querry(2*si,l,mid,qs,qe);
    int right=querry(2*si+1,mid+1,r,qs,qe);
return left+right;
    
}
void update(int si,int l,int r,int qs,int qe,int val)
{if(lazy[si]!=0)
    {
        int dx=lazy[si];
        if(l!=r)
        lazy[si*2]+=lazy[si],lazy[si*2 + 1]+=lazy[si];
        lazy[si]=0;
        dx%=3;
        for(int i = 0 ; i<dx ;i++)
        {int tmp = tree[si].a[2];
            tree[si].a[2]=tree[si].a[1];
            tree[si].a[1]=tree[si].a[0];
            tree[si].a[0]=tmp;
            
        }
        
    }
    if(qs>r||l>qe)
    return  ; 
    if(l>=qs&&r<=qe)
    {
        int tmp = tree[si].a[2];
            tree[si].a[2]=tree[si].a[1];
            tree[si].a[1]=tree[si].a[0];
            tree[si].a[0]=tmp;
            
        if(l!=r)
        lazy[si*2]+=((val)),lazy[si*2+1]+=((val));
        return ;
    }
    int mid = (l+r)/2;
  update(2*si,l,mid,qs,qe,val);update(2*si+1,mid+1,r,qs,qe,val);
  for(int i = 0 ;i<3 ;i++)
  tree[si].a[i]=tree[2*si].a[i]+tree[2*si+1].a[i];
}
int main()
{ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int n;
n=1000;
cin>>n;
int q = 1000;
//cout<<q<<endl;
cin>>q;
//cout<<n<<endl;

    build(1,1,n);

while(q--)
{
    int a,b,c;
    cin>>a>>b>>c;
    //cout<<b<<" "<<c<<endl;
    if(a==1)
    {b++,c++;
        cout<<querry(1,1,n,b,c)<<endl;
    }
    else
    {   b++,c++;     
        update(1,1,n,b,c,1);
    }
}
// for(int i = 1; i<=4*n ;i++)
// cout<<tree[i]<<" ";
    
}

