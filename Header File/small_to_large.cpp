// ----------------------------------small to large-------------------------------------
// There will be three different numbers. They have to be printed from small to large sizes.

// Input
// The first line of input will contain the number of test cases T (T≤100). Then there will be a T-number of lines. Three integers in each line n1, n2, n3 All of them are unique (i.e., no two numbers are equal to each other) and equal or less than 1000.

// Output
// A case number should be printed for each case. Then the given three numbers have to be arranged from small to large size and printed. Besides, only one space between two numbers needs to be printed. You can see more details in the sample output.

// Sample
// Input	Output
// 2
// 281 260 70
// 123 907 266

// Case 1: 70 260 281
// Case 2: 123 266 907

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int test_case;
    cin >> test_case;

    for (int i = 1; i <= test_case; i++){
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        int a = min(min(n1, n2), n3);
        int b = max(max(n1, n2), n3);
        if (n1 != a && n1 != b)
        {
            cout << "Case " << i <<": " << a << " " << n1 << " " << b << endl;
        } else if (n2 != a && n2 != b){
            cout << "Case " << i <<": " << a << " " << n2 << " " << b << endl;
        } else if (n3 != a && n3 != b){
            cout << "Case " << i <<": " << a << " " << n3 << " " << b << endl;
        }
    }
    return 0;
}