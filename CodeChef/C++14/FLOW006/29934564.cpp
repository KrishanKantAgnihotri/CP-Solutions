#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--)
	{
	    string num;
	    cin>>num;
	    long long sum = 0 ; 
	    for(int i = 0 ;i<num.length() ; i++)
	    {
	        sum+=num[i]-'0';
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
