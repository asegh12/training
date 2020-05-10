#include<iostream>
using namespace std;

int PrimeNumber(int n) {
  for(int i=2; i<n; i++) {
    if(n%i == 0) {
      return 0;
    }
  }
  return n;
}

int main() {
  int M, N;
  cin >> M >> N;
  if(M==1) M=2;
  int sum = 0; int min = 0;
  for(int i=M; i<=N; i++) {
    sum += PrimeNumber(i);
    if(sum==i) min = i;
  }
  if(sum == 0) {
    cout << -1 << endl;
    return 0;
  }
  cout << sum << endl << min << endl;
}
