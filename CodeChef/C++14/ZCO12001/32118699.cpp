#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int main()
{
	int t,a=0,b=0,c=0,d=0;
	int w=0,x=0,y=0,z=0;
	cin>>t;
	int s[t];
	stack<int> p;
	stack<int> p1;
	for(int i=0;i<t;i++)
	{
		cin>>s[i];
}
for(int r=0;r<t;r++)
{
	if(s[r]==1)
	{
		c++;
		p1.push(s[r]);
	}
	else 
	{
		if(p1.top()==1)
		{
			p1.pop();
		}
		if(p1.empty())
		{
			if(w<c)
			{
				w=c;
				x=r+1;
			}
			c=0;
		}
		else
		{
			if(w<c)
			{
				w=c;
				x=r+1;
			}
			c=p1.size();
		}
	}
}
	int e=0;
	for(int u=0;u<t;u++)
	{
		if(s[u]==1)
		{
			d++;
			p.push((s[u]));
		}
		else
		{
			d++;
			if(p.top()==1)
			{
				p.pop();
			}
		}
		if(p.empty())
		{
			if(a==0)
			{
				y=d;
				a++;
				z=u+1;
			}
			else if(a>0&&y<d)
			{
				y=d;
				z=u+1;
			}
			d=0;
		}
	}
	cout<<w<<" "<<x-1<<" "<<y<<" "<<z+1-y<<endl;
}