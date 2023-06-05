#include <iostream>
using namespace std;

//정수상수
int main()
{
    int x = 10; //10은 10진수이고 int형이고 값은 10진수로 10이다
    int y = 010; //010은 8진수 이고 int형이고 값은 10진수로 8이다
    int z = 0x10; //16진수이고 int형이고 값은 10진수로 16이다

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}