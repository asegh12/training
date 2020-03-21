#include<iostream>
using namespace std;

int main()
{
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int a, b, c;
  cin >> a;

  for(int i=1; i<=a; i++) {
    cin >> b >> c;
    cout << "Case #" << i << ": " << b+c << endl;
  }
}
