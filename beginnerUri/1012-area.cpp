#include <iomanip>
#include <iostream>
using namespace std;

int main()
{

    double A, B, C, triangle, circle, trapezium, square, rectangle, pi = 3.14159;
    cin >> A >> B >> C;

    triangle = 0.5 * A * C;
    circle = pi * C * C;
    trapezium = 0.5 * (A + B) * C;
    square = B * B;
    rectangle = A * B;

    cout << fixed << setprecision(3) << "TRIANGULO: " << triangle << endl
         << "CIRCULO: " << circle << endl
         << "TRAPEZIO: " << trapezium << endl
         << "QUADRADO: " << square << endl
         << "RETANGULO: " << rectangle << endl;

    return 0;
}
