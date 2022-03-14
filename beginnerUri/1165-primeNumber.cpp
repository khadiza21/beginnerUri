#include <iostream>
using namespace std;
int main()
{
    int userInput, number, count = 0;

    cin >> userInput;

    for (int j = 1; j <= userInput; j++)
    {
        cin >> number;
        if (number == 1)
        {
            cout << " nao eh primo" << endl;
        }
        else if (number >= 2)
        {
            for (int i = 2; i < number; i++)
            {
                if (number % i == 0)
                {
                    count++;
                    break;
                }
            }

            if (count == 0)
            {
                cout << number << " eh primo" << endl;
            }
            else
            {
                cout << number << " nao eh primo" << endl;
            }
        }

        count = 0;
    }
}