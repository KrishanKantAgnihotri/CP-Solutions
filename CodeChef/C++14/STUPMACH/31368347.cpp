#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//#include<boost/multiprecision/cpp_int.hpp>
//using boost::multiprecision::cpp_int;
using namespace std;

int main() {
    fast_io
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a;
	    cin>>a;
	   long long sol=a;
	   int b = a;
	    for(int i = 1 ; i<n ;i++)
	    {
	        cin>>a;
	        b = min(a,b);
	        sol+=b;
	    }
	    cout<<sol<<endl;
	}
	return 0;
}
