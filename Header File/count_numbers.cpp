#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string numbers;
    getline(cin, numbers);

    int cnt = 0;
    for (int i = 0; i + 1 < numbers.length() ; i++)
    {
        if (numbers[i] != ' ' && numbers[i + 1] != ' ')
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}