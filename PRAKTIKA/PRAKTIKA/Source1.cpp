#include "Header.h"
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int key;
	int j = 0;
	int imin = 0;
	int* arr = NULL;
	do
	{
		key = input_key();
		switch (key)
		{
		case 1:

			My_Program(arr, j);

			break;
		case 2:
			Test(arr, j);
			break;
		case 3:
		{
			cout << "�����" << endl;
		}
		break;
		default:
			cout << "�� ����� ���-�� �� ��" << endl;
			break;
		}
	} while (key != 3);
	system("pause");
}
