#include<iostream>
#include<string>
#include<fstream>

using std::cout;
using std::endl;
using std::cin;

int main() 
{
  std::ifstream story;
  story.open("story.txt");

  std::string x;
  while (std::getline(story,x))
  {
    if (x[0] != '#')
      std::cout << x << '\n';

  }
  story.close();


  return 0;
}

