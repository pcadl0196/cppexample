#include <iostream>
#include <string> //사용자로부터 문자열 입력받는 전처리기
using namespace std;

int main()
{ 
    string s; //이름 저장 변수
    string d;
    cout << "당신의 이름을 입력하시오 : ";
    cin >> s; //이름 입력받음
    cout << s << "씨 환영합니다." << endl;

    cout << "무엇을 해드릴까요? "; //수정한 후에 빌드는 다시하자...
    cin >> d;
    cout << d << "는 할 수 없습니다\n";

    return 0;

}
