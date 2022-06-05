#include<iostream>
using namespace std;
int main()
{
string s,t;
  bool flag = true;
  cin>>s>>t;
  for(int i = 0 ; i<=t.length()-2;i++)
    if(s[i]!=t[i])
      flag=false;
  if(t.length()<=s.length())
    flag=false;
  if(flag)
    cout<<"Yes\n";
  else
    cout<<"No\n";
 
}
