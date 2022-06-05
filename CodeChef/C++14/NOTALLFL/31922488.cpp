#include <bits/stdc++.h>
using namespace std;

int n, k, a[100000], c[100000];

void solve() {
	//input
	cin >> n >> k;
	for(int i=0; i<n; ++i)
		cin >> a[i], --a[i];

	//make sure k is not too large
	if(k>n) {
		cout << n << "\n";
		return;
	}

	int ans=0;
	//count of values in subarray
	int c2=0;
	for(int l=0, r=0; l<n; ++l) {
		//check if we can extend r
		//make sure that c2 < k after extending
		while(r<n&&(c[a[r]]||c2<k-1)) {
			if(!c[a[r]])
				++c2;
			++c[a[r]];
			++r;
		}
		//update ans
		ans=max(r-l, ans);
		//element l is removed
		--c[a[l]];
		if(!c[a[l]])
			--c2;
	}

	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}