#include <bits/stdc++.h>
#define ll long long
//#include<boost/multiprecision/cpp_int.hpp>
//using boost::multiprecision::cpp_int;
using namespace std;
int len(int a)
{ll cnt = 0 ; 
    while(a)
    {
        a/=10;
        cnt++;
    }
    return cnt;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{string s;
	    cin>>s;
	    int n = s.length();
	    ll cnt = 0 ;
	    ll tot = 0  ;
	    for(int i = 0 ; i<n ;i++)
	    {
	        if(s[i]==s[i+1])
	        cnt++;
	        else
	        {cnt++;
	           // cout<<cnt<<s[i]<<endl;
	        
	            tot +=(len(cnt)+1);
	                cnt = 0 ;
	           
	        }
	    }
	   // cout<<tot<<" "<<n;
	    if(tot<n)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
