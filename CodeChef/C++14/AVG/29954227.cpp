#include <bits/stdc++.h>
#define ll long long
//#include<boost/multiprecision/cpp_int.hpp>
//using boost::multiprecision::cpp_int;
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{int n,k,v;
	cin>>n>>k>>v;
	ll num,sum=0;
	for(int i = 0 ; i<n ;i++)
	{cin>>num;
	sum+=num;
	    
	}
	
ll totalsum=(n+k)*v;
	if((totalsum-sum)%k==0&&totalsum>sum)
	{
	    cout<<(totalsum-sum)/k<<endl;
	}
else
cout<<"-1\n";
	}
	return 0;
}
