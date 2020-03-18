#include<iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  if(b>=45) {
    b -= 45;
    cout << a << " " << b << endl;
  }
  else {
    b -= 45; b += 60; a -= 1;
    if(a<0) {
      a = 23;
      cout << a << " " << b << endl;
    }
    else {
      cout << a << " " << b << endl;
    }
  }
}
