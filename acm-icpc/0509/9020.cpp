#include<iostream>
#include<cmath>
using namespace std;

int PrimeNumber(int n) {
  for(int i=2; i<=sqrt(n); i++) {
    if(n%i==0) return 0;
  }
  return 1;
}
int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  for(int i=0; i<t; i++) {
    int n;
    cin >> n;
    int prime = n/2;
    int arr[5000]; int count = 0;
    while(prime!=n-1) {
      if(PrimeNumber(prime) == 1) {
        if(PrimeNumber(n-prime) == 1) {
          arr[count] = prime;
          count++;
        }
      }
      prime++;
    }
    cout << n-arr[0] << " " << arr[0] << endl;
  }
}
