#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> a;

    // int num;

    // while (cin >> num && num != -1)
    // {
    //     a.push_back(num);
    // }

    // int sum = 0;
    // for (int i = 0; i < a.size(); ++i) {
    //     sum += a[i];
    // }

    // cout << "Sum of elements: " << sum << endl;
    
    // if (sum <= 10000)
    // {
    //     cout << "loss project 😂 "  << endl;
    // } else{
    //     cout << "Rich af now 🗿 "  << endl;
    // }

    int days = 7;
    int a[days];

    for (int i = 0; i < days; i++)
    {
        cin >> a[i];
    }

    int sum = 0;
    for (int i = 0; i < days; i++)
    {
        sum += a[i];
    }
    
    cout << "Sum of elements: " << sum << endl;
    
    if (sum <= 10000)
    {
        cout << "loss project 😂 "  << endl;
    } else{
        cout << "Rich af now 🗿 "  << endl;
    }
    

    return 0;
}