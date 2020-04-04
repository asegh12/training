#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int a, b, c;
  cin >> a >> b >> c;
  int mul = a*b*c;
  int z = mul; int len = 0;

  while(z != 0){
    z /= 10;
    ++len;
  }
  int array[len];

  for(int i=0; i<len; i++) {
    array[len-i] = mul%(int)pow(10, i+1)/(int)pow(10, i);
  }

  int array2[10] = {};
  for(int i=0; i<len+1; ++i) {
    for(int j=0; j<10; ++j){
      if(array[i]==j) array2[j]++;
    }
  }

  for(int i=0; i<10; i++) {
    cout << array2[i] << "\n";
  }
}
