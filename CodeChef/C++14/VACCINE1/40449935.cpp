#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,a,y,b,s;
    cin>>x>>a>>y>>b>>s;
    int f1 = 0 ; 
    int f2 = 0 ; 
    int cnt = 0 ; 
    int sum = 0  ; 
    while(s>sum){
        cnt++;
        if(cnt==x)
        f1 = 1 ; 
        if(cnt==y)
        f2 =1 ; 
        if(f1)
        sum+=a;
        if(f2)
        sum+=b;
        
    }
    cout<<cnt<<endl;
    
}