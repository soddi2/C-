#include <iostream>
using namespace std;

void main() {

	/*int kor, eng, tot, mok;
	double avg;

	cout << "한글 점수 : ";
	cin >> kor;
	cout << "영어 점수 : ";
	cin >> eng;
	
	tot = kor + eng;
	avg = tot / 2.0;
	mok = avg / 10;
	
	switch (mok)
	{
	case 10: 
		cout << "A" << endl;
	break;

	case 8:
		cout << "B" << endl;
			break;
	case 5:
		cout << "C" << endl;
			break;
	case 3:
		cout << "D" << endl;
			break;
	case 1:
		cout << "E" << endl;
			break;

	default:
		cout <<"퇴학" << endl;
		break;
	}*/
	
	int a, b;
	char op;
	cout << "두수를 입력하세요.";
	cin >> a >> b;
	cout << "연산자를 입력하세요" << endl;
	cin >> op;
	
	switch (op)
	{
	case '+':
		cout  << "더한값 : " << a + b << endl;
			break;
	case '-':
		cout << "뺀값 : " << a - b << endl;
		break;
	case '*':
		cout  << "곱합거 : " << a * b << endl;
		break;
	case '/':
		cout << "나눈거 : " << a / b << endl;
		break;
	case '%':
		cout << "나머지 : " << a % b << endl;
		break;
	
	default:
		break;
	}
}





































