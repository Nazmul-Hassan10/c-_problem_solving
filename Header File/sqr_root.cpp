// -----------------------------------Square Number----------------------------------

// You have to write a program to find out whether a number is a perfect square or not.

// Input
// The first line of input will contain the number of test cases T (T≤ 100). Then there will be a T-number of lines. Each line will contain an integer N (0≤ N ≤ 2^31)।

// Output
// The output of the program should be printed if N is a perfect square number. Otherwise you have to print.YESNO

// Sample
// Input	Output
// 5
// 16
// 13
// 0
// 1
// 64

// YES
// NO
// YES
// YES
// YES


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    for (int i = 1; i <= test_case; i++)
    {
        int num;
        cin >> num;
        int a = sqrt(num);
        if (a * a == num)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}