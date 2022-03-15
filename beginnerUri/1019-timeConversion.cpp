#include <iostream>

using namespace std;

int main()
{

    int number, hours, minutes, seconds;
    cin >> number;

    if (number < 60)
    {
        cout << 0 << ":" << 0 << ":" << number << endl;
    }
    else if (number < 3600)
    {
        minutes = number / 60;
        seconds = number % 60;
        cout << 0 << ":" << minutes << ":" << seconds << endl;
    }
    else
    {
        hours = number / 3600;
        minutes = (number % 3600) / 60;
        seconds = (number % 3600) % 60;
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    return 0;
}