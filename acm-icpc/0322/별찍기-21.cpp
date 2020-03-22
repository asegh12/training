#include<iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  if(a==1) {
    cout << "*";
    return 0;
  }
  for(int i=1; i<=2*a; i++){
    for(int j=1; j<=a; j++) {
      if(i%2==1) {
        if(j%2==1) cout << "*";
        else cout << " ";
      }
      else {
        if(j%2==1) cout << " ";
        else cout << "*";
      }
    }
    cout << endl;
  }
}
