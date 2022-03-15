#include <iostream>

using namespace std;

int main()
{

    int number, years, months, days;
    cin >> number;

    if (number < 30)
    {
        cout << 0 << " ano(s)" << endl
             << 0 << " mes(es)" << endl
             << number << " dia(s)" << endl;
    }
    else if (number < 365)
    {
        months = number / 30;
        days = number % 30;

        cout << 0 << " ano(s)" << endl
             << months << " mes(es)" << endl
             << days << " dia(s)" << endl;
    }
    else
    {
        years = number / 365;
        months = (number % 365) / 30;
        days = (number % 365) % 30;

        cout << years << " ano(s)" << endl
             << months << " mes(es)" << endl
             << days << " dia(s)" << endl;
    }

    return 0;
}