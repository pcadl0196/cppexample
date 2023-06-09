#include <iostream>
using namespace std;
 //나머지 연산자 : 초단위의 시간을 받아서 몇분 몇초인지를 계산하는 예제
int main()
{
    int input, minute, second;
    const int SEC_PER_MINUTE = 60;

    cout << "초단위의 시간을 입력하시오 : (32억초 이하)";
    cin >> input; //초단위의 시간을 읽는다

    minute = input / SEC_PER_MINUTE; //몇분
    second = input % SEC_PER_MINUTE; //몇초

    cout << input << "초는" << minute << "분" << second << "초입니다." <<endl;

    return 0;
}