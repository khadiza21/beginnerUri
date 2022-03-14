#include <iostream>
using namespace std;

void findas(int x, int y)
{

    if (x > y)
    {
        cout << "Decrescente" << endl;
    }
    else if (x < y)
    {
        cout << "Crescente" << endl;
    }
    else
    {
        cout << "" << endl;
    }
}

int main()
{
    int x, y;
    int i;
    while (1)
    {
        cin >> x >> y;
        if (x == y)
        {
            break;
        }

        findas(x, y);

        i++;
    }
}
