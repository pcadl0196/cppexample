#include <iostream>
#include <climits>
using namespace std; //이름 공간 설명

//오버플로우
int main()
{
    short s_money = SHRT_MAX; //최대값으로 초기화함
    unsigned short u_money = USHRT_MAX; //최대값으로 초기화함

    s_money = s_money + 1;
    cout << "s_money = " << s_money << endl;

    u_money = u_money + 1;
    cout << "u_money = " << u_money << endl;

    return 0;
}