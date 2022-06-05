#include <bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
//using boost::multiprecision::cpp_int;
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{int j ; int num;
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0 ; i<n ;i++)
{
    cin>>v[i];
}
cout<<*max_element(v.begin(),v.end())<<endl;
	}
	return 0;
}
