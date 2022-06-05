#include<bits/stdc++.h>
using namespace std;
int main()
{int k ;
cin>>k;
    string s;
cin>>s;

for(int i = 0 ;i<min(k,int(s.length())) ; i++)
cout<<s[i];
if(s.length()>k)
cout<<"...";
cout<<endl;

}