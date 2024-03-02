#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    
    int x;
    cin >> x;


    bool not_found = true;

    for (int i = 0; i < n; i++) //can use (sizeof(a) / sizeof(a[0])) for length of a array
    {
        if (a[i] == x)
        {
            cout << i << endl;
            not_found = false;
            break;
        }
        
    }

    if (not_found == true)
    {
        cout << "-1" << endl;
    }
    
    
    

    return 0;
}