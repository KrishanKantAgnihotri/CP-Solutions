#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{char b;
	    cin>>b;
	    if(b=='c'||b=='C')
	    cout<<"Cruiser";
	 if(b=='b'||b=='B')
	    cout<<"BattleShip";
	    if(b=='d'||b=='D')
	    cout<<"Destroyer";
	    if(b=='f'||b=='F')
	    cout<<"Frigate";
cout<<endl;	       
	}
	return 0;
}
