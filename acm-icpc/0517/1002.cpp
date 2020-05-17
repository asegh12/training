#include<iostream>
#include<cmath>
using namespace std;


int main() {

  int t;
  cin >> t;
  int x1, y1, r1, x2, y2, r2;

  for(int i=0; i<t; i++) {
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    double distance = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));

    if(x1==x2 & y1==y2) {
      if(r1==r2) cout << -1 << endl;
      else cout << 0 << endl;
    }

    else {
      if(r1<r2) {
        int temp = r2;
        r2 = r1;
        r1 = temp;
      }

      if(distance > r1-r2 & distance < r1+r2) cout << 2 << endl;
      else if(distance == r1-r2 | distance==r1+r2) cout << 1 << endl;
      else cout << 0 << endl;
    }
  }
}
