#include<iostream>
using namespace std;

bool a[10001];

int selfnumber(int n) {
  int sum = n;
  while(1) {
    if(n<=0) break;
    sum += n%10;
    n /= 10;
  }
  return sum;
}

int main()
{
  for(int i=1; i<10001; i++) {
    a[selfnumber(i)] = true;
    if(a[i] == false) {
      cout << i << endl;
    }
  }
}
