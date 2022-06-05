#include<bits/stdc++.h>
#define int long long
using namespace std;
void file_io(){
    #ifndef ONLINE_JUDGE
    freopen("inputa.txt","r",stdin);
    freopen("outputa.txt","w",stdout);
    freopen("log.txt","w",stderr);
    #endif
}
signed main(){
    file_io();
    int t;
    cin>>t;
    while(t--){
        /*ll n;
        cin>>n;*/
        string s;
        cin>>s;
        int n = s.length();
        stack<char> c;
        if(s.length()==1){
            cout<<1<<endl;
            continue;
        }
        c.push(s[0]);
        for(int i   = 1;i<s.length();i++){
            if(c.size()){
            char x = c.top();
            if(x==s[i]){
                c.pop();
                n-=2;
            }
            else{
                c.push(s[i]);
            }
            }
            else
            c.push(s[i]);
        }
        /*while(c.size()>=2){
            char x = c.top();c.pop();
            char y = c.top();
            if(x==y){
                c.pop();
                n-=2;
                
            }
            else
            break;
        }*/
        cout<<n<<endl;
        
    }


}

