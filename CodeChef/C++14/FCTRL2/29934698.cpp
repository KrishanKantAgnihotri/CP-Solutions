#include <bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>

using boost::multiprecision::cpp_int;
using namespace std;
int main() {
	int t;
	cin>>t;
	cpp_int num;
	while(t--)
	{
	    int n;
	    cin>>n;
	     num = 1;
	    while(n>0)
	    {num*=n;
	     n--;   
	    }
	    cout<<num<<endl;
	}
	return 0;
}
