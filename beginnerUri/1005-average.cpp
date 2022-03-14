#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double A, B, a, b, media;
    a = 3.5;
    b = 7.5;
    cin >> A >> B;
    media = (a * A + b * B) / (a + b);
    cout << fixed << setprecision(5) << "MEDIA = " << media << endl;

    return 0;
}
