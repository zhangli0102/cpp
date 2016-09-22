#include <iostream>
using namespace std;

int getMin(int a, int b)
{
  if (a < b) return a;
  else return b;
}

int main()
{
  int a, b;
  cout << "Please type in two integers: " << endl;
  cin >> a >> b;
  int c = getMin(a, b);
  cout << "The smaller one is " << c << endl;
}
