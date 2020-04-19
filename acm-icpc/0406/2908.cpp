#include<iostream>
using namespace std;

void Aprint(char B[3]) {
  for(int i=2; i>=0; i--) {
    cout << B[i];
  }
  cout << endl;
}

void Bprint(char B[3]) {
  for(int i=2; i>=0; i--) {
    cout << B[i];
  }
  cout << endl;
}

int main()
{
  char a[3], b[3];
  cin >> a >> b;
  if(a[2]>b[2]) {
    Aprint(a);
    return 0;
  }
  else if(a[2]<b[2]) {
    Bprint(b);
    return 0;
  }
  else {
    if(a[1]>b[1]) {
      Aprint(a);
      return 0;
    }
    else if(a[1]<b[1]) {
      Bprint(b);
      return 0;
    }
    else {
      if(a[0]>b[0]) {
        Aprint(a);
        return 0;
      }
      else if(a[0]<b[0]) {
        Bprint(b);
        return 0;
      }
    }
  }
}
