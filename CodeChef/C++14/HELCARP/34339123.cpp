//https://www.codechef.com/viewsolution/33615251
#include<bits/stdc++.h>
#define lli long long int
#define ld long double
#define pb push_back
#define MAX 1e18
#define mod 1000000007
#define PI 3.14159265358979323846264338327
#define eps 1e-9
using namespace std;
//lli a[10];
bool cmp(pair<lli,string>a,pair<lli,string>b)
{
	return a.first<b.first;
}



int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	lli t, x, y, i, l, h, mid, m, n, j;
	cin>>t;
	while(t--)
	{
		
		
		cin>>n>>m;
		
		lli a[m][n+1],tp[m],q[m];
		memset(a,0,sizeof(a));

		for(i=0;i<m;i++)
		{
			a[i][0]=1;
			cin>>tp[i];
		}

		for(i=0;i<m;i++)
		cin>>q[i];


		for(i=0;i<m;i++)
		{
			vector<lli>v(n+1);
			if(i!=0)
			{
				
				for(j=0;j<min(tp[i],n+1);j++)
				v[j]=a[i-1][j];

				for(j=tp[i];j<=n;j++)
				v[j]=(a[i-1][j]+v[j-tp[i]])%mod;

			}
			
			for(j=1;j<=n;j++)
			{
				if(i==0)
				{
					if((q[i]+1)*tp[i]>j&&j-tp[i]>=0)
					a[i][j]=(a[i][j]+a[i][j-tp[i]])%mod;
				}

				else
				{
					a[i][j]=a[i-1][j];

					x=((q[i]+1)*tp[i]);
					y=j-tp[i];

					if(y>=0)
					{
						x=j-x;
						//cout<<y<<" "<<x<<endl;
						
						a[i][j]=(v[y]+a[i][j])%mod;
						if(x>=0)
						a[i][j]=(a[i][j]-v[x]);

						if(a[i][j]<0)
						a[i][j]+=mod;

					}

					
				}

				//cout<<a[i][j]<<" ";
				
				

			}
			//cout<<endl;
			
		}

		cout<<a[m-1][n]<<endl;


		

	}



}