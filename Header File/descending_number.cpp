// -----------------------------------Descending Number-----------------------------------

// => Write a program that prints all the numbers from 1 to 1000 in descending order.

// *input*
// No input.

// *output*
// Each line will contain a total of 5 numbers and each number will be separated by a (space) character.

#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for (int i = 1000; i >= 1; i--)
    {
        cout << i << " ";
        count++;

        if (count == 5)
        {
            cout << endl;
            count = 0;
        }
    }
    return 0;
}
