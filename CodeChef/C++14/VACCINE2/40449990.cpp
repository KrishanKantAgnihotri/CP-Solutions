#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
 int n,d;
 cin>>n>>d;
 int arr[n+1];
 int rsk = 0 ; 
 int non = 0 ; 
 for(int i= 0 ;i <n ;i++){
     cin>>arr[i];
     if(arr[i]<=9 || arr[i]>=80)
     rsk++;
 }
 non = n-rsk;
 int ans = (rsk+d-1)/d+(non+d-1)/d;
 cout<<ans<<endl;
}
        
    }