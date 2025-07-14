#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int num, deno;
    num = a * d + b * c;
    deno = b * d;
   
    int div = gcd(num, deno);
    
    if(div)
    {
        num /= div;
        deno /= div;
    }

    cout << num << ' ' << deno << '\n';

    return 0;
}
