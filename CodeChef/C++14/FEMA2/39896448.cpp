#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 1e5;
ll cnt[N+50];
bool check(ll k ,ll i ,ll j ){
    ll l = min(i,j);
    ll r = max(i,j);
    /*ll diff = (cnt[r]-cnt[l]);
    cout<<"diff " <<"= "<<diff<<" ";
*/
    //cout<<(k-(abs(i-j)-(cnt[r]-cnt[l])))<<" ";
    return (k-(abs(i-j)+(cnt[r]-cnt[l]))>0);
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("inputa.txt","r",stdin);
    freopen("outputa.txt","w",stdout);
    freopen("log.txt","w",stderr);
    #endif
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        k++;
        //ll cnt = 0 ;
        deque<ll> pos_M ;
        deque<ll> pos_I ;
        ll ans  = 0 ;
        string s;
        cin>>s;

        cnt[0]=0;
        for(int i  = 0  ; i<n ;i++){
            if(s[i]==':')
            cnt[i+1]=1;
            else
            cnt[i+1]=0;
        }
        for(int i = 1; i<=n ;i++)
        cnt[i] = cnt[i-1]+cnt[i];
    /*for(int i = 1; i<=n ;i++)
        cout<<cnt[i]<<" ";
    cout<<endl;*/
    //cout<<check(k,<<endl;
        for(int i = 0 ; i<n ; i++){
            if(s[i]=='I'){
                pos_I.push_back(i+1);
                if(pos_M.empty())
                continue;
                ll l = pos_M.front();
                        ll r  = pos_I.front();
                        if(check(k,l,r)){
                            pos_M.pop_front();
                            pos_I.pop_front();
                            ans++;
                        }
                        else{
                            if(l>r){
                                pos_I.pop_front();
                            }
                            else
                             pos_M.pop_front();
                        }
            }
            if(s[i]=='M'){
                pos_M.push_back(i+1);
                if(pos_I.empty())
                continue;
                        ll l = pos_M.front();
                        ll r  = pos_I.front();
                        if(check(k,l,r)){
                            pos_M.pop_front();
                            pos_I.pop_front();
                            ans++;
                        }
                        else{
                            if(l>r){
                                pos_I.pop_front();
                            }
                            else
                             pos_M.pop_front();
                        }

            }
            if(s[i]=='X'){
                //erase all matchings
                if((!pos_M.empty()) and (!pos_I.empty())){
                    while(true){
                        ll l = pos_M.front();
                        ll r  = pos_I.front();
                        if(check(k,l,r)){
                            pos_M.pop_front();
                            pos_I.pop_front();
                            ans++;
                        }
                        else{
                            if(l>r){
                                pos_I.pop_front();
                            }
                            else
                             pos_M.pop_front();
                        }
                        if(pos_I.empty() || pos_M.empty())
                        break;
                    }
                }
                while(!pos_M.empty())
                pos_M.pop_front();
                while(!pos_I.empty())
                pos_I.pop_front();
            }

        }
     if((!pos_M.empty()) and (!pos_I.empty())){
            while(true){
                        ll l = pos_M.front();
                        ll r  = pos_I.front();
                        if(check(k,l,r)){
                            pos_M.pop_front();
                            pos_I.pop_front();
                            ans++;
                        }
                        else{
                            if(l>r){
                                pos_I.pop_front();
                            }
                            else
                             pos_M.pop_front();
                        }
                        if(pos_I.empty() || pos_M.empty())
                        break;
                    }
        }
        cout<<ans<<endl;
    }

}
