#include<iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  int count = t;
  for(int i=0; i<t; i++) {
    int n;
    cin >> n;
    if(n==1) count--;
    for(int j=2; j<n; j++) {
      if(n%j == 0) {
        count -= 1;
        break;
      }
    }
  }
  cout << count << endl;
}
