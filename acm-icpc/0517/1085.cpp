#include<iostream>
using namespace std;

int main() {

  int x, y, w, h;
  cin >> x >> y >> w >> h;
  int min = 1000;
  int xmin = w-x; int ymin = h-y;
  int arr[4] = {x, y, xmin, ymin};
  for(int i=0; i<4; i++) {
    if(min >= arr[i]) {
      min = arr[i];
    }
  }
  cout << min << endl;
}
