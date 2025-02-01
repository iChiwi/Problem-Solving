#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int N; // Initialize variable N and enter value
    cin >> N;

    if (N % 2 == 0 && N != 2) // Check if number is divisible by 0 under the condition of not being 2 as 2 is always gonna be 0
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
