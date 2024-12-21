#include <iostream>
#include<algorithm>
#include <vector>
#include <iomanip>
using namespace std;

//void fill(int* ptr, int size) {
//	for (int i = 0; i < size; ++i) {
//		*(ptr + i) = rand() % 11;
//	}
//}

//void fill_2d(int** ptr, int row, int col) {
//	for (int i = 0; i < row; i++) {
//		ptr[i] = new int[col];
//		for (int j = 0; j < col; j++) {
//			ptr[i][j] = -10 + rand() % 41;
//		}
//	}
//}
//
//void print_2d(int** ptr, int row, int col) {
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			cout << ptr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//int check_null(int** ptr, int row, int col) {
//	int count=0;
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			if (ptr[i][j] == 0) { count++; break; }
//		}
//	}
//	return count;
//}
//
void delete_2d(int** ptr, int row) {
	for (int i = 0; i < row; i++) {
		delete[] ptr[i];
	}
	delete[] ptr;
}
//void show(int* ptr, int size) {
//	for (int i = 0; i < size; ++i) {
//		cout << *(ptr + i) << ' ';
//	}
//	cout << endl;
//}


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

//int main() {
//	srand(time(nullptr));
//	system("chcp 1251>null");
//	cout << "вказівники" << endl;
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
	/*int* const p = nullptr;*/ // констатний вказівник
	//int row, col;
	//cout << "Введіть кількість рядків та стовпці: ";
	//cin >> row >> col;
	//int** pArr = new int* [row];
	//fill_2d(pArr, row, col);
	//print_2d(pArr, row, col);
	//int* p = new int [row];
	//for (int i = 0; i < row; ++i) {
	//	bool check = check_nulls(pArr, i, col);
	//	if (check == true) p[i] = i;
	//	cout << p[i];
	//}
	//delete_2d(pArr, row);
	//delete[] p;
//}
void fullArray(int rows, int columns, int** arr)
{
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[columns];
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = -5 + rand() % 11;

		}
	}
}

void outputArray(int rows, int columns, int** arr)
{
	cout << "\033[033mВиведення масиву: \033[0m" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << setw(4) << arr[i][j];

		}
		cout << endl;
	}
}
//int arrayConvertion(int rows, int columns, int** arr);
//
//void arrayWithoutNulls(int rowsOld, int rowsNew, int columns, int** oldArray);

void transport_matrix(int row, int col, int** arr) {
	int** revArr = new int* [col];
	for (int j = 0; j < col; ++j) {
		revArr[j] = new int[row];
		for (int i = 0; i < row; ++i)
		{
			revArr[j][i] = arr[i][j];
			//cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	outputArray(row, col, revArr);
	delete_2d(revArr, row);
}

int main()
{
	system("chcp 1251>null");
	srand(time(0));
	int row, col;
	cout << "Input rows: ";
	cin >> row;
	cout << endl;
	cout << "Input columns: ";
	cin >> col;

	int** pArr = new int* [row];
	fullArray(row, col, pArr);
	outputArray(row, col, pArr);
	transport_matrix(row, col, pArr);
	
	/*int result = row - arrayConvertion(row, col, pArr);
	cout << endl << "Кількість рядків без нулів: " << result << endl;*/
	/*arrayWithoutNulls(row, result, col, pArr);*/
	delete_2d(pArr, row);

	return 0;
}






//int arrayConvertion(int rows, int columns, int** arr)
//{
//	int count = 0;
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < columns; j++)
//		{
//			if (arr[i][j] == 0)
//			{
//				count++;
//				break;
//			}
//		}
//	}
//
//	return count;
//}
//
//void arrayWithoutNulls(int rowsOld, int rowsNew, int columns, int** oldArray)
//{
//	int** newArray = new int* [rowsNew];
//
//	int index = 0;
//
//	for (int i = 0; i < rowsOld; i++)
//	{
//		int zero = 0;
//		for (int j = 0; j < columns; j++)
//		{
//			if (oldArray[i][j] == 0)
//			{
//				zero = 1;
//				break;
//			}
//
//		}
//		if (zero == 0)
//		{
//			newArray[index] = new int[columns];
//			for (int n = 0; n < columns; n++)
//			{
//				newArray[index][n] = oldArray[i][n];
//			}
//			index++;
//		}
//	}
//
//	cout << endl << "Масив без нуликів: " << endl;
//	outputArray(rowsNew, columns, newArray);
//}