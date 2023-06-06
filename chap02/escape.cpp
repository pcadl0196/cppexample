#include <iostream>
#include <string>
using namespace std;
//제어 문자
int main()
{
    cout << "아이디와 패스워드를 입력하세요 : \n";
    cout << "id : ____\b\b\b\b";
    string id, pass;
    cin >> id;
    cout << "pass : ____\b\b\b\b";
    cin >> pass;
    cout << "\a입력된 아이디는\" " << id << "\"이고 패스워드는\" " << pass << "\"입니다.\n";
    return 0;
}