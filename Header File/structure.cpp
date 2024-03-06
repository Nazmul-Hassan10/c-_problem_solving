#include <iostream>
using namespace std;

struct student
{
    int age;
    char name[100];
    int marks[8];
};



int main() {
    student Nazmul;
    Nazmul.age = 23;
    char s[] = "Nazmul";
    for (int i = 0; i < 6; i++)
    {
        Nazmul.name[i] = s[i];
    }
    Nazmul.name[6] = '\0';

    cout << Nazmul.name << endl;
    Nazmul.marks[0] = 95;
    cout << Nazmul.marks[0] << endl;

    // --------------

    student rahat;
    rahat.age = 15;
    cout << rahat.age << endl;

    return 0;
}