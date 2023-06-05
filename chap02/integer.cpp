#include <iostream>
#include <climits> //현재 자기가 사용하는 정수의 크기가 얼마인지 알고싶을때
using namespace std;

//정수형 변수들을 선언하고 정수값들을 대입해보기
int main()
{
    short year = SHRT_MAX; //최대값으로 초기화함
    int sale = INT_MAX; //최대값으로 초기화함
    long total_sale = LONG_MAX; //최대값으로 초기화

    cout << "short형의 크기 = " << sizeof(short) << endl; //줄바꿈 문자(\n)
    cout << "int형의 크기 =" << sizeof(int) << endl;
    cout << "long형의 크기 =" << sizeof(long) << endl << endl;

    cout << "short형의 최대값 = " << year << endl;
    cout << "int형의 최대값 = " << sale << endl;
    cout << "long형의 최대값 = " << total_sale << endl << endl;

    cout << "short형의 최소값 = " << SHRT_MIN << endl;
    cout << "int형의 최소값 = " << INT_MIN << endl;
    cout << "long형의 최소값 = " << LONG_MIN << endl << endl;

    return 0;

}