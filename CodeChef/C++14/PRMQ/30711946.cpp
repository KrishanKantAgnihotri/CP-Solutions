#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ff first
#define ss second
#define repn(i,a,b) for(int i=a; i<b;i++)
#define ini(n) scanf("%d",&n)

typedef pair<int,int> pi;
typedef vector<pi> vp;
typedef vector<vp> vvp;
typedef vector<int> vi;
typedef unsigned long long int ull;
typedef long long int ll;
typedef vector<ll> vl;
typedef vector< vi > vvi;
typedef priority_queue<int> pq;
typedef priority_queue<int, vi , greater<int> >minpq;
typedef priority_queue<pi,vp,greater<pi> > mpq;


struct node{
	int val;
	vector<pi>M;
	vector<pi>Prefix;
};

int Greater_equal(vector<pi> &a, int B){
	int lo = 0;
	int hi = a.size()-1;
	
	int index = -1;
	while(lo<=hi){
		int mid = lo + (hi-lo)/2;
		
		if(a[mid].ff < B){
			lo = mid + 1;
		}
		else{
			index = mid;
			hi = mid -1;
		}
	}
	return index;
}

int Lesser_equal(vector<pi> &a, int B){
	int lo = 0;
	int hi = a.size()-1;
	
	int index = -1;
	while(lo<=hi){
		int mid = lo + (hi-lo)/2;
		
		if(a[mid].ff > B){
			hi  = mid - 1;
		}
		else{
			index = mid;
			lo = mid + 1;
		}
	}
	return index;
}

void BuildTest(int N);
vector<int>Primes;

void Sieve(){
	int N = 1e6+1;
	bool isPrime[N];
	fill(isPrime,isPrime+N,true);
	for(int i=2;i*i<=N;i++){
		if(isPrime[i]){
			for(int j=i*i;j<=N;j+=i){
				isPrime[j] = false;
			}
		}
	}
	for(int i=2;i<=N;i++){
		if(isPrime[i])
			Primes.pb(i);
	}
}
int SZ = 1e5+1;
vector<node>t(2*SZ);

void build(int N){
	for(int i=N-1; i> 0 ;i--){
		
		node left = t[i<<1];
		node right = t[i<<1|1];
		
		t[i].val = left.val + right.val;
		int n = left.M.size();
		int m = right.M.size();
		
		int p=0,q=0;
		int prefixsum  = 0 ;
		while(p<n and q<m){
			if(left.M[p].ff < right.M[q].ff){
				t[i].M.pb(left.M[p]);
				prefixsum += left.M[p].ss;
				t[i].Prefix.pb({left.M[p].ff , prefixsum});
				p++;
			}
			else if(left.M[p].ff > right.M[q].ff){
				t[i].M.pb(right.M[q]);
				prefixsum += right.M[q].ss;
				t[i].Prefix.pb({right.M[q].ff , prefixsum});
				q++;
			}
			else{
				t[i].M.pb({left.M[p].ff,left.M[p].ss+right.M[q].ss});
				prefixsum += left.M[p].ss + right.M[q].ss;
				t[i].Prefix.pb({left.M[p].ff , prefixsum});
				p++;
				q++;
			}
		}
		while(p<n){
			prefixsum += left.M[p].ss;
			t[i].M.pb({left.M[p]});
			t[i].Prefix.pb({left.M[p].ff , prefixsum});
			p++;
		}
		while(q<m){
			prefixsum += right.M[q].ss;
			t[i].M.pb({right.M[q]});
			t[i].Prefix.pb({right.M[q].ff , prefixsum});
			q++;
		}
		
	}
}
int query(int N, int L, int R , int X, int Y){
	
	int ANS  = 0;
	for(L += N , R += N ;  L < R ; L >>= 1 , R >>= 1){
		if(L&1){
			int leftI =  Greater_equal(t[L].Prefix , X);
			int rightI =  Lesser_equal(t[L].Prefix , Y);
			if(leftI != -1 and rightI != -1){
				if(leftI-1>=0){
					ANS += (t[L].Prefix[rightI].ss - t[L].Prefix[leftI-1].ss);				
				}
				else{
					ANS += (t[L].Prefix[rightI].ss);
				}
			}
			L++;
		}
		
		if(R&1){
			--R;
			int leftI =  Greater_equal(t[R].Prefix , X);
			int rightI =  Lesser_equal(t[R].Prefix , Y);
			if(leftI != -1 and rightI != -1){
				if(leftI-1>=0){
					ANS += (t[R].Prefix[rightI].ss - t[R].Prefix[leftI-1].ss);				
				}
				else{
					ANS += (t[R].Prefix[rightI].ss);
				}
			}
			
		}
	}
	return ANS;
	
}
int main(){
	Sieve();
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		int element;
        ini(element);
		int copy = element;
		int prefixsum = 0 ;
		t[N+i].val = element;
		for(int j=0;;j++){
			if(Primes[j] > sqrt(copy)){
				break;
			}
			int cnt=0;
			
			while(element >=1 and element%Primes[j] == 0){
				element/=Primes[j];
				cnt++;
			}
			if(cnt!=0){
				prefixsum += cnt;
				t[N+i].M.pb({Primes[j],cnt});
				t[N+i].Prefix.pb({Primes[j],prefixsum});
			}
		}
		if(element>=2){
			t[N+i].M.pb({element,1});
			t[N+i].Prefix.pb({element,prefixsum+1});
		}
	}
	build(N);

	int Q;
    ini(Q);
	while(Q--){
		int L,R,X,Y;
		ini(L);ini(R);ini(X);ini(Y);
		int ANS = query(N,L-1,R,X,Y);
        printf("%d\n",ANS);
	}
	return 0;
	
}

	

	

