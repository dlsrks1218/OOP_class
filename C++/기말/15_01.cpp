#include <iostream>

using namespace std;
void divide(int num1, int num2) {
	if (num2 == 0 || num2<0)
		throw num2;
}
int main(void) {
	int num1, num2;
	cout << "두 개의 숫자 입력 : ";
	cin >> num1 >> num2;

	try {
		divide(num1, num2);
		cout << "나눗셈의 몫 : " << num1 / num2 << endl;
		cout << "나눗셈의 나머지 : " << num1%num2 << endl;
	}
	catch (int expn) {
		cout << "제수는 " << expn << "이 될 수 없습니다" << endl;
		cout << "프로그램을 다시 실행하세요" << endl;
	}
	catch (char ch) {
		cout << "문자 " << ch << "가 입력되었습니다" << endl;
		cout << "프로그램을 다시 실행하세요" << endl;
	}
	cout << "End of Main" << endl;

	return 0;
}