#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;


int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int arr[3];
  for(int i=0; i<3; i++) cin >> arr[i];
  while(arr[0]!=0 & arr[1]!=0 & arr[2]!=0) {
    int max = 0; int count;
    for(int i=0; i<3; i++) {
      if(max<=arr[i]) {
        max=arr[i];
        count = i;
      }
    }
    if(count == 0) {
      if((pow(arr[1],2) + pow(arr[2], 2)) == pow(arr[0], 2)) cout << "right" << endl;
      else cout << "wrong" << endl;
    }
    else if(count == 1) {
      if((pow(arr[0],2) + pow(arr[2], 2)) == pow(arr[1], 2)) cout << "right" << endl;
      else cout << "wrong" << endl;
    }
    else {
      if((pow(arr[0],2) + pow(arr[1], 2)) == pow(arr[2], 2)) cout << "right" << endl;
      else cout << "wrong" << endl;
    }
    for(int i=0; i<3; i++) cin >> arr[i];
  }
}
