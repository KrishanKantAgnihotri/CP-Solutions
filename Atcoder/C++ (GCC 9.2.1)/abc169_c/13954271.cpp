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
 ll A, B; cin >> A >> B;
    char C; cin >> C;
    int D; cin >> D;
    B *= 100; B += D;
    ll X = A*B; X /= 100;
    cout << X << endl;
}
