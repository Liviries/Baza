/**
 * Done by:
 * Student Name: Severyn Kotyhoroshko
 * Student Group: 123
 * Lab 1.5
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    {
        int a = 10;
        int b = 20;
        int c = 30;
        int d = 40;

        // <УЛО1> (<УЛО2> (A<ОВ1>B) <БЛО> (<УЛО3> (C<ОВ2>D)))
        //  empty (  !    (a == b)    ^   (   !   (c != d)))
        bool res = (!(a == b) ^ (!(c != d)));
        cout << "res: " << boolalpha << res << endl;
    }

    {
        int a = 10;
        int b = 20;
        int c = 30;
        int d = 40;

        // <УЛО1> (<УЛО2> (A<ОВ1>B) <БЛО> (<УЛО3> (C<ОВ2>D)))
        //  empty (  !    (a == b)    ^   (   !   (c != d)))
        bool res = (!(a == b) ^ (!(c != d)));
        cout << "res: " << boolalpha << res << endl;
    }

    return 0;
}
