#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] += 1000; //if and value is in negative hopefully this 1000 will make it positive😅
    }

    bool visited[2001];
    for (int i = 0; i < 2001; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        visited[x] = true;
    }

    int cnt;
    for (int i = 0; i < 2001; i++)
    {
        if (visited[i])
        {
            cnt++;
        }
        
    }
    cout << cnt << endl;

    return 0;
}