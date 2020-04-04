#include<iostream>
#include<cstring>
using namespace std;

int main()
{
  string sentence;
  int a;
  getline(cin, sentence);
  if(sentence[0] == ' ') a = 0;
  else a = 1;
  for(int i=0; i<sentence.size(); i++) {
    if(sentence[i] == ' ') a++;
  }
  if(sentence[sentence.size()-1] == ' ') a--;
  cout << a << endl;
}
