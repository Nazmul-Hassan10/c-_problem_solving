#include <iostream>
using namespace std;

int main() {
    int given_days;
    cin >> given_days;

    int years = given_days / 365;

    int reminder_of_n = given_days % 365;
    int months = reminder_of_n / 30;
    int days = reminder_of_n % 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;
}