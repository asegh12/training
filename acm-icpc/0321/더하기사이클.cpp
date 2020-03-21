#include<iostream>
using namespace std;

int main()
{
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int a, b, c, d, e; int f = 0;
  cin >> a; b = a;
  do{
    c = a/10; d = a%10; e = c+d;
    if(e>=10){e %= 10;}
    d *= 10;
    a = d+e;
    f += 1;
  }while(a!=b);
  cout << f << "\n";
}
