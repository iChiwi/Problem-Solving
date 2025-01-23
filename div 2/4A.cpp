#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int N;
    cin >> N;

    if (N % 2 == 0 && N != 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
