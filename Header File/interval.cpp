#include <iostream>
using namespace std;

int main() {
    double value;
    cin >> value;

    if (value >= 0 && value <= 25) {
        cout << "Interval [0, 25]" << endl;
    } else if (value > 25 && value <= 50) {
        cout << "Interval (25, 50]" << endl;
    } else if (value > 50 && value <= 75) {
        cout << "Interval (50, 75]" << endl;
    } else if (value > 75 && value <= 100) {
        cout << "Interval [75, 100]" << endl;
    } else {
        cout << "Outside Intervals" << endl;
    }

    return 0;
}
