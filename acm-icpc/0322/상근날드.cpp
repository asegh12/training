#include<iostream>
using namespace std;

int main()
{
  int a;
  int b, c=3000;

  for(int i=0; i<3; i++) {
    cin >> a;
    if(a<b) {b=a;}
  }
  for(int i=0; i<2; i++) {
    cin >> a;
    if(a<c) {c=a;}
  }
  cout << b+c-50 << endl;
}
