#include <iostream>
using namespace std;
int main() 
{
    cout << "Here's the table showing gravity comparing earth and moon:\n";
    for(int i = 1; i <= 100; i++)
    {
        double j = i * 0.17;
        if (i%25 == 0)
        {
            cout << i << " " << j << "\n\n";
        }
        else
        {
            cout << i << " " << j << "\n";
        }
    }
}

