#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

void type_of(int num) {std::cout << "INT\n";} //принимает символ и выводит его тип данных
void type_of(double num) { std::cout << "CHAR\n"; } //для решения задачи
void type_of(char sym) { std::cout << "CHAR\n"; } //создана перегруженная функция

int sum_AB(int A, int B); //Прототип функции sum_AB



//3 задание
template <typename T>
void middle_sort(T arr[], const int length);

//заполнение массива случайными числами
template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}
// вывод массива в консоль 
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}
//3 задание

//задание 4
template <typename T>
void move_arr(T arr[], const int length, int steps);


int main () {
	setlocale(LC_ALL, "Russian");
		int n;
		int m;

		//Задача 1. Тип данных, проверка типа данных
		std::cout << "\nЗадача 1.\n";
		std::cout << "77 - "; type_of(77); //отправили число в функцию для проверки типа данных
		std::cout << "5.1 - "; type_of(5.1); //отправили число в функцию для проверки типа данных
		std::cout << "A - "; type_of('A'); //отправили число в функцию для проверки типа данных
		std::cout << std::endl;

		//Задача 2. Рекурсивная сумма
		std::cout << "\nЗадача 2.\nВведите два числа -> ";
		std::cin >> n >> m;
		std::cout << "Сумма числл от " << n << " до " << m << " = " << sum_AB(n, m);

		//Задача 3. Сортировка середины
		std::cout << "\n\nзадача 3.\nИзначальный массив\n";
		const int size3 = 10;
		int arr3[size3];
		fill_arr(arr3, size3, -10, 11);
		print_arr(arr3, size3);

		middle_sort(arr3, size3);
		std::cout << "Итоговый массив:\n";
		print_arr(arr3, size3);


		//Задание 4. Сдвиг по кругу 
		std::cout << "\nЗадачача 4.\nИзначальный массив:\n";
		const int size4 = 10;
		int arr4[size4]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		print_arr(arr4, size4);
		std::cout << "Введите число -> ";
		std::cin >> n;
		move_arr(arr4, size4, n);
		std::cout << "Итоговый массив:\n";
		print_arr(arr4, size4);


		return 0;
}
//задание 4
template <typename T>
void move_arr(T arr[], const int length, int steps) {
	/*for (int i = 1; i <= steps; i++)
	{
		T tmp = arr[length - 1];
		for (int i = length - 1; i >= 1; i--)
			arr[i] = arr[i - 1];
		arr[0] = tmp;
	}
	*/
	if (steps >= 0)
		sor(int i = 0; i < steps; i++)
	{
		T tpm = arr[length - 1];
		for (int j = length - 1; j >= 1; j--)
			arr[j] = [j - 1]
			arr[o] = tpm;
	}
	else
		for (int i = 0; i < -steps; i++)
			for (int j = 0; i < length - 1; j++)
				srd::swap(arr[j], arr[j + 1]);


}

int sum_AB(int A, int B) { //Реализация фнукции sum_AB
	if (A == B)
		return A;
	return sum_AB(A, B - 1) + B;
}

//3 задание
template <typename T>
void middle_sort(T arr[], const int length) {
	int first_index = 0, last_index = 0;
	//Первый отрицательный элемент (его индекс)
	for (int i = 0; i < length; i++)
		if (arr[i] < 0) 
		{
			first_index = i;
			break;
		}
	//Второй отрицытельный элемент (его индекс)
	for (int i = length - 1; i >= first_index; i--)
		if (arr[i] < 0)
		{
			last_index = i;
			break;
		}
	//Пузырьковая сортировка
	/*for (int i = last_index - 1; i > first_index + 1; i--)
		for (int j = first_index +1; j < i; j++)
			if (arr[j] > arr[j + 1])
				std::swap(arr[j], arr[j + 1]);*/
	//Быстрая сортировка
	std::sort(arr + first_index + 1, arr + last_index);

}
// 3 задание