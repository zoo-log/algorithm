#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    list<int> L = {1, 2};
    auto a = L.begin();     // list<int>::iterator a = L.begin(); a is 1
    L.push_front(10); // 10 1 2 
    cout << *a << '\n';
    L.push_back (5); // 10 1 2 5
    L.insert(a, 6); // 10 6 1 2 5
    a++; // a is 2
    a = L.erase(a); // 10 6 1 5, now a is 5
    cout << *a << '\n';

    for (auto i : L) cout << i << ' ';
    
}