#include <iostream>
using namespace std;
int main()
{
    int N, number;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> number;
        if (number == 0)
        {
            cout << "NULL" << endl;
        }
        else if (number % 2 != 0)
        {
            if (number > 0)
            {
                cout << "ODD POSITIVE" << endl;
            }
            else
            {
                cout << "ODD NEGATIVE" << endl;
            }
        }
        else if (number % 2 == 0)
        {
            if (number > 0)
            {
                cout << "EVEN POSITIVE" << endl;
            }
            else
            {
                cout << "EVEN NEGATIVE" << endl;
            }
        }
    }

    return 0;
}