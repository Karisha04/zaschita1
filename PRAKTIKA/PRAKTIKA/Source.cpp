#include "Header.h"
int input_key()
{
	int key;
	cout << "Выберите вариант" << endl;
	cout << "1.Выполнение программы" << endl;
	cout << "2.тест" << endl;
	cout << "3.выход" << endl;
	cin >> key;
	return key;
}
int mini(int* arr, int j)
{
	int min = arr[0];
	for (int i = 0; i < j; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}
void swaper(int* arr, int j)
{

	int min = mini(arr, j);
	swap(arr[2], arr[min]);


}
int* TakeData_and_FindnOfElem(FILE* file, int* arr, int* j)
{

	if (file == NULL)
	{
		cout << "Файл не найден" << endl;
		return 0;
	}
	else
	{

		*j = 0;
		char* readable_str = (char*)malloc(100 * sizeof(char));
		char* now_str = (char*)malloc(100 * sizeof(char));
		char* save_n = (char*)malloc(100 * sizeof(char));
		arr = (int*)malloc(1 * sizeof(int));
		char now[10] = " ";

		cout << endl << "Массив для чтения" << endl;

		fgets(readable_str, 1000, file);

		now_str = strtok(readable_str, now);

		int i = 0;

		int error = 0;

		while (now_str != NULL)
		{
			cout << " " << now_str << " ";
			arr = (int*)realloc(arr, (i + 1) * sizeof(int));
			arr[i] = atoi(now_str);
			if ((now_str[0] >= 'A' && now_str[0] <= 'Z') || (now_str[0] >= 'a' && now_str[0] <= 'z'))
			{

				error = 1;

				now_str = strtok(NULL, now);

			}
			else
			{

				now_str = strtok(NULL, now);
				i++;
				*j = i;

			}


		}

		if (*j < 3)
		{
			cout << endl << "ошибка,элементов меньше 3" << endl;
			arr = (int*)realloc(arr, 0 * sizeof(int));
			*j = 0;

		}
		if (error != 0)
		{

			cout << endl << "ошибка,введены буквы" << endl;
			arr = (int*)realloc(arr, 0 * sizeof(int));
			*j = 0;

		}
		if (*j >= 4)
		{
			cout << endl;
			cout << endl << "Элементов в массиве=" << * j << endl;

			return arr;
		}

	}
}
void Test(int* arr, int j)
{
	FILE* file = fopen("tests.txt", "r+");
	arr = TakeData_and_FindnOfElem(file, arr, &j);
	arr = TakeData_and_FindnOfElem(file, arr, &j);
	arr = TakeData_and_FindnOfElem(file, arr, &j);
	Printarray(arr, j);
	swaper(arr, j);
	Printmodernarray(arr, j);
}
void Printarray(int* arr, int j)
{

	cout << endl << "Массив до преобразования" << endl;
	for (int count = 0; count < j; count++)
	{
		cout << " " << * (arr + count) << " ";
	}
	cout << endl;

}
void Printmodernarray(int* arr, int j)
{

	cout << endl << "Массив после преобразования" << endl;
	for (int count = 0; count < j; count++)
	{
		cout << " " << * (arr + count) << " ";
	}
	cout << endl;
}
void My_Program(int* arr, int j)
{
	FILE* file = fopen("m.txt", "r+");

	arr = TakeData_and_FindnOfElem(file, arr, &j);
	swaper(arr, j);
	Printmodernarray(arr, j);
	cout << endl;
}