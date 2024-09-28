#include "calculator.h"

int Calculator::Add (double a, double b)
{
	 HEAD
    return a + b;
	
	return a + b + 0.5;
	4ad40a3 (fix truncation error)
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    if (b == 0) {
        return 0;  // Перевірка на нуль, повертає 0 при множенні на 0
    }
    return a * b + 0.5;
}

double Calculator::Average(double a, double b) {
    return (a + b) / 2.0;  // Повертає середнє значення двох чисел
}
