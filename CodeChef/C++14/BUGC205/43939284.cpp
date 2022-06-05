#include <bits/stdc++.h>
using namespace std;
void pusher(vector<int> row[], int i, int slice)
{
row[i].push_back(slice);
}
void shift(vector<int> col[], vector<int> transpose[], int v)
{
for (int i = 0; i < v; i++)
for (int j = 0; j < col[i].size(); j++)
pusher(transpose, col[i][j], i);
 
}
void show(vector<int> roll[], int k)
{
for (int i = 0; i < k; i++)
{
cout << i << "-> ";
for (int j = 0; j < roll[i].size(); j++)
cout << roll[i][j] << " ";
cout << ",";
}
}
int main()
 {
int v = 5;
vector<int> arr[v];
pusher(arr, 0, 1);
pusher(arr, 0, 4);
pusher(arr, 0, 3);
pusher(arr, 2, 0);
pusher(arr, 3, 2);
pusher(arr, 4, 1);
pusher(arr, 4, 3);
vector<int> change[v];
shift(arr, change, v);
show(change, v);
return 0;
}