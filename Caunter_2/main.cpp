#include<iostream>
#include"Caunter.h"


int main()
{
	setlocale(LC_ALL, "Russian");

	int x = 1;         // ���� �������� � �����         
	int z = 1;        // ������� ������ �� �����
	char c;          // �� ���
	std::cout << "������ ���������� ��������� �������� ��������?    y - yes, n - no" << std::endl;
	std::cin >> c;
	if (c == 'y') {
		std::cout << "������� ��������� �������� ��������: " << std::endl;
		std::cin >> x;
	}

	Counter p(x);

	while (z)
	{
		char n;
		std::cout << "������� ������� ('+', '-', '=' ��� 'x'): " << std::endl;
		std::cin >> n;
		switch (n)
		{
		case '+':
			p.increase();
			break;
		case '-':
			p.reduce();
			break;
		case '=':
			p.show();
			break;
		case 'x':
			z = 0;
			break;
		}
	}



}

