#include <iostream>
using namespace std;

int main()
{
    int x = 10, y = 20;
    bool r1, r2, r3, r4;
    r1 = (x == y); //false
    r2 = (x != y); //true
    r3 = (x >= y); //false
    r4 = (x <= y); //true

    cout << r1 << endl; //정수형으로 변환
    cout << r2 << endl;
    cout << r3 << endl;
    cout << r4 << endl;

    return 0;
}