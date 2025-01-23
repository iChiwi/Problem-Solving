#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::max;

int main()
{
    int m, n, t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        cin >> m >> n;
        cout << max(m, n) + 1 << endl;
    }
}
