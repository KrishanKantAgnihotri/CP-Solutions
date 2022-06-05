#include <bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
//using boost::multiprecision::cpp_int;
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	int rem = (a-b)%10;
	if(rem!=9)
	a=a-b+1;
	else
	a=a-b-1;

	cout<<a<<endl;
	
	
	return 0;
}
