#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    if (a == 0 || b == 0)
    {
        a += b;
        b = 0;
        cout << c * c - a;
    }
    else
    {
        cout << sqrt(a + b);
    }
    return 0;
}
