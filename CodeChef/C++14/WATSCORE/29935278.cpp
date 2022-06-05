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
	vector<int> v(8);
	for(int i = 0 ; i<n ;i++)
{
    cin>>j>>num;
    v[j-1]=max(v[j-1],num);
}
cout<<accumulate(v.begin(),v.end(),0)<<endl;
	}
	return 0;
}
