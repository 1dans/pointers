#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

//void fill(int* ptr, int size) {
//	for (int i = 0; i < size; ++i) {
//		*(ptr + i) = rand() % 11;
//	}
//}
//
void show(int* ptr, int size) {
	for (int i = 0; i < size; ++i) {
		cout << *(ptr + i) << ' ';
	}
	cout << endl;
}
//
//void replace(int* ptr, int size) {
//	for (int i = 0; i < size; i+=2) {
//		swap(*(ptr + i), *((ptr + i) + 1));
//	}
//}
//int summ(int* ptr, int size) {
//	int s=0;
//	for (int i = 0; i < size; ++i) {
//		s += *(ptr + i);
//	}
//	return s;
//}
//
//char sign(int num) {
//	int* ptr = &num;
//	if (*ptr > 0) return '+';
//	else if (*ptr < 0) return '-';
//	else return '0';
//}

//void userFill(int* ptr, int size) {
//	cout << "Заповніть масив "<< size<<" числами";
//	int* even = nullptr, *odd=nullptr;
//
//	for (int i = 0; i < size; ++i) { 
//		cin >> *(ptr + i); 
//	}
//	
//}
//
//void deleteOdd(int* ptr, int size) {
//	int* ar = new int[size];
//	for (int i = 0; i < size; ++i) if (*(ptr + i) % 2 != 0) ;
//	show(ptr, size);
//}
//
//void deleteEven(int* ptr, int size) {
//	for (int i = 0; i < size; ++i) if (*(ptr + i) % 2 == 0);
//	show(ptr, size);
//}

int main() {
	srand(time(nullptr));
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
	/*int num;
	cout << "Введіть число: ";
	cin >> num;
	cout << sign(num);*/
	
	//int size;
	//cout << "Введіть розмір масиву: ";
	//cin >> size;
	//if (size % 2 != 0) --size;
	//int *ptr = new int[size]; // виділення пам'яти для динамічного масиву
	//fill(ptr, size);
	//show(ptr, size);
	//replace(ptr, size);
	//show(ptr, size);
	//delete[]ptr;

	//int size, ans;
	//cout << "Введіть розмір масиву: ";
	//cin >> size;
	//int* ptr = new int[size];
	//userFill(ptr, size);
	//cout << "Які числа ви би хотіли видалити? 0 - парні, 1 - непарні "<<endl;
	//
	//cin >> ans;
	//if (ans == 0) deleteEven(ptr, size);
	//else if (ans == 1) deleteOdd(ptr, size);
	//else cout << "Цього варіанту немає.";
	// delete[]ptr;
	//const int* p = nullptr; //вказівник на константу
	//cout << p << endl;
	//int x = 5, y=7;
	//p = &x;
	//cout << p << endl;
	//p = &y;
	//cout << p << endl;
	int* const p = nullptr; // констатний вказівник

}
