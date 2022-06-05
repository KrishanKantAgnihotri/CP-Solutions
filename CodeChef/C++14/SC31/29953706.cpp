#include <bits/stdc++.h>
#define ll long long 
//#include<boost/multiprecision/cpp_int.hpp>
//using boost::multiprecision::cpp_int;
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<ll> v(n);
	    string s;
	    
	    for(int i = 0 ; i<n ;i++)
	    {
	    cin>>s;
	    //reverse(s.begin(),s.end());
	     v[i]=stoi(s,0,2);
	    
	    }
	     
	    for(int i =1 ; i<n ;i++)
	    v[i]=v[i]^v[i-1];
	    cout<<__builtin_popcountll(v[n-1])<<endl;
	}
	return 0;
}
