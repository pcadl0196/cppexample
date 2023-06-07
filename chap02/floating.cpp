#include <iostream>
#include <string>
using namespace std;
//부동 소수점 자료형
int main()
{
    cout.setf(ios_base::fixed); //소수점 표기법으로 실수를 출력하기 위해서 cout 객체의 setf()라는 메소드 호출함

    float fvalue = 1234567890.12345678901234567890;
    double dvalue = 1234567890.12345678901234567890;
    cout << "float형 변수 = " << fvalue << endl; //대략 6개의 유효숫자를 가질 수 있음(8번째 자리수부터는 정확한 값이 안나옴)
    cout << "double형 변수 = " << dvalue << endl; //15자리 정도의 유효숫자를 가짐 

    return 0;
}