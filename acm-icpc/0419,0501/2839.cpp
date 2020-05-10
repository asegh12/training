#include<iostream>
using namespace std;

int main()
{
  int a;
  int sum = 0;
  cin >> a;
  if(a==7) {
    cout << -1 << endl;
    return 0;
  }
  if(a<5) {
    if(a==3) {
      cout << 1 << endl;
      return 0;
    }
    else {
      cout << -1 << endl;
      return 0;
    }
  }
  sum += a/5;
  a %= 5;
  if(a%5 == 1) {
    cout << sum+1 << endl;
  }
  else if(a%5 == 2) {
    cout << sum+2 << endl;
  }
  else if(a%5 == 3) {
    cout << sum+1 << endl;
  }
  else if(a%5 == 4) {
    cout << sum+2 << endl;
  }
  else {
    cout << sum << endl;
  }
}
