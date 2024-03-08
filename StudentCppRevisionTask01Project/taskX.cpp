#include "tasks.h"

/*	Task X. Rectangular World (1) [прямоугольный мир]
*
*	В прямоугольном мире свинья, раскормленная до размеров параллелепипеда,
*	лежит в квадратной луже грязи. Определите, полностью ли основание свиньи помещается
*	в данную лужу или нет.
*
*	Примечание
*	Не забудьте про "защиту от дурака".
* 
*	Формат входных данных [input]
*	Функция получает на вход три целых числа W, L, S: ширину и длину прямоугольной свиньи 
*	и сторону квадратной лужи.
*
*	Формат выходных данных [output]
*	Функция должна возвратить одно из булевских значений: true или false.
*
*	[sample function input  1]: 4 6 5
*	[sample function output 1]: false
*
*	[input  2]: 3 5 5
*	[output 2]: true
*/

bool taskX(int width, int length, int side) {
    cout << "Enter the width of the pig, the length of the pig, and the side of the square mud puddle separated by spaces: ";
    cin >> width >> length >> side;

    if (width <= side && length <= side) {
        cout << "The base of the pig can fit entirely into the mud puddle." << endl;
    }
    else {
        cout << "The base of the pig cannot fit entirely into the mud puddle." << endl;
    }
	return false;
}