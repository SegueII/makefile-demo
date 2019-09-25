#include "math.h"
#include <iostream>

using namespace std;

double getRandom() {
    srand((int)time(0));
    return rand() % 100;
}

double add(double a, double b) {
    return a + b;
}