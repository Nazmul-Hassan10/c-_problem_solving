// ---------------------------------Factorial---------------------------------
// You have to write a program that can find a numeric or factorial of a number.

// Input
// The first line of input will contain the number of test cases T (T ≤ 100). Then there will be a T-number of lines. Each line contains an integer N (0 ≤ N ≤ 15).

// Output
// The output of the program must be printed secondary or factorial.

// Sample
// Input
// 5
// 1
// 2
// 3
// 4
// 5

// Output
// 1
// 2
// 6
// 24
// 120



#include <iostream>
using namespace std;

int main(){
    int test_case;
    cin >> test_case;

    for (int i = 1; i <= test_case; i++)
    {
        int a;
        cin >> a;
        long long int sum = 1;

        for (int i = 1; i <= a; i++)
        {
            sum *= i;
        }
        cout << sum << endl;
    }
    return 0;
}