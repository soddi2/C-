#include <iostream>
using namespace std;

void main() {

	/*int kor, eng, tot, mok;
	double avg;

	cout << "�ѱ� ���� : ";
	cin >> kor;
	cout << "���� ���� : ";
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
		cout <<"����" << endl;
		break;
	}*/
	
	int a, b;
	char op;
	cout << "�μ��� �Է��ϼ���.";
	cin >> a >> b;
	cout << "�����ڸ� �Է��ϼ���" << endl;
	cin >> op;
	
	switch (op)
	{
	case '+':
		cout  << "���Ѱ� : " << a + b << endl;
			break;
	case '-':
		cout << "���� : " << a - b << endl;
		break;
	case '*':
		cout  << "���հ� : " << a * b << endl;
		break;
	case '/':
		cout << "������ : " << a / b << endl;
		break;
	case '%':
		cout << "������ : " << a % b << endl;
		break;
	
	default:
		break;
	}
}





































