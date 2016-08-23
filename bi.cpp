#include <iostream>
using namespace std;

int bi(bool a)
{
    int b;
    if(a == true) return 1;
    else return 0;
}


int main() 
{
    bool a = true;
    int b = bi(a);
    cout << "True is " << b << "\n";
    bool c = false;
    b = bi(c);
    cout << "False is " << b << "\n";
}
