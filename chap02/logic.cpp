#include <iostream>
using namespace std;
//예제1, 논리 연산자
int main()
{
    int x = 10, y = 20;
    bool r1, r2, r3, r4;

    r1 = (x == 10 && y == 20);
    r2 = (x == 10 && y == 30);
    r3 = (x >= 10 || y >= 30);
    r4 = !(x == 5);

    cout << r1 << endl;
    cout << r2 << endl;
    cout << r3 << endl;
    cout << r4 << endl;

    return 0;
}