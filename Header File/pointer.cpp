#include <iostream>
using namespace std;

int main() {
    int *ptr;
    int a = 50;
    ptr = &a;
    cout << *ptr << endl; // value of a
    cout << ptr << endl;  // address of a
    cout << &a << endl;

    *ptr = 20;
    cout << *ptr << endl; // value of a
    cout << a << endl;    // value of a = 20. *ptr=20 also change the main value of a;
    return 0;
}


//--------------- For character --------------------

#include <iostream>
using namespace std;

int main() {
    char *ptr;
    char ch = 'A';

    ptr = &ch;

    cout << "Value of ch: " << *ptr << endl;  // Output: A
    cout << "Address of ch: " << (void *)ptr << endl;  // Output: Address of ch

    return 0;
}
