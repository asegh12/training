#include<iostream>
#include<string>
using namespace std;

int main()
{
  string word;
  cin >> word;
  int count = 0;
  for(int i=0; i<word.size(); i++){
    if(word[i] == 'c') {
      if(word[i+1] == '=' | word[i+1] == '-') {
        count++;
        i++;
      }else {
        count++;
      }
    }
    else if(word[i] == 'd') {
      if(word[i+1] == 'z' && word[i+2] == '=') {
        count++;
        i += 2;
      }
      else if(word[i+1] ==  '-') {
        count++;
        i++;
      }
      else {
        count++;
      }
    }
    else if(word[i] == 'l') {
      if(word[i+1] == 'j') {
        count++;
        i++;
      }else {
        count++;
      }
    }
    else if(word[i] == 'n') {
      if(word[i+1] == 'j') {
        count++;
        i++;
      }else {
        count++;
      }
    }
    else if(word[i] == 's') {
      if(word[i+1] == '=') {
        count++;
        i++;
      }else {
        count++;
      }
    }
    else if(word[i] == 'z') {
      if(word[i+1] == '=') {
        count++;
        i++;
      }else {
        count++;
      }
    }
    else {
      count += 1;
    }
  }
  cout << count << endl;
}
