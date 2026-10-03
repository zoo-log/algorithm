#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    for (;;)
    {
        getline(cin, input);
        stack<int> s;
        bool b = true;
        if (input == ".") return 0;

        for (auto c : input)
        {
            if (c == '(' || c == '[') s.push(c);
            else if (c == ')')
            {
                if (s.empty() || s.top() != '(')
                {
                    b = false;
                    break;
                }
                s.pop();
            }
            else if (c == ']')
            {
                if (s.empty() || s.top() != '[')
                {
                    b = false;
                    break;
                }
                s.pop();
            }
        }
        if (!s.empty()) b = false;
        cout << ((b == true) ? "yes" : "no") << '\n';
    }
}