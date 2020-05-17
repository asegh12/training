#include<iostream>
using namespace std;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, c, d, e, f, g, h;
  cin >> a >> b >> c >> d >> e >> f;

  if(a==c) {
    g=e;
  }
  else if(a==e) {
    g=c;
  }
  else {
    g=a;
  }


  if(b==d) {
    h=f;
  }
  else if(b==f) {
    h=d;
  }
  else {
    h=b;
  }


  cout << g << " " << h << endl;
}
