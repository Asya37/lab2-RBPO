#include <iostream>

//student.1bib21032.Lab2.Variant2.Task1
import student1;
import student2;
import student3;
import student4;
import student5;

using namespace std;
void print(double x, double f1, double x2, double f2, int i, double f3, double e, double f4);
int main()
{
	int �, i;
	double x, x2, e;
	int �2 = 0;
	setlocale(LC_ALL, "rus");
	while (1)
	{
	  if (�2 == 0)
	  {
		cout << "���� �������� ��� ������� f1, f2, f3, f4" << endl;
		cout << "f1(x)  x = ";
		cin >> x;
		cout << "f2(x)  x = ";
		cin >> x2;
		cout << "�� ������ ����� ������������������ � ������� �����? f3(n) n = ";
		cin >> i;
		cout << "������� �������� ��� ������� f4(�) � = ";
		cin >> e;
	  }
	  cout << "����" << endl;
	  cout << "1 �������" << endl;
	  cout << "2 �������" << endl;
	  cout << "3 �������" << endl;
	  cout << "4 �������" << endl;
	  cout << "5 �������" << endl;
	  cout << "0 - ����� �� ���������" << endl;
	  cin >> �;
	  switch (�)
	{
	case 1:
		cout << "����� 1 �������" << endl;
		print(x, RBPO::Lab2::Variant2::Task1::f1(x), x2, RBPO::Lab2::Variant2::Task1::f2(x2), i, RBPO::Lab2::Variant2::Task1::f3(i), e, RBPO::Lab2::Variant2::Task1::f4(e));
		break;

	case 2:
		cout << "����� 2 �������" << endl;
		print(x, RBPO::Lab2::Variant2::Task2::f1(x), x2, RBPO::Lab2::Variant2::Task2::f2(x2), i, RBPO::Lab2::Variant2::Task2::f3(i), e, RBPO::Lab2::Variant2::Task2::f4(e));
		break;

	case 3:
		cout << "����� 3 �������" << endl;
		print(x, RBPO::Lab2::Variant2::Task3::f1(x), x2, RBPO::Lab2::Variant2::Task3::f2(x2), i, RBPO::Lab2::Variant2::Task3::f3(i), e, RBPO::Lab2::Variant2::Task3::f4(e));
		break;

	case 4:
		cout << "����� 4 �������" << endl;
		print(x, RBPO::Lab2::Variant2::Task4::f1(x), x2, RBPO::Lab2::Variant2::Task4::f2(x2), i, RBPO::Lab2::Variant2::Task4::f3(i), e, RBPO::Lab2::Variant2::Task4::f4(e));
		break;

	case 5:
		cout << "����� 5 �������" << endl;
		print(x, RBPO::Lab2::Variant2::Task5::f1(x), x2, RBPO::Lab2::Variant2::Task5::f2(x2), i, RBPO::Lab2::Variant2::Task5::f3(i), e, RBPO::Lab2::Variant2::Task5::f4(e));
		break;

	case 0:
		return 0;
	default:
		cout << "�������� ����" << endl;
		break;
	}
	cout << "���������� � ����� ����������?" << endl;
	cout << "1 - ����������" << endl;
	cout << "0 - ��������" << endl;
	cin >> �2;
    }
	return 0;
}

void print(double x, double f1, double x2, double f2, int i, double f3, double e, double f4)
{
	printf("f1(%f) = %f\n", x, f1);
	printf("f2(%f) = %f\n", x2, f2);
	printf("f3(%d) = %f\n", i, f3);
	printf("f4(%f) = %f\n", e, f4);
}