#include <iostream>
using namespace std;
int main()
{
    float inputN;
    int countPositive = 0;
    for (int i = 1; i <= 6; i++)
    {
        cin >> inputN;
        if (inputN > 0)
        {
            countPositive++;
        }
    }
    cout << countPositive << " valores positivos" << endl;
}