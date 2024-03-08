﻿#include "tasks.h"

/*	Task 03. Triangle [треугольник]
*
*	Даны три натуральных числа a, b, c.
*	Определите, существует ли треугольник с такими сторонами.
*
*	Примечание
*	При реализации программы постарайтесь не использовать условные конструкции.
*	Данную задачу можно решить с использованием только встроенных в язык C/C++ простых операций.
*
*	Формат входных данных [input]
*	Функция принимает три целых числа.
*
*	Формат выходных данных [output]
*	Функция должна возвратить одно из булевских значений true или false.
*
*	[Sample function input  1]: 3 4 5
*	[Sample function output 1]: true
*
*	[input  2]: 1 1 3
*	[output 2]: false
*/

bool task03(int a, int b, int c) {
    cout << "Enter three natural numbers a, b, c separated by spaces: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Triangle with sides " << a << ", " << b << ", " << c << " can exist." << endl;
    }
    else {
        cout << "Triangle with sides " << a << ", " << b << ", " << c << " cannot exist." << endl;
    }
	return false;
}