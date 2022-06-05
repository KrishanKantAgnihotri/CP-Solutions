#include <bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
//using boost::multiprecision::cpp_int;
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{int a,b,c,d;
cin>>a>>b>>c>>d;
int diff = abs(b-a);
int diff2 = abs(d-c);
if(diff2==0&&diff==0)
cout<<"YES\n";
else if(diff2==0)
cout<<"NO\n";
else if(diff%diff2==0)
cout<<"YES\n";
else 
cout<<"NO\n";
	}
	return 0;
}
