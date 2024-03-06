#include <iostream>
using namespace std;

struct triangle
{
    int base, height;
    double area(){
        return base * height / 2.0;
    }
};

int main(){
    triangle a;
    a.base = 10;
    a.height = 20;
    cout << a.area() << endl;

    //--- can be done like this ---

    triangle b = {20, 30};

    cout << b.area() << endl;

//--- can be done like this ---

    triangle c[2];
    c[0] = {10, 20};
    return 0;
}
