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
		/* �������� ���������� ������ ������ ���� ��������� ������� M. ������� �������� ��������� � ������� ���������� ��������� �����. ������������ ������.*/
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
		/* ������ ������������ ��� �������� �������� ����� �������� �������. � ������� ������� ��������� ����� ��������� ������ ������ ����������, �������� � ��������� �� 50 �� 100 ������������ */
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
		/* ��������� ������ �� ������ ��������� ����� �������, ����� �������� ��������� ��� ��������� ������� ����� ������� ������������: 
            a.	��������� ������������������; 
            b.	������������ ������������������
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
		/*4.	��� ������ ����� �����. ��������:
a.	�������� �� s-� ������� ������� ������������� ������
b.	�������� �� k-� ������� ������� ������ ������
c.	����� ������� ������� ������: k-� ��� s-�.
*/
		const int size = 10;
		int a[size] = { 0 };

		printf("������� %d ��������\n", size);

		for (int i = 0; i < size; i = i + 1)
		{
			printf("������� ������� �%d:", i + 1);
			scanf("%d", &a[i]);
		}
		printf("�� ����� ��������� ��������:\n");

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

		printf("����� ���������: %d\n", sum);
	}
	break;

	case 5:
	{
		/*5.	��� ������. ��� ��� ��������:
a.	��������� �� 20
b.	�������� �� ��������� �������
c.	��������� �� ����� �.
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
		/* ��� ������. ������� �� ����� ������� ��� ��������������� ��������, ����� �������������*/
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
		/* � ������� �������� ���������� � ���������� �����, ���������� 20 ����������� ���������. ���������� ������ ������, ������� ������ ���� �����.*/
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
		/* ������ ������, ��������� �� 14 ��������� ������ ����. ����� ���������� ��������� ������ �� ��������. */
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
		/* ������ ������, ��������� �� 12 ��������� ������ ����. �������� ����� ������, ������� �������� ������ �������� �������������������� ��������� �������*/
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
		/* ����� ������, ��������� �� 15 ��������� ������������� ����. ���������� ���������� ���������, �������� ������� ������ ������� ��������*/
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