

#include<bits/stdc++.h>
using namespace std;
int rec(string a,string b)
{
    int m=a.length();
    int n=b.length();
    int lcs[4000][4000]={0};
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i-1]==b[j-1])
            {
                lcs[i][j]=1+lcs[i-1][j-1];
            }
            else
            lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
        }
    }
    int i=m,j=n,idx=lcs[m][n];
   // char *lcsans=new char[idx];
    //lcsans[idx]='\0';
  string lcsans ="";
    while(i>0 and j>0)
    {
        if(a[i-1]==b[j-1])
        {
            //lcsans[idx-1]=a[i-1];
            lcsans=a[i-1]+lcsans;
            idx--;
            i--;
            j--;
        }
        else if(lcs[i-1][j]>lcs[i][j-1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    
    cout<<lcsans<<endl;
    return lcs[m][n];
}
int main()
{
    string a,b;
    cin>>a>>b;
    rec(a,b);
    return 0;
}
