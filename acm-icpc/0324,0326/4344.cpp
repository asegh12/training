#include<iostream>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a;

  for(int i=0; i<a; i++) {
    cin >> b;
    int score[b];
    int sum = 0;
    int avgover = 0;
    for(int j=0; j<b; j++) {
      cin >> c;
      sum += c;
      score[j] = c;
    }
    for(int j=0; j<b; j++) {
      if(sum/b < score[j]) avgover += 1;
    }
    cout << fixed;
    cout.precision(3);
    cout << (float)avgover/b*100 << "%" << endl;
  }
}
