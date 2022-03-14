#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double A, B, C, a, b, c, media;
    a = 2;
    b = 3;
    c = 5;

    cin >> A >> B >> C;

    media = (a * A + b * B + c * C) / (a + b + c);

    cout << fixed << setprecision(1) << "MEDIA = " << media << endl;
    return 0;
}
