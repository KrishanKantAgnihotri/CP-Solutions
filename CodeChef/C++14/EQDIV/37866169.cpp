#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define f(i,n) for(int i = 0;i<n ;i++)
#define ii pair<int,int>
#define vii vector<ii>
#define vi vector<int>
#define vl vector<ll>
#define mii map<int,int>
#define uii unordered_map<int,int>
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define INF 0x3f3f3f3f
#define print(x) cout<<x<<"\n";
#define printv(v) for(auto it : v) cout<<it<<" ";
#define rall(v) v.rbegin(),v.rend()

//#include<boost/multiprecision/cpp_int.hpp>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//(Uncomment when needed and be sure it not give TLE bcoz it requires time)
//#pragma GCC optimize "trapv"//to check integer overflow and gives RE.
//typedef tree<pair<int,int>,null_type,
//less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>   ordered_set;
//(UNCOMMENT WHEN HAVING LOTS OF RECURSIONS)
//#pragma comment(linker, "/stack:200000000")
//(UNCOMMENT WHEN NEEDED)
//#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma GCC optimize("O3")
//uncoment for large int requirement
//using boost::multiprecision::cpp_int;
//using namespace _gnu_pbds;

using namespace std;

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
//use it with unordered_map<T,T,custom_hash> safe_map
const long long int MOD = 1e9+7;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
const long long int N = 1e5 ;
ll ipow(ll base,ll exp ){
    ll res = 1 ;
    while(exp>0){
        if(exp&1) res = (base*res),exp--;
        base = (base*base);
        exp>>=1;

    }
    return res;
}
int main(){
    fast_io
    #ifndef ONLINE_JUDGE
    freopen("inputa.txt","r",stdin);
    freopen("outputa.txt","w",stdout);
    #endif
    int k ;
    cin>>k;
//cout<<k
    vector<string> store;
    store.push_back("100111010");
    store.push_back("1011011010");
    store.push_back("01000111010");
    store.push_back("111111110010");
    store.push_back("1110111101100");
    store.push_back("10011101011100");
    store.push_back("001101111111000");
    store.push_back("1001011010010110");
    vector<string> storefor3;
    storefor3.push_back("0");storefor3.push_back("01");
    storefor3.push_back("001");storefor3.push_back("0001");
    storefor3.push_back("00001");storefor3.push_back("010001");
    storefor3.push_back("0001110");storefor3.push_back("00110110");
    storefor3.push_back("011010110");storefor3.push_back("1000000101");
    storefor3.push_back("00001101001");storefor3.push_back("110100011001");
    storefor3.push_back("0000010000011");storefor3.push_back("01011001101001");
    storefor3.push_back("110000101000011");storefor3.push_back("1001011001101001");
    storefor3.push_back("11101001000001101");storefor3.push_back("010011010101011010");
    storefor3.push_back("0011001001011000011");storefor3.push_back("10100000001000000111");
    storefor3.push_back("011000000001010010011");storefor3.push_back("0000000000000001000111");
    storefor3.push_back("01110000010000001000111");storefor3.push_back("010100001001000001000111");
    storefor3.push_back("0000000001001000000100111");storefor3.push_back("01001100101000000000001111");
    storefor3.push_back("100010010000000100000001111");storefor3.push_back("1101010001001001000000001111");
    storefor3.push_back("11111101101000000001000001111");storefor3.push_back("110011011010000000000010001111");
                                                                            //110011011010000000000010001111
    storefor3.push_back("0100010110100000100000100001111");storefor3.push_back("10010110011010010110100110010110");
    vector<string> storefor4;
    storefor4.push_back("0");storefor4.push_back("01");
    storefor4.push_back("001");storefor4.push_back("0001");
    storefor4.push_back("00001");storefor4.push_back("000001");
    storefor4.push_back("0000001");storefor4.push_back("00101110");
    storefor4.push_back("000001110");storefor4.push_back("0101001001");
    storefor4.push_back("00000101001");storefor4.push_back("001101010110");
    storefor4.push_back("0010110101001");storefor4.push_back("00000001111010");
    storefor4.push_back("011110001010110");storefor4.push_back("1111000111110001");
    storefor4.push_back("01111000000010101");storefor4.push_back("000000110100001110");
    storefor4.push_back("0111101101001000011");storefor4.push_back("11110101001000100011");
    storefor4.push_back("000000000100100100011");storefor4.push_back("1010110000100000001011");
    storefor4.push_back("11110111011001000010011");storefor4.push_back("111101100001001000001011");
    storefor4.push_back("0111001010100010000000111");storefor4.push_back("00010100000100010000110101");
    storefor4.push_back("110000111111100001000000111");storefor4.push_back("1110100000111010000100000111");
    storefor4.push_back("00010000000100110001000101110");storefor4.push_back("011101101110101000000000100111");
    storefor4.push_back("0010011110001000100000000010111");storefor4.push_back("11101111101001010000000000001111");
    storefor4.push_back("001010100011101000100000000001111");storefor4.push_back("0101010001000000000100010000010111");
    storefor4.push_back("10111000110100101000000010000001111");storefor4.push_back("011010101011100010000000000100001111");
    storefor4.push_back("0000000101000100000001000000000111011");storefor4.push_back("01101011011010100000001000000010001111");
    storefor4.push_back("111111011011101000001000000000000101111");storefor4.push_back("1111110110110011101000000000000000011111");
    storefor4.push_back("10111010101001100000000000100000000011111");storefor4.push_back("100000010000000101000001010000000000011111");
    storefor4.push_back("1110101100111110001000000000000100000011111");storefor4.push_back("11111011111010100001000000000000001000011111");
    storefor4.push_back("110000010000010000000101000000000001000011111");storefor4.push_back("1001101011101010101001000000000000000010011111");
    storefor4.push_back("10101011111010101000010000000000000000000111111");storefor4.push_back("111100011111000101101001100101101001011001101001");
    storefor4.push_back("0111100000001010101101001100101101001011001101001");storefor4.push_back("00000010010010000000000100000000000100000000111111");
    storefor4.push_back("011110110100100001101101001100101101001011001101001");storefor4.push_back("1111010100100010001101101001100101101001011001101001");
    storefor4.push_back("00110110100001000000000000000000000000000000010111111");storefor4.push_back("101011000010000000101101101001100101101001011001101001");
    storefor4.push_back("1111011101100100001001101101001100101101001011001101001");storefor4.push_back("11110110000100100000101101101001100101101001011001101001");
    storefor4.push_back("011100101010001000000011101101001100101101001011001101001");storefor4.push_back("1101000010011000001000000000000000000000000100000001111111");
    storefor4.push_back("11000011111110000100000011101101001100101101001011001101001");storefor4.push_back("111010000011101000010000011101101001100101101001011001101001");
    storefor4.push_back("0011001000000010000001000000000000000000000000000000101111111");storefor4.push_back("01110110111010100000000010011101101001100101101001011001101001");
    storefor4.push_back("001001111000100010000000001011101101001100101101001011001101001");storefor4.push_back("1110111110100101000000000000111101101001100101101001011001101001");
    int t;                                                                      //10010110011010010110100110010110
    cin>>t;
    //t = 1;
    if(k==1){
     while(t--){
        ll n;
     cin>>n;

     ll sum1 = 0 ;
     ll sum2  =  0 ;
     string ans = "";
     for(int i = n ; i>=1 ; i--){
       if(sum1>sum2){
        sum2+=i;
        ans+='0';
       }
       else
        sum1+=i,ans+='1';
     /*if(abs(sum1-sum2)==0 || abs(sum1-sum2)==1)
     continue;*/}
     cout<<abs(sum1-sum2)<<endl;
     reverse(all(ans));
     cout<<ans<<endl;

}
}
else if(k==2){
    while(t--){
        //cout<<".";
        ll n;
     cin>>n;
if(n<=8){
     string s ="01101001";
     ll part = n/8;
     //cout<<part<<" ";
     string ans ="";
     for(int i = 0  ; i<part ;i++){
        ans = ans + s;
     }
     //cout<<ans<<endl;
ll rem = n-(n/8)*8;
     ll sum1 = 0 ;
     ll sum2 = 0 ;
     //cout<<rem<<" ";
     int pt = ans.length()-1;
     for(ll i =n ;i>rem ;i--,pt--){
   //cout<<sum1<<" "<<sum2<<endl;
    if(ans[pt]=='1'){
        sum1+=(i*i);
    }
    else
        sum2+=(i*i);

     }
     int ptr = 7;
  for(int i = rem ;i>1 ;i--){
    ans = s[ptr]+ans;
    if(s[ptr]=='1')
        sum1+=(i*i);
    else
        sum2+=(i*i);
    ptr--;
    //if(s[i-1]==)
  }
  if(rem){
if(sum1>sum2)
{
    ans = '0'+ans;
    sum2 +=1;
}
else
{
    ans = '1'+ans;
    sum1+=1;
}
}
//cout<<n<<endl;
cout<<abs(sum1-sum2)<<endl;
cout<<ans<<endl;
}
else{
    ll change = n;
    n = (n-9)%8;
    ll repeat = (change-(n+9))/8;
 ll find[8]={1,1,0,0,1,1,0,0};
 string pattern = "10010110";
ll ans = find[n];
cout<<ans<<endl;
cout<<store[n];
for(int i = 0 ; i<repeat ;i++){
    cout<<pattern;
}
cout<<endl;

}
}

}
if(k==3){
    ll find[] ={1,7,18,28,25,7,26,4,5,1,12};
    ll commonans[]={0,1,1,0};
    string pattern = "0110100110010110";
    while(t--){
        ll n;
        cin>>n;
        if(n<=11){
            n--;
            cout<<find[n]<<endl;
            cout<<storefor3[n]<<endl;

        }
        else {
            if(n<=32){
                ll askstring = n-1;
                ll change = (n-12)%4;
                cout<<commonans[change]<<endl;
                cout<<storefor3[askstring]<<endl;

            }
            else{
             ll change = (n-12)%4;
             cout<<commonans[change]<<endl;
             ll manipulate = n%16+16;
             cout<<storefor3[manipulate-1];
             ll repeat = (n-manipulate)/16;
             for(int i = 0 ; i<repeat ;i++){
                cout<<pattern;
             }
             cout<<endl;
         }



        }


    }

}
if(k==4){
    ll find[] ={1,15,64,158,271,317,126,34,253,13,92,30,47,31,2,0,1,13,0,0,9,1,0,0,1,5,0,0,5,1,0};
    //cout<<sizeof(find)/sizeof(find[0]);
    ll commonans[]={0,1,1,0};
    string pattern = "01101001100101101001011001101001";
    while(t--){
    ll n;
    cin>>n;
    if(n<=31){
            n--;
            cout<<find[n]<<endl;
            cout<<storefor4[n]<<endl;

        }
        else {
            if(n<=64){
                ll askstring = n-1;
                ll change = (n-32)%4;
                cout<<commonans[change]<<endl;
                cout<<storefor4[askstring]<<endl;

            }
            else{
             ll change = (n-32)%4;
             cout<<commonans[change]<<endl;
             ll manipulate = n%32+32;
             cout<<storefor4[manipulate-1];
             ll repeat = (n-manipulate)/32;
             for(int i = 0 ; i<repeat ;i++){
                cout<<pattern;
             }
             cout<<endl;
         }

      }


     }
}
}
/*01101001100101101001011001101001
0110100110010110
100111111110101101100
1001111111101011011001001011001101001*/
//0010101110110110111111110000
//001011100110
//1111111111111110111000
//111111111111111011100010010110011010011001011001101001
//10010110011010011001011001101001
//1000111110111111011100010010110011010011001011001101001
//1000111110111111011100010010110011010011001011001101001
//1000111110111111011100010010110011010011001011001101001
//pattern :   1001011001101001
           // 0110100110010110
//pattern : 10010110011010010110100110010110
