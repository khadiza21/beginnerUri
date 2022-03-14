#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int inputNum;
    float num1, num2, num3, average;
    cin >> inputNum;
    for (int i = 1; i <= inputNum; i++)
    {
        cin >> num1 >> num2 >> num3;
        average = (num1 * 2 + num2 * 3 + num3 * 5) / ((2 + 3 + 5));
        cout << fixed << setprecision(1) << average << endl;
    }

    return 0;
}