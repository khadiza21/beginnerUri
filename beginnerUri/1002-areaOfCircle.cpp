#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double n, R, A;
    n = 3.14159;
    cin >> R;
    A = n * R * R;
    cout << fixed << setprecision(4) << "A=" << A << endl;

    return 0;
}
