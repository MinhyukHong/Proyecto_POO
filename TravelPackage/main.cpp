#include <iostream>
#include "director.h"
#include "Package1.h"
#include "Package2.h"
#include "Package3.h"

int main() {
    int type = 1;
    while (type >= 1 && type <= 3) {
        cout << "Enter the type of vacation (1, 2, 3): ";
        cin >> type;
        if (type == 3) {
            Director::book(type);
            break;
        }
        Director::book(type);
    }

    return 0;
}