//Операции над указателями
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int* ca, * cb;
	int* sa, * sb, * sc;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	c = a + b;

	sb = &b;//инициализация указателей через взятие адреса
	sa = &a;
	sc = &c;

	//присваивание указателю значения выражения
	*sc = c + a - b;
	ca = sa;//присваивание указателю значения другого указателя
	cb = sb;
	*sa = 12;//присваивание указателю значения константы

	cout << "\n*ca = " << *ca;
	cout << "\n*sa = " << *sa;
	cout << "\n*cb = " << *cb;
	cout << "\n*sb = " << *sb;
	cout << "\n*sc = " << *sc;

	cout << "\nca = " << ca;
	cout << "\ncb = " << cb;
	cout << "\nsc = " << sc;

	cout << "\na = " << a;
	cout << "\nb = " << b;
	cout << "\nc = " << c;

	cout << "\n&a = " << &a;
	cout << "\n&b = " << &b;
	cout << "\n&c = " << &c;

	cout << "\n*&a = " << *&a;

	cout << "\n*cb-*ca = " << *cb - *ca;
	cout << "\n*cb+*ca = " << *cb + *ca;

	*cb += 2;
	cout << "\ncb = " << cb;
	cb++; 
	cout << "\ncb = " << cb;
	ca--; 
	cout << "\ncà = " << ca;
	cout << "\ncb-ca = " << cb - ca << endl;

	system("pause");
	return 0;
}
