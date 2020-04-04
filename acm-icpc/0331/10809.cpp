#include<iostream>
using namespace std;

int main()
{
  char word[101];
  cin >> word;
  int count[26];

  char alphabet = 'a';

  for(int i=0; i<26; i++) {
    count[i] = -1;
    int j = 0;
    while(word[j]) {
      if(alphabet == word[j]) {
        count[i] = j;
        break;
      }
      j++;
    }
    alphabet++;
    cout << count[i] << " ";
  }
}
