#include<iostream>
#include<cmath>
using namespace std;

#define M_PI 3.14159265358979323846

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  double r;
  cin >> r;
  cout << fixed;
  cout.precision(6);
  cout << r*r*M_PI << endl;
  cout << r*r*2 << endl;
}
