#include <iostream>
using namespace std;

int main() {
    double input_value;
    cin >> input_value;

    if (input_value >= 0 && input_value <= 25) {
        cout << "Interval [0, 25]" << endl;
    } else if (input_value > 25 && input_value <= 50) {
        cout << "Interval (25, 50]" << endl;
    } else if (input_value > 50 && input_value <= 75) {
        cout << "Interval (50, 75]" << endl;
    } else if (input_value > 75 && input_value <= 100) {
        cout << "Interval [75, 100]" << endl;
    } else {
        cout << "Outside Intervals" << endl;
    }

    return 0;
}
