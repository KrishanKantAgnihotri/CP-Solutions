#include<bits/stdc++.h>

#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define mii map<int,int>
#define all(x) x.begin(),x.end()
#define endl "\n"
#define pb push_back
#define MOD 1e9+7
#define INF 0x3f3f3f3f

using namespace std;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main()
{
  int N; cin >> N;
    vi A(N), B(N); for(int i=0 ; i<N;i++) cin >> A[i] >> B[i];
    sort(all(A));
    sort(all(B));
    ll X, Y; 
    if (N % 2 == 1) {
        X = A[N/2];
        Y = B[N/2];
    } else {
        X = A[N/2 - 1] + A[N/2];
        Y = B[N/2 - 1] + B[N/2];
    }
 
    cout << Y-X+1 << endl;
	
	return 0;
}
