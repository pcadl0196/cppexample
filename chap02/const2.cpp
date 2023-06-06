#include <iostream>
using namespace std;
//기호 상수
int main()
{
    const int MONTHS = 12; //기호 상수 표현
    double m_salary, y_salary; //변수 선언

    cout << "월급을 입력하세요 : "; //입력 안내문
    cin >> m_salary;

    y_salary = 12 * m_salary; //순수입계산
    cout << "연봉은" << y_salary << "입니다." << endl;
    
    return 0;
}