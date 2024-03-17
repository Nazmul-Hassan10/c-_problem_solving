// Seeing that you did not have enough work on hand, you were given the task of painting a box. Actually, it's not that hard. You will be told the length of one side of the square, and you will quickly draw that square using the letter. Not only should the sides of the square be drawn, but the inner rooms should also be filled with them. Since you have started learning programming and have learned up to the loop, you will do the work by writing a program.**

// Input
// The first line will have a number T (1 ≤ T ≤ 25) and then there will be a T-numbered line. Each line has a number N with a value between 1 and 80.

// Output
// N \times N squared for each N. Fill the whole square with it. Each square should be separated by a blank line. Extra blank lines or spaces cannot be placed anywhere other than separation work.*

// Sample
// Input	Output
// 2
// 11
// 6

// ***********
// ***********
// ***********
// ***********
// ***********
// ***********
// ***********
// ***********
// ***********
// ***********
// ***********

// ******
// ******
// ******
// ******
// ******
// ******

#include <iostream>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    for (int k = 1; k <= test_case; k++)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
            cout << endl;
            
        }
        if (k != test_case)
        {
            cout << endl;
        }
        
    }

    return 0;
}