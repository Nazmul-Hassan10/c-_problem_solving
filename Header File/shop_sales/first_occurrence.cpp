#include <iostream>
using namespace std;

int main(){
    cout << "Number of elements: ";
    int number_of_elemets;
    cin >> number_of_elemets;

    int a[number_of_elemets];

    for (int i = 0; i < number_of_elemets; i++)
    {
        cout << i + 1 << "st element: ";
        cin >> a[i];
    }

    cout << "Search for: ";
    int find;
    cin >> find;

    bool found = false;
    for (int i = 0; i < number_of_elemets; i++)
    {
        if (find == a[i])
        {
            cout << "1st occurrence " << i << endl;
            found = true;
            break;
        }
    }

    if(!found){
        cout << "Not found" << endl;
    }
    return 0;
}