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
  ll N; cin >> N;
    int ans = 0;
    for(int i= 2;i<= 1000010;i++) {
        int cur = 0;
        while (N % i == 0) {
            cur++;
            N /= i;
        }
    for(int j=1; j<=10000; j++) {
            if (cur < j) break;
            ans++; cur -= j;
        }
    }
    if (N > 1) ans++;
    cout << ans <<endl;
}
