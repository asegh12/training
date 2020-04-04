#include<iostream>
using namespace std;

int main()
{
  int t;
  int sum=0;
  cin >> t;
  char number;
  for(int i=0; i<t; i++) {
    cin >> number;
    sum += number - '0';
  }
  cout << sum << endl;
}
