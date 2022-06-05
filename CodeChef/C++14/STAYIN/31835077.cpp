#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{

	    long long n=0,f=0;
	    cin>>n;
	    int cnt=0;

	    for(int i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                cnt++;
            }
            if(cnt==2)
            {
                f=i;
                break;
            }
        }
        int index=0;
        cnt=0;
        int largest=0;
        long long int nnum=0,m=1;
        while(n)
        {
            cnt++;
            int r=n%10;
            if(r>=largest)
            {
                largest = r;
                index=cnt;
            }
            if(r%2==0)
            {
                r=r+1;
            }
            n=n/10;
            nnum = nnum + (r*m);
            m=m*10;

        }
        cout<<f<<" "<<index<<" "<<nnum<<endl;

    }
	return 0;
}
