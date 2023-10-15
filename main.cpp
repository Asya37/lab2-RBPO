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
	int с, i;
	double x, x2, e;
	int с2 = 0;
	setlocale(LC_ALL, "rus");
	while (1)
	{
	  if (с2 == 0)
	  {
		cout << "Ввод значений для функций f1, f2, f3, f4" << endl;
		cout << "f1(x)  x = ";
		cin >> x;
		cout << "f2(x)  x = ";
		cin >> x2;
		cout << "До какого члена последовательности а считать сумму? f3(n) n = ";
		cin >> i;
		cout << "Задайте точность для функции f4(е) е = ";
		cin >> e;
	  }
	  cout << "Меню" << endl;
	  cout << "1 задание" << endl;
	  cout << "2 задание" << endl;
	  cout << "3 задание" << endl;
	  cout << "4 задание" << endl;
	  cout << "5 задание" << endl;
	  cout << "0 - Выход из программы" << endl;
	  cin >> с;
	  switch (с)
	{
	case 1:
		cout << "Вывод 1 задания" << endl;
		print(x, RBPO::Lab2::Variant2::Task1::f1(x), x2, RBPO::Lab2::Variant2::Task1::f2(x2), i, RBPO::Lab2::Variant2::Task1::f3(i), e, RBPO::Lab2::Variant2::Task1::f4(e));
		break;

	case 2:
		cout << "Вывод 2 задания" << endl;
		print(x, RBPO::Lab2::Variant2::Task2::f1(x), x2, RBPO::Lab2::Variant2::Task2::f2(x2), i, RBPO::Lab2::Variant2::Task2::f3(i), e, RBPO::Lab2::Variant2::Task2::f4(e));
		break;

	case 3:
		cout << "Вывод 3 задания" << endl;
		print(x, RBPO::Lab2::Variant2::Task3::f1(x), x2, RBPO::Lab2::Variant2::Task3::f2(x2), i, RBPO::Lab2::Variant2::Task3::f3(i), e, RBPO::Lab2::Variant2::Task3::f4(e));
		break;

	case 4:
		cout << "Вывод 4 задания" << endl;
		print(x, RBPO::Lab2::Variant2::Task4::f1(x), x2, RBPO::Lab2::Variant2::Task4::f2(x2), i, RBPO::Lab2::Variant2::Task4::f3(i), e, RBPO::Lab2::Variant2::Task4::f4(e));
		break;

	case 5:
		cout << "Вывод 5 задания" << endl;
		print(x, RBPO::Lab2::Variant2::Task5::f1(x), x2, RBPO::Lab2::Variant2::Task5::f2(x2), i, RBPO::Lab2::Variant2::Task5::f3(i), e, RBPO::Lab2::Variant2::Task5::f4(e));
		break;

	case 0:
		return 0;
	default:
		cout << "Неверный ввод" << endl;
		break;
	}
	cout << "Продолжить с этими значениями?" << endl;
	cout << "1 - продолжить" << endl;
	cout << "0 - изменить" << endl;
	cin >> с2;
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