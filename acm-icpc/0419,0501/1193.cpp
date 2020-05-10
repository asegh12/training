#include<iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  int count = 1;
  int min, max=1;
  while(1) {
    if(min<a & a<=max) {
      if(count%2==1) {
        int result_up = count;
        int result_down = 1;
        a -= min+1;
        while(a != 0) {
          result_up -= 1;
          result_down += 1;
          a--;
        }
        cout << result_up << "/" << result_down << endl;
        return 0;
      }
      else {
        int result_up = 1;
        int result_down = count;
        a -= min+1;
        while(a != 0) {
          result_up += 1;
          result_down -= 1;
          a--;
        }
        cout << result_up << "/" << result_down << endl;
        return 0;
      }
    }
    min = max;
    count++;
    max += count;

  }

}
