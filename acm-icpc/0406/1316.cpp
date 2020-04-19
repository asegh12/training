#include<iostream>
#include<string>
using namespace std;

int main()
{
  int t;
  string word;
  cin >> t;
  int a = t;
  for(int i=0; i<t; i++){
    cin >> word;
    int check[26] = {0};
    for(int j=0; j<word.size(); j++) {
      if(check[word[j] - 'a'] == 0) {
        check[word[j] - 'a'] = 1;

        if(word[j+1] == word[j]){
          char w = word[j];
          while(word[j] == w) {
            j+=1;
          }
          j--;
        }
      }
      else {
        check[word[j]-'a'] += 1;
      }
    }
    for(int j=0; j<26; j++) {
      if(check[j] >= 2) {a--; break;}
    }
  }
  cout << a << endl;
}
