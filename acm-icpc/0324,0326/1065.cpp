#include<iostream>
using namespace std;

int solution(int n)
{
  int count = 99;
  if(n<100) return n;
  else {
    for(int i=100; i<=n; i++){
      int a = i/100;
      int b = i%100/10;
      int c = i%10;
      if(a==b & b==c) count++;
      else if(c-b==b-a) count++;
    }
  }

  return count;
}

int main()
{
  int t;
  cin >> t;
  cout << solution(t) << endl;
}
