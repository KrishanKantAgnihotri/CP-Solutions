#include <bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
//using boost::multiprecision::cpp_int;
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0 ; i<n ;i++)
	cin>>v[i];
	sort(v.begin(),v.end());
	int diff ,mindiff=INT_MAX;
	for(int i = 1; i<n ;i++)
	{
	    diff=v[i]-v[i-1];
	    mindiff=min(mindiff,diff);
	}
	cout<<mindiff<<endl;
	}
	return 0;
}
