#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int R;
    double volume, pi = 3.14159;
    cin >> R;
    double r = (double)R;

    volume = (4 / 3.0) * pi * r * r * r;

    cout << fixed << setprecision(3) << "VOLUME = " << volume << endl;
    return 0;
}
