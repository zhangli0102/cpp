#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
  string str;
  cout << "Please input a string:\n";
  getline(cin, str);
  int i = 0;
  while (str[i])
  {
    if (isupper(str[i])) str[i] = tolower(str[i]);
    else if (islower(str[i])) str[i] = toupper(str[i]);
    else str[i] = str[i];
    i++;
  }
  cout << "Now the string is: " << str << "\n";
  return 0;
}
