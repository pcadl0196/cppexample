#include <iostream>
using namespace std;
//윤년 계산
int main()
{
    int year;
    bool result;

    cout << "연도를 입력하시오 : ";
    cin >> year;

    //조건 1 : 연도가 4로 나누어 떨어진다
    //조건 2 : 100으로 나누어 떨어지는 연도는 제외한다
    //조건 3 : 400으로 나누어 떨어지는 연도는 윤년이다
    //year가 윤년이면 1이고 윤년이 아니면 0이다
    result = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0; 
    cout << result << endl;

    return 0;
}