#include"Caunter.h"
#include<iostream>

Counter::Counter(int x) {
	n = x;
}
void Counter::increase()  //  увеличить
{       
	n = n + 1;
}
void Counter:: reduce() {           //  уметьшить
	n = n - 1;
}
void Counter:: show() {            //  показать
	std::cout << "Значение счетчика: " << n << std::endl;
}