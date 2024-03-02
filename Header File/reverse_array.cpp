#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        int j = n - i - 1;
        swap(a[i], a[j]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}

// ------------------------------ With build in function -------------------------

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 6;

    int a[n] = {0, 1, 2, 5, 6};

    reverse(a + 1, a + 4);

    for (int i = 0; i < n; i++)
    {
        cout << i << ' ';
    }
    return 0;
}