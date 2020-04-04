#include<iostream>
using namespace std;

int main()
{
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int a, array[42] = {0};
  for(int i=0; i<10; i++) {
    cin >> a;
    array[a%42] += 1;
  }
  a=0;
  for(int i=0; i<42; i++) {
    if(array[i] != 0) a++;
  }
  cout << a << endl;

}
