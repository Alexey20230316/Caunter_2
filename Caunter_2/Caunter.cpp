#include"Caunter.h"
#include<iostream>

Counter::Counter(int x) {
	n = x;
}
void Counter::increase()  //  ���������
{       
	n = n + 1;
}
void Counter:: reduce() {           //  ���������
	n = n - 1;
}
void Counter:: show() {            //  ��������
	std::cout << "�������� ��������: " << n << std::endl;
}