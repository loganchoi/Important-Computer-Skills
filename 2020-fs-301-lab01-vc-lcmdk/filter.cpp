
// filter.cpp - Filter commented-out lines from STDIN
// 02-02-2020 Initial Program

#include<iostream>

using namespace std;

bool matches_with_whitespace(const string& str, const char match) {
  for(unsigned int i = 0; i < str.length(); i++) {
    // Look for the match
    if(str[i] == match) {
      return true;
    }
    // Skip over whitespace 
    else if(!(str[i] == ' ' || str[i] == '\t')) {
      return false;
    }
  }

  // Blank or empty strings don't match
  return false;
}

int main() {
  string buf;

  //Added Feature
  char comment_char;

  cout << "What is the comment character?";
  cin >> comment_char;

  while(getline(cin, buf)) {
    if(!matches_with_whitespace(buf, comment_char)) {
      cout << buf << endl;
    }
  }

  return 0;
}

