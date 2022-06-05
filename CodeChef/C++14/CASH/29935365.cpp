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
	cin>>j;
	int sum = 0 ; 
	for(int i = 0 ; i<n ;i++)
{
    cin>>num;
    sum = (sum+(num%j))%j;
}
cout<<sum<<endl;
	}
	return 0;
}
