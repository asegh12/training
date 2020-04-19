#include<iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  int b = 1, count = 1;
  while(1) {
    if(a<=b) {
      cout << count << endl;
      break;
    }
    b += 6*count;
    count++;
  }
}
