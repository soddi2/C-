#include <iostream> //C++ 표준 입출력

using namespace std;

void main()
{
	/*int a, b;
	cout << "첫번째 숫자를 입력하세요 :";
	cin >> a, b;
	cout << "두번째 숫자를 입력하세요 :";
	cin >> b;
	cout << "a = " << a << endl << "b = " << b << endl;
	cout << "큰 번호 =";
	a > b ? cout << a << "이(가)더큼" << endl : cout << b << "이(가)더큼" << endl;*/

	//int i, j, k, max, min;
	//cout << "숫자 3개를 입력하세요 : ";
	//cin >> i >> j >> k;
	////삼항 연산자를 이용해서 max와 min값을 구하기
	//max = (i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k);
	//min = (i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k);
	//cout << "max " << max << endl;
	//cout << "min= " << min << endl;

	int n, n1, n2, n3, n4, n5;
	cout << "다섯자리 수를 입력하세요 :";
	cin >> n;
	cout << n << "은" << endl;
	n1 = n / 10000; 
	n = n - n1 * 10000; //n값 갱신
	
	n2 = n / 5000;
	n = n - n2 * 5000; //n값 갱신

	n3 = n / 1000;
	n = n % 1000; //n값 갱신

	n4 = n / 500;
	n = n % 500; //n값 갱신

	n5 = n / 100;
	n = n % 100; //n값 갱신

	cout << n1 << "개" << n2 << "개" << n3 << "개" << n4 << "개" << n5 << "개" << endl;
}






































