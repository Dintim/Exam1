#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>
#include <iostream>


using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));


	int n = 0;
	printf("������� ����� �������: ");
	scanf("%d", &n);

	switch (n)
	{
	case 1:
	{
		//1.	������� ������� ������ ���������� ���������� && � ||.
		printf("1.	������� ������� ������ ���������� ���������� && � ||.\n"
			"--------------------------------------------------------\n"
			"&& - �������� ����������� ��������� ��������; ������ - ���� ����������� ������� � � ������������ ����������� ������� �, � ��������� ������ - ����\n"
			"|| - �������� ����������� ��������� ��������; ������ - ���� ����������� ���� ������� �, ���� ������� �, ���� ��� ������� �����, � ��������� ������ - ����\n"
		);
	}
	break;

	case 2:
	{
		//2.	�������� ��������� � ������� ������ ��������� ��������� if.
		printf("2.	�������� ��������� � ������� ������ ��������� ��������� if.\n"
			"--------------------------------------------------------------\n"
			"\n���������:\n"
			"if (������� 1)\n"
			"{\n"
			"    ����� �������� ������ ���� �����������, ���� ������� 1 �������.\n"
			"}\n"
			"else if (������� 2)\n"
			"{\n"
			"    ����� �������� ������ ���� �����������, ���� ������� 1 �� �����������, �� ����������� ������� 2.\n"
			"}\n"
			"else\n"
			"{\n"
			"    ����� �������� ������ ���� �����������, ���� ������� �� ��������� ������� �� �����������\n"
			"}\n"
			"\n������� ������ ��������� ��������� if:\n"
			"�������� if ��������������� ��������� �� ���������� ��������� ���������� ��������� �������,\n"
			"� � ����������� �� ����������/������������ ������� ��������� ������ ����� �������� �� ���������� ����������\n\n"
		);
	}
	break;

	case 3:
	{
		//3.	�������� ��������� � ������� ������ ��������� �������������� ������ switch.
		printf("3.	�������� ��������� � ������� ������ ��������� �������������� ������ switch.\n"
			"--------------------------------------------------------------\n"
			"\n���������:\n"
			"switch (����������, �� ������� ����� ��������� ��������)\n"
			"{\n"
			"case 1 ��� 'A':\n"
			"{\n"
			"   ����� �������� ������ ���� �����������, ���� ������������ ������ ������� 1/'A' �������.\n"
			"}\n"
			"break;\n"
			"case 2 ��� '�':\n"
			"{\n"
			"   ����� �������� ������ ���� �����������, ���� ������������ ������ ������� 2/'�' �������.\n"
			"}\n"
			"break;\n"
			"default:\n"
			"{\n"
			"   ����� �������� ������ ���� ����������� �� ���������\n"
			"}\n"
			"break;\n"
			"}\n"
			
			"\n������� ������ ��������� switch:\n"
			"�������� switch ��������� �� ���� ��������� ����������, �� ������� ����� ������������ ���������� �����\n"
			"� ����������� �� ������ �������� ���������� ������ ����������� �� ���� ���������������� ����� � ��������� ��������, ��������� � ���� �����\n\n"
		);
	}
	break;
	
	case 4:
	{
		//5.	�������� ��������� �++ ����������� ��������� ��������:
			//a.���������� ���������� x, y, z ���� int.���� � ���������� �������� x � y.
			//b.������������ ����� x � y ���������� z.���������� �������� x �� 1 ����� ����������.
			//c.�������� ������ ��  �������� z ����� 10. ���� ������ �� ������ ������ : �z ������ 10�.
			//d.���������� ������� �� ������� y �� x � ���������� ���������� y.�������� ��� ��������.

			int x = 0, y = 0, z = 0;
			printf("������� �������� x: ");
			scanf("%d", &x);

			printf("������� �������� y: ");
			scanf("%d", &y);

			z = x + y;
			x = x + 1;

			if (z>10)
			{
				printf("z ������ 10\n");
			}

			y = y%x;

			printf("x = %d, y = %d\n", x, y);
	}
	break;

	case 5:
	{
		//#include <iostream>
		/*using namespace std;
		void main()
		{
			bool b = double(1 / 2);
			cout << b;
		}*/

		printf("�� ������ ����� �������� 0\n");
	}
	break;

	case 6:
	{
		/*int a;
		cout << "Enter a:"
			cin >> a;

		switch (a)
		{
		case 1:
			cout << "One";
		case 2:
			cout << "Two";
		case 3:
			cout << "Three";
		}*/

		printf("��� �� ������������, �.�. �� 2 ������ ��� ;\n");
	}
	break;

	case 7:
	{
		/*int a = 3, b = 4;

		if (a = b)
		{
			cout << "�����";
		}
		else
		{
			cout << "�������";
		}*/

		printf("��� ����������� � ����� �����, �� ��� �����������, �.�. � ������� ��������� � ��������� b, � �� ������������ � � b. ���������: if (a==b)...\n");
	}
	break;

	case 8:
	{
		/*int num, a = 750, b = 450, c = 150;
		cin >> num;

		if (num < a)
		{
			cout << "num<750";
		}
		else if (num < b)
		{
			cout << "num<450";
		}
		else
		{
			cout << "num<150";
		}*/

		printf("����������� ��������, �.�. ����� 2 ������� (������� ��������� �������� num) ��� ������ ����� �������� num (cout << ...)\n");
	}
	break;

	case 9:
	{
		/*double num;
		cin >> num;

		switch (num)
		{
		case 1: cout << "One";  break;
		case 2: cout << "Two"; break;
		case 3: cout << "Three";
		}*/
		printf("��� �� ������������, �.�. 1) ��� ������ ����� �������� ���������� num 2) ���������� num ��������� ��� double, ��� ����������� ��� ������ ������ � ��������� switch\n");
	}
	break;

	case 10:
	{
		/*cout << " ��������� ������� q � ������� r ��� �������, � �� d:" << endl;
		int a, d, q;
		cout << "������� �: " << endl;
		cin >> a;
		cout << "������� d: " << endl;
		cin >> d;
		if (q = a / d)
		{
			cout << "�������: " << q << endl;

		}
		double r;
		{
			cout << "������� �� �������:" << a % d << endl;
		}*/

		printf("��� ���������� �����������, �.�. 1) ��� ������ ����� � ���������� �������� q\n"
			"2) � ������� if ���������� ������������� q ���������� �������������� ������� � �� d, � �� ��������� q c a/d\n"
			"3) ���� ������ �� ���� ���� ������������ �������� if, � ������� ����� ����������� �������������� ������� a �� d � ������� �� �������\n"
			"4) ��������� ����� ������� ���������� r\n");
	}
	break;

	case 11:
	{
		/*int d;
		cout << "������� ����� ����� ����� ��� ����, ����� ������ ����� ��� ���� ������: ";
		cin >> d;

		if (d >= 1 && d <= 7)
		{
			while (d > 7)
				d -= 7;
			switch (d)
			{
			case �����������:
				cout << "��� �����������" << endl;
				break;
			case �������:
				cout << "��� �������" << endl;
				break;
			case �����:
				cout << "��� �����" << endl;
				break;
			case �������:
				cout << "��� �������" << endl;
				break;
			case �������:
				cout << "��� �������" << endl;
				break;
			case �������:
				cout << "��� �������" << endl;
				break;
			case �����������:
				cout << "��� �����������" << endl;
				break;
			}
		}
		else
		{
			cout << "������, �������� ���������� ����� �� 1 �� 7" << endl;
		}*/

		printf("��� �� ����������, �.�. �������� switch ���������� �������� �� ���������� d (����� �����), � � ������ ������� ��������� ��������\n");
	}
	break;
	
	}

	
}