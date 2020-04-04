#include<iostream>
#include<cstring>
using namespace std;

int main()
{
  string sentence;
  getline(cin, sentence);
  int arr[26] = {0};

  for(int i=0; i<sentence.size(); i++) {
    if(sentence[i]>=65 & sentence[i]<=90) {
      arr[90 - sentence[i]]++;
    }
    else {
      arr[122 - sentence[i]]++;
    }
  }
  int max = 0; int max_arr;
  for(int i=25; i>=0; i--) {
    if(max < arr[i]) {
      max = arr[i]; max_arr=i;
    }
  }
  int max_s = 0;
  for(int i=25; i>=0; i--) {
    if(max==arr[i]) max_s++;
    if(max_s==2) {
      cout << "?" << endl;
      return 0;
    }
    if(i==0) cout << char(90-max_arr) << endl;
  }
}
