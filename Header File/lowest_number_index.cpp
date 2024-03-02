#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x = a[0];
    for (int i = 0; i < n; i++)
    {
        x = min(x, a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << i + 1 << endl; // question told to start index count from 1
            break;
        }
    }

    cout << x << endl;

    return 0;
}