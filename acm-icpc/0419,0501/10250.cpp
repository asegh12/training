#include<iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  for(int i=0; i<t; i++) {
    int H, W, N;
    cin >> H >> W >> N;
    int count = 1;
    while(H < N) {
      N -= H;
      count++;
    }
    cout << N*100+count << endl;
  }
}
