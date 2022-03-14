#include <iostream>
using namespace std;
int main()
{
    int inputNum, fact = 1;

    cin >> inputNum;
    if (inputNum == 1)
    {
        fact = 1;
    }
    else if (inputNum > 1)
    {
        for (int i = 1; i <= inputNum; i++)
        {
            fact *= i;
        }
    }
    cout << fact << endl;

    return 0;
}