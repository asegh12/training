#include<iostream>
#include<cstring>
using namespace std;

int main()
{
  int a;
  cin >> a;

  for(int i=0; i<a; i++) {
    char s[80] = {0};
    cin >> s;
    int count = 0;
    int score = 0;
    int Ostack = 0;
    while(s[count]) {
      if(s[count]=='O') {
        Ostack += 1;
        score += Ostack;
      }
      else {
        Ostack = 0;
      }
      count++;
    }
    cout << score << endl;
  }
}
