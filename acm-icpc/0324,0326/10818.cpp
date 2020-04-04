#include<iostream>
using namespace std;

int main()
{
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int a, b;
  int max = -1000001; int min = 1000001;

  cin >> a;
  int array[a];

  for(int i=0; i<a; i++) {
    cin >> b;
    array[i] = b;
  }

  for(int i=0; i<a; i++) {
    if(max<array[i]) max = array[i];
    if(min>array[i]) min = array[i];
  }
  cout << min << " " << max << "\n";
}
