#include "../include/utils.h"
#include <iostream>

using namespace std;

int main() {
    cout << "Add:" << endl;
    cout << add(1, 2) << endl;
    cout << "Random:" << endl;
    cout << getRandom() << endl;
    cout << "press enter to exit ..." << endl;
    system("read");
    return 0;
}