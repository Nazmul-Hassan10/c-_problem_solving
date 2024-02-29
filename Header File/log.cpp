// log.cpp
#include <iostream>
#include "log.h"

int multiplication(int a, int b) {
    return a * b;
}

void multipleAndLog(int a, int b) {
    int result = multiplication(a, b);
    std::cout << result << std::endl;
}
