// -----------------------------------Summation---------------------------------
// A program should be written to determine the sum of the first and last digits of a five-digit number.

// Input
// The first input of the program will be an integer T (1 ≤ T ≤ 10,000), which will indicate the total number of five-digit inputs to be taken. The next T-number line should input one integer N (10,000 ≤ N ≤ 99,999).

// Output
// The sum of the first and last digits of N should be printed at the output of the program in the same format as shown in the sample output below. A newline must be printed after each output. The before and after spacing in the output is noticeable.=

// Sample
// Input	Output
// 5
// 98023
// 45830
// 76406
// 15528
// 30576

// Sum = 12
// Sum = 4
// Sum = 13
// Sum = 9
// Sum = 9



#include <iostream>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    for (int i = 1; i <= test_case; i++)
    {
        int number;
        cin >> number;
        int last_num = number % 10;
        int first_num;

        for (int i = 1; i <= 5; i++)
        {
            int remain = number % 10;
            first_num = remain;
            number /= 10;
        }
        cout << "Sum = " << last_num + first_num << endl;
    }

    return 0;
}