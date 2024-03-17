// ---------------------------------Divisor-----------------------------------------
// Find all factors (divisors) of a number.

// input
// The first line will contain the number of test cases T (≤ 10). The next T-number of lines will each contain an integer N, where 1 ≤ N ≤ 100,000.

// output
// One line should be printed for each case, beginning with the case number. Then print all factors of N in ascending order. Each factor should be printed only once. Factors must be separated by a space only. There will be no extra spaces at the end of the line.

// sample
// input output
// 3
// 5555
// 120
// 49

// Case 1: 1 5 11 55 101 505 1111 5555
// Case 2: 1 2 3 4 5 6 8 10 12 15 20 24 30 40 60 120
// Case 3: 1 7 49

#include<iostream>
using namespace std;

int main() {
  int t; cin >> t;
  for (int case_number = 1; case_number <= t; case_number++) {
    cout << "Case " << case_number << ": ";
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
      if (n % i == 0) { // if i divides n
        cout << i << ' ';
      }
    }
    cout << '\n';
  }
  return 0;
}