#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include <stdio.h>

using namespace std;

void main()
{
start:
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int nz;
	cout << "Vvedite nomer zadaniya: ";
	cin >> nz;
	cout << endl;
	switch (nz)
	{

	case 1:
	{
		/* Создайте одномерный массив целого типа заданного размера M. Задайте значения элементов с помощью генератора случайных чисел. Распечатайте массив.*/
		int a[100];

		cout << "Massiv \n";
		for (int i = 0; i < 100; i++)
		{
			a[i] = -1000 + rand() % 2000;
			cout << a[i] << " ";
		}
	}
	break;

	case 2:
	{
		/* Массив предназначен для хранения значений весов двадцати человек. С помощью датчика случайных чисел заполнить массив целыми значениями, лежащими в диапазоне от 50 до 100 включительно */
		int a[20], schet = 0;

		cout << "Vesa lyudey \n";
		for (int i = 0; i < 20; i++)
		{
			schet++;
			a[i] = 50 + rand() % 50;

			cout << schet << " chelovek vesit " << a[i]<<" kg" << endl;
		}
	}
	break;

	case 3:
	{
		/* Заполнить массив из восьми элементов таким образом, чтобы значения элементов при просмотре массива слева направо образовывали: 
            a.	убывающую последовательность; 
            b.	возрастающую последовательность
*/
#define sizeArr 8
		int arrNumber[sizeArr];

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			arrNumber[i] = 1 + rand() % 99;
		}
		cout << "Pervonachal'ny massiv" << endl;

		for (int i = 0; i <= sizeArr - 1; i++)
		{
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}

		cout << endl;
		cout << "Vozrastayuchiy massiv" << endl;

		for (int i = 0; i < sizeArr ; i++)
		{
			for (int j = (sizeArr - 1); j > i; j--)
			{
				if (arrNumber[j - 1] > arrNumber[j])
				{
					int temp = arrNumber[j - 1];
					arrNumber[j - 1] = arrNumber[j];
					arrNumber[j] = temp;
				}
			}
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}
		cout << endl;
		cout << "Ubyvayushiy massiv" << endl;

		for (int i =7; i > 0; i--)
		{
			for (int j = (sizeArr - 1); j > i; j--)
			{
				if (arrNumber[j - 1] > arrNumber[j])
				{
					int temp = arrNumber[j - 1];
					arrNumber[j - 1] = arrNumber[j];
					arrNumber[j] = temp;
				}
			}
			cout << "arr[" << i << "] = " << arrNumber[i] << "\n";
		}
	}
	break;

	case 4:
	{
		/*4.	Дан массив целых чисел. Выяснить:
a.	является ли s-й элемент массива положительным числом
b.	является ли k-й элемент массива четным числом
c.	какой элемент массива больше: k-й или s-й.
*/
		const int size = 10;
		int a[size] = { 0 };

		printf("Введите %d значений\n", size);

		for (int i = 0; i < size; i = i + 1)
		{
			printf("Введите элемент №%d:", i + 1);
			scanf("%d", &a[i]);
		}
		printf("Вы ввели следующие значения:\n");

		for (int i = 0; i < size; i = i + 1)
		{
			printf("%d", a[i]);

			if (i == size - 1)
			{
				printf("\n");
			}
			else
			{
				printf(", ");
			}
		}
		int sum = 0;
		for (int i = 0; i < size; i = i + 1)
		{
			sum = sum + a[i];
		}

		printf("Сумма элементов: %d\n", sum);
	}
	break;

	case 5:
	{
		/*5.	Дан массив. Все его элементы:
a.	уменьшить на 20
b.	умножить на последний элемент
c.	увеличить на число В.
*/
		int a[10],b;

		cout << "Massiv \n";
		for (int i = 0; i < 10; i++)
		{
			a[i] = 1 + rand() % 99;
			cout << a[i] << " ";

		}
		cout << endl;
		
		cout << "Vse umen'sheno na 20" << endl;
		for (int i = 0; i < 10; i++)
		{
			a[i] = a[i] - 20;
			cout << a[i] << " ";
		}
		cout << endl;
		
		cout << "Vse umnozheno na posledniy element" << endl;
		for (int i = 0; i < 10; i++)
		{
			a[i] = a[i] *a[9];
			cout << a[i] << " ";
		}
		cout << endl;

		cout << "Vvedite chislo b = ";
		cin >> b;
		for (int i = 0; i < 10; i++)
		{
			a[i] = a[i] + b;
			cout << a[i] << " ";
		}
	}
	break;

	case 6:
	{
		/* Дан массив. Вывести на экран сначала его неотрицательные элементы, затем отрицательные*/
		int a[10];

		cout << "Massiv \n";
		for (int i = 0; i < 10; i++)
		{
			a[i] = -100 + rand() % 200;
			cout << a[i] << " ";
		}
		cout << endl;
		cout << "Ne otricatel'nye \n";
		for (int i = 0; i < 10; i++)
		{
			if (a[i]>0)
			cout << a[i] << " ";

		}
		cout << endl;
		cout << "Otricatel'nye \n";
		for (int i = 0; i < 10; i++)
		{
			if (a[i]<0)
				cout << a[i] << " ";

		}

	}
	break;

	case 7:
	{
		/* В массиве хранится информация о количестве побед, одержанных 20 футбольными командами. Определить номера команд, имеющих меньше трех побед.*/
		int a[20],k=0;

		for (int i = 0; i < 20; i++)
		{
			a[i] = 1 + rand() % 9;
		}
		cout << "Footbol komandy imeyushie men'she 3 pobed \n";
		for (int i = 0; i < 20; i++)
		{
			k++;
			if(a[i]<=3)
				cout << k << "-aya komanda. " << a[i] << " win" << endl;
		}
	}
	break;

	case 8:
	{
		/* Ввести массив, состоящий из 14 элементов целого типа. Найти количество элементов четных по значению. */
		int a[14], k = 0;
		cout << "Massiv \n";
		for (int i = 0; i < 14; i++)
		{
			a[i] = 1 + rand() % 9;
			cout << a[i] << endl;
			
		}
		for (int i = 0; i < 14; i++)
		{
			k++;
			if (a[i] % 2 == 0)
				cout <<k << " Chetny " << a[i] << endl;
		}
	}
	break;

	case 9:
	{
		/* Ввести массив, состоящий из 12 элементов целого типа. Получить новый массив, заменив значение пятого элемента среднеарифметическим исходного массива*/
		const int size = 12;
		int array[size];
		float array2[size];
		float sum = 0;

		for (int i = 0; i < size; i++) {
			cin >> array[i];
			array2[i] = array[i];
			sum += array[i];
		}
		array2[4] = sum / size;

		for (int i = 0; i < size; i++) {
			cout << array2[i] << " ";
		}
	}
	break;

	case 10:
	{
		/* Задан массив, состоящий из 15 элементов вещественного типа. Определить количество элементов, значения которых больше первого элемента*/
		int a[15], k = 0;
		cout << "Massiv \n";
		for (int i = 0; i < 15; i++)
		{
			a[i] = 1 + rand() % 9;
		
		}
		cout << "1 element = " << a[0] << endl;
		cout << endl;
		for (int i = 0; i < 15; i++)
		{
			k++;
			if (a[0] < a[i])
				cout <<k<< " element bol'she pervogo elementa = " << a[i] << endl;
		}
	}
	break;

	}

}