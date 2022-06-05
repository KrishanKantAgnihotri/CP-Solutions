#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int cnt_zero=0 ;
	    int cnt_two=0;
	    int num;
	    while(n>0)
	    {cin>>num;
	        if(num==2)
	        cnt_two++;
	        else
	         if(num==0)
	         cnt_zero++;
	         n--;
	    }
	    cout<<(cnt_zero*(cnt_zero-1)/2+cnt_two*(cnt_two-1)/2)<<endl;
	}
	return 0;
}
