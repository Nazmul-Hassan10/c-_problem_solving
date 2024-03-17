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

// -------------------------------

#include <iostream>
using namespace std;

int main(){

    int x = 10;
    int *ptr; // declare the pointer ptr
    ptr = &x; // assing the address of x to ptr
    cout << *ptr << '\n'; // prints 10
    *ptr = 20; // assign 20 to the address where ptr is pointing at right now
    cout << x << '\n'; // prints 20 (notice that the value of x is also changed)
    
    return 0;
}
