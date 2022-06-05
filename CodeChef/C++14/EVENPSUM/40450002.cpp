#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
     int  x,y;
    cin>>x>>y;
    int od1 = x/2 ; 
    int od2 = y/2;
    int ev1 = od1;
    int ev2 = od2 ;
    if(x&1)
    od1++;
    if(y&1)
    od2++;
    cout<<od1*od2+ev1*ev2<<endl;
    }
}
