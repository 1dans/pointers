#include <iostream>
using namespace std;

void show(int* ptr, int size) {
	for (int i = 0; i < size; ++i) {
		cout << *(ptr + i) << ' ';
	}
}

int summ(int* ptr, int size) {
	int s=0;
	for (int i = 0; i < size; ++i) {
		s += *(ptr + i);
	}
	return s;
}

char sign(int num) {
	int* ptr = &num;
	if (*ptr > 0) return '+';
	else if (*ptr < 0) return '-';
	else return '0';
}

int main()
{
	system("chcp 1251>null");
	cout << "вказівники" << endl;
	//int a = 3, b = 5;
	//cout << &a << ' ' << &b << endl; // & - адреса 16-зн

	//int* ptr = nullptr; // вказівник який вказує на порожню адресу
	//ptr = &a;
	/*cout << ptr << endl;
	*ptr = 11;
	cout << ptr << endl;
	cout << a << endl;
	ptr = &b;
	cout << ptr;*/
	/*int ar[] = { 1, 7, 10, 13, 6 ,8, 9, 11 };
	int size = sizeof(ar) / sizeof(ar[0]);
	int* p = ar;
	cout << size << endl;
	cout << *ar << endl;
	cout << ar << endl;
	show(p, size);
	cout << endl << summ(p, size);*/
	//for (int i = 0; i < size; ++i)  cout << *( ar + i ) << endl; cout << *( p + i ) << endl;
	/*int* p1 = &ar[0], * p2 = &ar[1];
	cout << p1<<' '<< p2 << endl;
	cout << p1 - p2 << endl;*/
	int num;
	cout << "Введіть число: ";
	cin >> num;
	cout << sign(num);
}
