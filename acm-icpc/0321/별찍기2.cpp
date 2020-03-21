#include<iostream>
using namespace std;

int main()
{
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int a;
  cin >> a;

  for(int i=1; i<=a; i++) {
    for(int j=1; j<=i; j++) {
      if(j==1){
        for(int k=a; k>i; k--) {
          cout << " ";
        }
      }
      cout << "*";
    }
    cout << "\n";
  }
}
