#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int userInput;

    // do
    // {
    //     cin.clear();

    cin >> userInput;
    // } while (cin.bad() || userInput < 6 || userInput > 2000);
    if (userInput > 5 && userInput < 2000)
    {
        for (long int i = 1; i <= userInput; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << "^" << 2 << " = " << i * i << endl;
            }
        }
    }
}