#include <iostream>
using namespace std;

int main() {
bool flag = true;
 int num;
 while(flag)
 {
     cin>>num;
     if(num==42)
     flag=false;
     if(flag)
     cout<<num<<endl;
 }
	return 0;
}
