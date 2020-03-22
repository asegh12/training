#include<iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  int b=0;
  for(int i=a; i>=1; i--) {
    for(int j=a; j>i; j--) {
      cout << " ";
    }
    for(int j=0; j<2*a-1-2*b; j++) {
      cout << "*";
    }
    b +=1;
    cout << endl;
  }
  b=a-2;
  for(int i=0; i<a-1; i++) {
    for(int j=a-2; i<j; j--) {
      cout << " ";
    }
    for(int j=0; j<2*a-1-2*b; j++) {
      cout << "*";
    }
    b -= 1;
    cout << endl;
  }
}
