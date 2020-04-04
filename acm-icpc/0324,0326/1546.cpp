#include<iostream>
using namespace std;

int main()
{
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int a, b; float max = 0;
  cin >> a;
  float arr[a];
  for(int i=0; i<a; i++){
    cin >> b;
    arr[i] = b;
    if(max < b) max = b;
  }

  float sum = 0;
  float arr2[a];
  for(int i=0; i<a; i++) {
    arr2[i] = (arr[i]/max)*100;
    sum += arr2[i];
  }
  cout.precision(10);
  cout << sum/a << endl;
}
