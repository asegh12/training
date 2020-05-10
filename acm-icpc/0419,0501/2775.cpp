#include<iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  for(int i=0; i<t; i++) {
    int a, b;
    cin >> a >> b;
    int arr[15][15] = {0};
    for(int j=0; j<15; j++) {
      arr[0][j] = j+1;
      arr[j][0] = 1;
    }
    for(int j=1; j<15; j++) {
      for(int k=1; k<15; k++) {
        arr[j][k] += arr[j-1][k] + arr[j][k-1];
      }
    }
    cout << arr[a][b-1] << endl;
  }
}
