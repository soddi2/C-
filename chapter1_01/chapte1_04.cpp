#include <iostream> //C++ ǥ�� �����

using namespace std;

void main()
{
	/*int a, b;
	cout << "ù��° ���ڸ� �Է��ϼ��� :";
	cin >> a, b;
	cout << "�ι�° ���ڸ� �Է��ϼ��� :";
	cin >> b;
	cout << "a = " << a << endl << "b = " << b << endl;
	cout << "ū ��ȣ =";
	a > b ? cout << a << "��(��)��ŭ" << endl : cout << b << "��(��)��ŭ" << endl;*/

	//int i, j, k, max, min;
	//cout << "���� 3���� �Է��ϼ��� : ";
	//cin >> i >> j >> k;
	////���� �����ڸ� �̿��ؼ� max�� min���� ���ϱ�
	//max = (i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k);
	//min = (i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k);
	//cout << "max " << max << endl;
	//cout << "min= " << min << endl;

	int n, n1, n2, n3, n4, n5;
	cout << "�ټ��ڸ� ���� �Է��ϼ��� :";
	cin >> n;
	cout << n << "��" << endl;
	n1 = n / 10000; 
	n = n - n1 * 10000; //n�� ����
	
	n2 = n / 5000;
	n = n - n2 * 5000; //n�� ����

	n3 = n / 1000;
	n = n % 1000; //n�� ����

	n4 = n / 500;
	n = n % 500; //n�� ����

	n5 = n / 100;
	n = n % 100; //n�� ����

	cout << n1 << "��" << n2 << "��" << n3 << "��" << n4 << "��" << n5 << "��" << endl;
}






































