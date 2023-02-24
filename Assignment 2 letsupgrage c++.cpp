#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    cout << "Even numbers from 0 to " << num << " are: ";

    for(int i = 0; i <= num; i += 2)
    {
        cout << i << " ";
    }

    return 0;
}

