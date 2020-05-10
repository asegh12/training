#include<iostream>
#include<cmath>
using namespace std;


int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  while(n) {
    int count = n;

    for(int i=n+1; i<=2*n; i++) {
      for(int j=2; j<=sqrt(i); j++) {
        if(i%j==0) {
          count--;
          break;
        }
      }
    }

    cout << count << endl;
    cin >> n;
  }
}
